
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*,int ) ;

__attribute__((used)) static uint16_t FUNC_3(struct bwn_mac *VAR_0, uint16_t VAR_1)
{
 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0) ? 0x159 : 0x154;
 return FUNC_2(VAR_0, FUNC_0(7, VAR_1)) & 0x7;
}
