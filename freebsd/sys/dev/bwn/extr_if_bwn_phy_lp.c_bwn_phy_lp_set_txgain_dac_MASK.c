
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_1, uint16_t VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0) & 0xc7f;
 VAR_3 |= VAR_2 << 7;
 FUNC_1(VAR_1, VAR_0, 0xf000, VAR_3);
}
