
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ess_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ess_info*) ;
 int FUNC_2 (struct ess_info*,int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct ess_info *VAR_1, u_char VAR_2)
{
     int VAR_3;

     for (VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
  if (FUNC_1(VAR_1)) {
       FUNC_2(VAR_1, VAR_0, VAR_2);
       return 1;
  }
  if (VAR_3 > 10) FUNC_0((VAR_3 > 100)? 1000 : 10);
     }
     FUNC_3("ess_dspwr(0x%02x) timed out.\n", VAR_2);
     return 0;
}
