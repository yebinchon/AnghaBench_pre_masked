
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int gcret_t ;
struct TYPE_15__ {int e_event; int e_value; } ;
struct TYPE_14__ {TYPE_1__* gp; } ;
struct TYPE_13__ {int (* scr_bell ) (TYPE_2__*) ;} ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EVENT ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static gcret_t
FUNC_4(
 SCR *VAR_6,
 int VAR_7,
 EVENT *VAR_8,
 u_int32_t VAR_9)
{
 u_int32_t VAR_10;

 for (VAR_10 = 0;;) {
  if (FUNC_2(VAR_6, VAR_8, 0, VAR_9 | VAR_10))
   return (VAR_2);
  VAR_10 = 0;

  switch (VAR_8->e_event) {
  case 133:







   if (VAR_8->e_value == VAR_5) {
    VAR_10 = VAR_0;
    break;
   }
   return (VAR_4);
  case 131:
  case 132:
   return (VAR_2);
  case 130:
   (void)VAR_6->gp->scr_bell(VAR_6);
   return (VAR_3);
  case 129:
   if (FUNC_3(VAR_6, VAR_8))
    return (VAR_2);
   break;
  case 128:
   return (VAR_1);
  default:
   FUNC_1(VAR_6, VAR_8);
   return (VAR_1);
  }
 }

}
