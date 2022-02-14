
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_14__ {unsigned long id; } ;
struct TYPE_16__ {TYPE_1__ u; int named; } ;
typedef TYPE_3__ const rc_res_id ;
struct TYPE_15__ {int res; } ;
struct TYPE_17__ {TYPE_2__ u; scalar_t__ subdir; TYPE_3__ const id; struct TYPE_17__* next; } ;
typedef TYPE_4__ rc_res_entry ;
struct TYPE_18__ {scalar_t__ time; scalar_t__ characteristics; scalar_t__ major; scalar_t__ minor; TYPE_4__* entries; } ;
typedef TYPE_5__ rc_res_directory ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,TYPE_3__ const*,TYPE_3__ const*,int ,int*) ;
 int FUNC_4 (int *,TYPE_4__ const*,TYPE_3__ const*,TYPE_3__ const*,int*,int) ;

__attribute__((used)) static void
FUNC_5 (FILE *VAR_1, const rc_res_directory *VAR_2,
      const rc_res_id *VAR_3, const rc_res_id *VAR_4,
      rc_uint_type *VAR_5, int VAR_6)
{
  const rc_res_entry *VAR_7;


  if (VAR_2->time != 0 || VAR_2->characteristics != 0 || VAR_2->major != 0 || VAR_2->minor != 0)
    {
      FUNC_2 (VAR_1, "COFF information not part of RC");
  if (VAR_2->time != 0)
 FUNC_2 (VAR_1, "Time stamp: %u", VAR_2->time);
  if (VAR_2->characteristics != 0)
 FUNC_2 (VAR_1, "Characteristics: %u", VAR_2->characteristics);
  if (VAR_2->major != 0 || VAR_2->minor != 0)
 FUNC_2 (VAR_1, "Version major:%d minor:%d", VAR_2->major, VAR_2->minor);
    }

  for (VAR_7 = VAR_2->entries; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      switch (VAR_6)
 {
 case 1:




   VAR_3 = &VAR_7->id;
   break;

 case 2:


   VAR_4 = &VAR_7->id;
   break;

 case 3:


   if (! VAR_7->id.named
       && VAR_7->id.u.id != (unsigned long) (unsigned int) *VAR_5
       && (VAR_7->id.u.id & 0xffff) == VAR_7->id.u.id)
     {
       FUNC_0 (VAR_1, "LANGUAGE %u, %u\n",
         VAR_7->id.u.id & ((1 << VAR_0) - 1),
         (VAR_7->id.u.id >> VAR_0) & 0xff);
       *VAR_5 = VAR_7->id.u.id;
     }
   break;

 default:
   break;
 }

      if (VAR_7->subdir)
 FUNC_4 (VAR_1, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
      else
 {
   if (VAR_6 == 3)
     {





       FUNC_3 (VAR_1, VAR_3, VAR_4, VAR_7->u.res, VAR_5);
     }
   else
     {
       FUNC_2 (VAR_1, "Resource at unexpected level %d", VAR_6);
       FUNC_3 (VAR_1, VAR_3, (rc_res_id *) ((void*)0), VAR_7->u.res,
     VAR_5);
     }
 }
    }
  if (VAR_2->entries == ((void*)0))
    {
      FUNC_1 (VAR_1);
    }
}
