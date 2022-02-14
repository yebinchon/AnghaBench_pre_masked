
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pe_fd; int pe_cmd; int pe_scn; int pe_obj; } ;
typedef int PE_Object ;
typedef int PE_Cmd ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

PE *
FUNC_4(int VAR_5, PE_Cmd VAR_6, PE_Object VAR_7)
{
 PE *VAR_8;

 if ((VAR_8 = FUNC_1(1, sizeof(*VAR_8))) == ((void*)0)) {
  VAR_4 = VAR_1;
  return (((void*)0));
 }
 VAR_8->pe_fd = VAR_5;
 VAR_8->pe_cmd = VAR_6;
 VAR_8->pe_obj = VAR_7;
 FUNC_0(&VAR_8->pe_scn);

 switch (VAR_6) {
 case 129:
 case 130:
  if (FUNC_2(VAR_8) < 0)
   goto init_fail;
  break;

 case 128:
  if (VAR_7 < VAR_3 || VAR_7 > VAR_2) {
   VAR_4 = VAR_0;
   goto init_fail;
  }
  break;

 default:
  VAR_4 = VAR_0;
  goto init_fail;
 }

 return (VAR_8);

init_fail:
 FUNC_3(VAR_8);
 return (((void*)0));
}
