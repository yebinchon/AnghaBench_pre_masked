
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int* dmasz; int io; int vc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ess_info*,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct ess_info *VAR_0, int VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

 FUNC_1(VAR_1 == 1 || VAR_1 == 2, ("bad ch"));
 if (VAR_1 == 1) {
  FUNC_2(VAR_0, VAR_1, 0);
  FUNC_0(20);
  do {
   FUNC_0(10);
   if (VAR_4 > 1)
    FUNC_4("DMA count reg bogus: %04x & %04x\n",
     VAR_3, VAR_2);
   VAR_3 = FUNC_3(VAR_0->vc, 0x4, 2) + 1;
   VAR_2 = FUNC_3(VAR_0->vc, 0x4, 2) + 1;
  } while ((VAR_2 > VAR_0->dmasz[VAR_1 - 1] || VAR_3 < VAR_2 || (VAR_2 - VAR_3) > 0x8) && VAR_4++ < 1000);
  FUNC_2(VAR_0, VAR_1, 1);
 }
 else if (VAR_1 == 2)
  VAR_2 = FUNC_3(VAR_0->io, 0x4, 2);
 return VAR_0->dmasz[VAR_1 - 1] - VAR_2;
}
