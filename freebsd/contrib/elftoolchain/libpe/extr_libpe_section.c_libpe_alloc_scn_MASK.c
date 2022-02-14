
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ps_pe; int ps_b; } ;
typedef TYPE_1__ PE_Scn ;
typedef int PE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_1 ;

PE_Scn *
FUNC_2(PE *VAR_2)
{
 PE_Scn *VAR_3;

 if ((VAR_3 = FUNC_1(1, sizeof(PE_Scn))) == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 FUNC_0(&VAR_3->ps_b);
 VAR_3->ps_pe = VAR_2;

 return (VAR_3);
}
