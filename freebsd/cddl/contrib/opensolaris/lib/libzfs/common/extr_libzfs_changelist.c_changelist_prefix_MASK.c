
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cn_handle; void* cn_needpost; scalar_t__ cn_zoned; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_9__ {int cl_prop; int cl_gflags; int cl_mflags; int cl_list; } ;
typedef TYPE_2__ prop_changelist_t ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;

int
FUNC_7(prop_changelist_t *VAR_3)
{
 prop_changenode_t *VAR_4;
 int VAR_5 = 0;

 if (VAR_3->cl_prop != 129 &&
     VAR_3->cl_prop != 128)
  return (0);

 for (VAR_4 = FUNC_3(VAR_3->cl_list); VAR_4 != ((void*)0);
     VAR_4 = FUNC_4(VAR_3->cl_list, VAR_4)) {


  if (VAR_5 == -1) {
   VAR_4->cn_needpost = VAR_0;
   continue;
  }





  if (FUNC_2() == VAR_2 && VAR_4->cn_zoned)
   continue;

  if (!FUNC_0(VAR_4->cn_handle)) {



   switch (VAR_3->cl_prop) {
   case 129:
    if (VAR_3->cl_gflags & VAR_1)
     break;
    if (FUNC_5(VAR_4->cn_handle, ((void*)0),
        VAR_3->cl_mflags) != 0) {
     VAR_5 = -1;
     VAR_4->cn_needpost = VAR_0;
    }
    break;
   case 128:
    (void) FUNC_6(VAR_4->cn_handle, ((void*)0));
    break;

   default:
    break;
   }
  }
 }

 if (VAR_5 == -1)
  (void) FUNC_1(VAR_3);

 return (VAR_5);
}
