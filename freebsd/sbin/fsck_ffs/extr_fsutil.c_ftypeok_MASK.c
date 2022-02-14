
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;


 int FUNC_0 (union dinode*,int ) ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(union dinode *VAR_3)
{
 switch (FUNC_0(VAR_3, VAR_2) & VAR_0) {

 case 132:
 case 129:
 case 134:
 case 133:
 case 130:
 case 128:
 case 131:
  return (1);

 default:
  if (VAR_1)
   FUNC_1("bad file type 0%o\n", FUNC_0(VAR_3, VAR_2));
  return (0);
 }
}
