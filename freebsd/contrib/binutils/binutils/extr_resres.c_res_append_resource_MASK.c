
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rc_res_resource ;
typedef int rc_res_id ;
struct TYPE_5__ {int * res; TYPE_3__* dir; } ;
struct TYPE_6__ {int subdir; TYPE_1__ u; int id; struct TYPE_6__* next; } ;
typedef TYPE_2__ rc_res_entry ;
struct TYPE_7__ {unsigned long time; TYPE_2__* entries; scalar_t__ minor; scalar_t__ major; scalar_t__ characteristics; } ;
typedef TYPE_3__ rc_res_directory ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int,int const*) ;
 int VAR_1 ;
 unsigned long FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7 (rc_res_directory **VAR_2, rc_res_resource *VAR_3,
       int VAR_4, const rc_res_id *VAR_5, int VAR_6)
{
  rc_res_entry *VAR_7 = ((void*)0);
  int VAR_8;

  FUNC_0 (VAR_4 > 0);
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
    {
      rc_res_entry **VAR_9;

      if (*VAR_2 == ((void*)0))
 {
   static unsigned long VAR_10;



   if (VAR_10 == 0)
     VAR_10 = FUNC_5 (((void*)0));

   *VAR_2 = ((rc_res_directory *)
   FUNC_2 (sizeof (rc_res_directory)));
   (*VAR_2)->characteristics = 0;
   (*VAR_2)->time = VAR_10;
   (*VAR_2)->major = 0;
   (*VAR_2)->minor = 0;
   (*VAR_2)->entries = ((void*)0);
 }

      for (VAR_9 = &(*VAR_2)->entries; *VAR_9 != ((void*)0); VAR_9 = &(*VAR_9)->next)
 if (FUNC_3 ((*VAR_9)->id, VAR_5[VAR_8]) == 0)
   break;

      if (*VAR_9 != ((void*)0))
 VAR_7 = *VAR_9;
      else
 {
   VAR_7 = (rc_res_entry *) FUNC_2 (sizeof (rc_res_entry));
   VAR_7->next = ((void*)0);
   VAR_7->id = VAR_5[VAR_8];
   if ((VAR_8 + 1) < VAR_4)
     {
       VAR_7->subdir = 1;
       VAR_7->u.dir = ((void*)0);
     }
   else
     {
       VAR_7->subdir = 0;
       VAR_7->u.res = ((void*)0);
     }

   *VAR_9 = VAR_7;
 }

      if ((VAR_8 + 1) < VAR_4)
 {
   if (! VAR_7->subdir)
     {
       FUNC_1 (VAR_1, "%s: ", VAR_0);
       FUNC_4 (VAR_1, VAR_8, VAR_5);
       FUNC_1 (VAR_1, ": expected to be a directory\n");
       FUNC_6 (1);
     }

   VAR_2 = &VAR_7->u.dir;
 }
    }

  if (VAR_7->subdir)
    {
      FUNC_1 (VAR_1, "%s: ", VAR_0);
      FUNC_4 (VAR_1, VAR_4, VAR_5);
      FUNC_1 (VAR_1, ": expected to be a leaf\n");
      FUNC_6 (1);
    }

  if (VAR_7->u.res != ((void*)0))
    {
      if (VAR_6)
 return;

      FUNC_1 (VAR_1, "%s: warning: ", VAR_0);
      FUNC_4 (VAR_1, VAR_4, VAR_5);
      FUNC_1 (VAR_1, ": duplicate value\n");
    }

  VAR_7->u.res = VAR_3;
}
