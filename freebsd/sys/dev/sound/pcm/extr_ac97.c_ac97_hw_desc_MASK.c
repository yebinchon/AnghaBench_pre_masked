
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static const char*
FUNC_1(u_int32_t VAR_1, const char* VAR_2, const char* VAR_3, char* VAR_4)
{
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_4, "Unknown AC97 Codec (id = 0x%08x)", VAR_1);
  return VAR_4;
 }

 if (VAR_2 == ((void*)0)) VAR_2 = "Unknown";

 if (VAR_0) {
  FUNC_0(VAR_4, "%s %s AC97 Codec (id = 0x%08x)", VAR_2, VAR_3, VAR_1);
 } else {
  FUNC_0(VAR_4, "%s %s AC97 Codec", VAR_2, VAR_3);
 }
 return VAR_4;
}
