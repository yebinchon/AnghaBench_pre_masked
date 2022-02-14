
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int exadj_t ;
struct TYPE_3__ {int * el; int * cup; int * cuu1; } ;
typedef int SCR ;
typedef TYPE_1__ CL_PRIVATE ;


 TYPE_1__* FUNC_0 (int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char) ;
 int VAR_3 ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;

int
FUNC_6(SCR *VAR_4, exadj_t VAR_5)
{
 CL_PRIVATE *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 switch (VAR_5) {
 case 128:

  if (VAR_6->cuu1 != ((void*)0))
   (void)FUNC_5(VAR_6->cuu1, 1, VAR_2);
  else if (VAR_6->cup != ((void*)0))
   (void)FUNC_5(FUNC_4(VAR_6->cup,
       0, VAR_0 - 2), 1, VAR_2);
  else
   return (0);

 case 129:

  if (VAR_6->el != ((void*)0)) {
   (void)FUNC_3('\r');
   (void)FUNC_5(VAR_6->el, 1, VAR_2);
  } else {
   for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
    (void)FUNC_3('\b');
   for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
    (void)FUNC_3(' ');
   (void)FUNC_3('\r');
   (void)FUNC_2(VAR_3);
  }
  break;
 default:
  FUNC_1();
 }
 return (0);
}
