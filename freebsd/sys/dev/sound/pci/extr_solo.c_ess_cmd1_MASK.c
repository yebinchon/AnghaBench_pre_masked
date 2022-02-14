
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ess_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ess_info*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct ess_info *VAR_0, u_char VAR_1, int VAR_2)
{
     FUNC_0(FUNC_2("ess_cmd1: %x, %x\n", VAR_1, VAR_2));
     if (FUNC_1(VAR_0, VAR_1)) {
  return FUNC_1(VAR_0, VAR_2 & 0xff);
     } else return 0;
}
