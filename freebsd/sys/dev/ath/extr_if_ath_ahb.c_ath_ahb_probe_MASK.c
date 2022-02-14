
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 int VAR_5, VAR_6;
 const char* VAR_7;




 if (FUNC_5(FUNC_1(VAR_4), FUNC_2(VAR_4),
     "vendor_id", &VAR_5) != 0) {
  VAR_5 = VAR_3;
 }

 if (FUNC_5(FUNC_1(VAR_4), FUNC_2(VAR_4),
     "device_id", &VAR_6) != 0) {
  VAR_6 = VAR_0;
 }

 FUNC_3(VAR_4, "Vendor=0x%04x, Device=0x%04x\n",
     VAR_5 & 0xffff,
     VAR_6 & 0xffff);


 VAR_7 = FUNC_0(VAR_5, VAR_6);

 if (VAR_7 != ((void*)0)) {
  FUNC_4(VAR_4, VAR_7);
  return VAR_1;
 }
 return VAR_2;
}
