
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be16 ;







 int FUNC_0 (int ) ;

const char *FUNC_1(__be16 VAR_0)
{
 char* VAR_1 = "None";

 switch (FUNC_0(VAR_0)) {
 case 130: VAR_1 = "EtherII"; break;
 case 132: VAR_1 = "802.2"; break;
 case 129: VAR_1 = "SNAP"; break;
 case 131: VAR_1 = "802.3"; break;
 case 128: VAR_1 = "802.2TR"; break;
 }

 return VAR_1;
}
