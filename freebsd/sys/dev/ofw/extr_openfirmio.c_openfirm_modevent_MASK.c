
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_7, int VAR_8, void *VAR_9)
{

 switch(VAR_8) {
 case 130:
  if (VAR_4)
   FUNC_2("openfirm: <Open Firmware control device>\n");





  VAR_6 = FUNC_1(&VAR_5, VAR_2,
      VAR_3, VAR_1, 0600, "openfirm");
  return 0;

 case 128:
  FUNC_0(VAR_6);
  return 0;

 case 129:
  return 0;

 default:
  return VAR_0;
 }
}
