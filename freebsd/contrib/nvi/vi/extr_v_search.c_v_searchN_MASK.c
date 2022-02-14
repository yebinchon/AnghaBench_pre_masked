
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dir_t ;
typedef int VICMD ;
struct TYPE_4__ {int searchdir; } ;
typedef TYPE_1__ SCR ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int ,int ,int) ;

int
FUNC_1(SCR *VAR_1, VICMD *VAR_2)
{
 dir_t VAR_3;

 switch (VAR_1->searchdir) {
 case 129:
  VAR_3 = 128;
  break;
 case 128:
  VAR_3 = 129;
  break;
 default:
  VAR_3 = VAR_1->searchdir;
  break;
 }
 return (FUNC_0(VAR_1, VAR_2, ((void*)0), 0, VAR_0, VAR_3));
}
