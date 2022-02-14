
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int bus; int vendor; int product; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1,
        struct hid_device_id *VAR_2, char *VAR_3)
{
 VAR_2->bus = FUNC_1(VAR_2->bus);
 VAR_2->vendor = FUNC_1(VAR_2->vendor);
 VAR_2->product = FUNC_1(VAR_2->product);

 FUNC_2(VAR_3, "hid:b%04X", VAR_2->bus);
 FUNC_0(VAR_3, "v", VAR_2->vendor != VAR_0, VAR_2->vendor);
 FUNC_0(VAR_3, "p", VAR_2->product != VAR_0, VAR_2->product);

 return 1;
}
