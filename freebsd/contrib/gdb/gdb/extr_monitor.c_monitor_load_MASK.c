
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_2__ {int flags; scalar_t__ loadresp; int load; int (* load_routine ) (int ,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int * VAR_6 ;
 int FUNC_6 (char*,char*,char*,unsigned long*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_7, int VAR_8)
{
  FUNC_2 ("MON load\n");

  if (VAR_2->load_routine)
    VAR_2->load_routine (VAR_5, VAR_7, VAR_4);
  else
    {
      int VAR_9;
      unsigned long VAR_10;
      char VAR_11[128];


      VAR_9 = FUNC_6 (VAR_7, "%s 0x%lx", VAR_11, &VAR_10);
      if (VAR_9 > 1)
 VAR_7 = VAR_11;
      else
 VAR_10 = 0;

      FUNC_5 (VAR_2->load);
      if (VAR_2->loadresp)
 FUNC_3 (VAR_2->loadresp, ((void*)0), 0);

      FUNC_1 (VAR_5, VAR_7, (bfd_vma) VAR_10,
   32, VAR_1, VAR_4,
   VAR_2->flags & VAR_0 ?
   VAR_6 : ((void*)0));

      FUNC_4 (((void*)0), 0);
    }


  if (VAR_3)
    FUNC_8 (FUNC_0 (VAR_3));
}
