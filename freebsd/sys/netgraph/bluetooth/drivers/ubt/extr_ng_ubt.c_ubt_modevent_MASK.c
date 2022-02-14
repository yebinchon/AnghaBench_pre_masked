
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;


 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = FUNC_0(&VAR_2);
  if (VAR_6 != 0)
   FUNC_2("%s: Could not register Netgraph node type, " "error=%d\n", VAR_1, VAR_6);

  break;

 case 128:
  VAR_6 = FUNC_1(&VAR_2);
  break;

 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
