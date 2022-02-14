
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int FUNC_0 (int const*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_1(const atf_tc_t *VAR_0, const char *VAR_1)
{




 size_t VAR_2;
 int VAR_3;
 for (VAR_2 = 2; VAR_2 <= 65536; VAR_2 *= 2) {
  for (VAR_3 = -1; VAR_3 <= 1; VAR_3++) {
   FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_3);
  }
 }
}
