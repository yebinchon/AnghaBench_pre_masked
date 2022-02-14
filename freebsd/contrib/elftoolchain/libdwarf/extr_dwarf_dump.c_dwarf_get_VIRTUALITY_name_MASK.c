
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;

int
FUNC_1(unsigned VAR_2, const char **VAR_3)
{

 FUNC_0(VAR_3 != ((void*)0));

 switch (VAR_2) {
 case 130:
  *VAR_3 = "DW_VIRTUALITY_none"; break;
 case 128:
  *VAR_3 = "DW_VIRTUALITY_virtual"; break;
 case 129:
  *VAR_3 = "DW_VIRTUALITY_pure_virtual"; break;
 default:
  return (VAR_0);
 }

 return (VAR_1);
}
