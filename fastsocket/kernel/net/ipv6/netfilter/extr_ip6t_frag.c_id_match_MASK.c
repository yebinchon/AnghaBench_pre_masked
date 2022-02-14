
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline bool
FUNC_1(u_int32_t VAR_0, u_int32_t VAR_1, u_int32_t VAR_2, bool VAR_3)
{
 bool VAR_4;
 FUNC_0("frag id_match:%c 0x%x <= 0x%x <= 0x%x", VAR_3 ? '!' : ' ',
   VAR_0, VAR_2, VAR_1);
 VAR_4 = (VAR_2 >= VAR_0 && VAR_2 <= VAR_1) ^ VAR_3;
 FUNC_0(" result %s\n", VAR_4 ? "PASS" : "FAILED");
 return VAR_4;
}
