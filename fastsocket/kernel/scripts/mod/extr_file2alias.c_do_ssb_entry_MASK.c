
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device_id {scalar_t__ vendor; scalar_t__ coreid; scalar_t__ revision; } ;


 int FUNC_0 (char*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
   struct ssb_device_id *VAR_4, char *VAR_5)
{
 VAR_4->vendor = FUNC_1(VAR_4->vendor);
 VAR_4->coreid = FUNC_1(VAR_4->coreid);
 VAR_4->revision = FUNC_1(VAR_4->revision);

 FUNC_3(VAR_5, "ssb:");
 FUNC_0(VAR_5, "v", VAR_4->vendor != VAR_2, VAR_4->vendor);
 FUNC_0(VAR_5, "id", VAR_4->coreid != VAR_0, VAR_4->coreid);
 FUNC_0(VAR_5, "rev", VAR_4->revision != VAR_1, VAR_4->revision);
 FUNC_2(VAR_5);
 return 1;
}
