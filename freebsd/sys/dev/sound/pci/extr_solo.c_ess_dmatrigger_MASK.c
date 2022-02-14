
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int io; int vc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct ess_info *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_1 == 1 || VAR_1 == 2, ("bad ch"));
 if (VAR_1 == 1)
  FUNC_1(VAR_0->vc, 0xf, VAR_2? 0x00 : 0x01, 1);
 else if (VAR_1 == 2)
  FUNC_1(VAR_0->io, 0x6, 0x08 | (VAR_2? 0x02 : 0x00), 1);
 return 0;
}
