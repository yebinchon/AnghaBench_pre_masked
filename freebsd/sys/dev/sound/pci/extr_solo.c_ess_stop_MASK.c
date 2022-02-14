
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int dummy; } ;
struct ess_chinfo {int stopping; int hwch; struct ess_info* parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ess_info*,int) ;
 int FUNC_2 (struct ess_info*,int) ;
 int FUNC_3 (struct ess_info*,int,int) ;
 int FUNC_4 (struct ess_info*,int,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct ess_chinfo *VAR_0)
{
 struct ess_info *VAR_1 = VAR_0->parent;

 FUNC_0(FUNC_5("ess_stop\n"));
 VAR_0->stopping = 1;
 if (VAR_0->hwch == 1)
  FUNC_4(VAR_1, 0xb8, FUNC_2(VAR_1, 0xb8) & ~0x04);
 else
  FUNC_3(VAR_1, 0x78, FUNC_1(VAR_1, 0x78) & ~0x10);
 FUNC_0(FUNC_5("done with stop\n"));
 return 0;
}
