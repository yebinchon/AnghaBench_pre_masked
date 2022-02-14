
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_1, uint16_t VAR_2, int VAR_3)
{
 uint16_t VAR_4;

 if (VAR_3) {
  VAR_4 = 0x480;
  VAR_4 += (FUNC_1(VAR_2) & 0x000f) * 2;
 } else {
  VAR_4 = 0x4c0;
  VAR_4 += (FUNC_0(VAR_2) & 0x000f) * 2;
 }
 FUNC_3(VAR_1, VAR_0, VAR_4 + 0x20,
     FUNC_2(VAR_1, VAR_0, VAR_4));
}
