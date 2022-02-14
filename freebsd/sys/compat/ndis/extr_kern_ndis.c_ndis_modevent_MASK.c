
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_3__ {int ipt_wrap; int * ipt_func; int ipt_ftype; int ipt_argcnt; } ;
typedef TYPE_1__ image_patch_table ;
typedef int funcptr ;


 int VAR_0 ;



 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_14(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 image_patch_table *VAR_7;

 switch (VAR_4) {
 case 130:

  FUNC_3();
  FUNC_7();
  FUNC_11();
  FUNC_5();
  FUNC_9();

  VAR_7 = VAR_1;
  while (VAR_7->ipt_func != ((void*)0)) {
   FUNC_13((funcptr)VAR_7->ipt_func,
       (funcptr *)&VAR_7->ipt_wrap,
       VAR_7->ipt_argcnt, VAR_7->ipt_ftype);
   VAR_7++;
  }

  FUNC_1(&VAR_2);
  break;
 case 129:
  if (FUNC_0(&VAR_2) == ((void*)0)) {

   FUNC_4();
   FUNC_8();
   FUNC_10();
   FUNC_6();
   FUNC_2();

   VAR_7 = VAR_1;
   while (VAR_7->ipt_func != ((void*)0)) {
    FUNC_12(VAR_7->ipt_wrap);
    VAR_7++;
   }
  }
  break;
 case 128:

  FUNC_4();
  FUNC_8();
  FUNC_10();
  FUNC_6();
  FUNC_2();

  VAR_7 = VAR_1;
  while (VAR_7->ipt_func != ((void*)0)) {
   FUNC_12(VAR_7->ipt_wrap);
   VAR_7++;
  }

  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
