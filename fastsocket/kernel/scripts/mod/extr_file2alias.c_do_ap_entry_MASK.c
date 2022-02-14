
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_device_id {int dev_type; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0,
         struct ap_device_id *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_2, "ap:t%02X*", VAR_1->dev_type);
 return 1;
}
