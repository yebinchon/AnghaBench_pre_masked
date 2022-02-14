
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct ess_info {int* dmasz; int io; int vc; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct ess_info *VAR_1, int VAR_2, u_int32_t VAR_3, u_int16_t VAR_4, int VAR_5)
{
 FUNC_0(VAR_2 == 1 || VAR_2 == 2, ("bad ch"));
 VAR_1->dmasz[VAR_2 - 1] = VAR_4;
 if (VAR_2 == 1) {
  FUNC_1(VAR_1->vc, 0x8, 0xc4, 1);
  FUNC_1(VAR_1->vc, 0xd, 0xff, 1);
  FUNC_1(VAR_1->vc, 0xf, 0x01, 1);
  FUNC_1(VAR_1->vc, 0xb, VAR_5 == VAR_0? 0x58 : 0x54, 1);
  FUNC_1(VAR_1->vc, 0x0, VAR_3, 4);
  FUNC_1(VAR_1->vc, 0x4, VAR_4 - 1, 2);

 } else if (VAR_2 == 2) {
  FUNC_1(VAR_1->io, 0x6, 0x08, 1);
  FUNC_1(VAR_1->io, 0x0, VAR_3, 4);
  FUNC_1(VAR_1->io, 0x4, VAR_4, 2);
 }
 return 0;
}
