
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int device_t ;


 int FUNC_0 (int ,char*,char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u_int
FUNC_1(device_t VAR_0, const char *VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4)
{
 if (VAR_2 > VAR_4) {
  FUNC_0(VAR_0, "Warning, %s %u out of range, "
   "using max %u\n", VAR_1, VAR_2, VAR_4);
  VAR_2 = VAR_4;
 } else if (VAR_2 < VAR_3) {
  FUNC_0(VAR_0, "Warning, %s %u out of range, "
   "using min %u\n", VAR_1, VAR_2, VAR_3);
  VAR_2 = VAR_3;
 }
 return VAR_2;
}
