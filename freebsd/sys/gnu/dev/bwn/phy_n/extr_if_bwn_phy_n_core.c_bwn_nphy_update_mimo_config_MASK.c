
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_3, int32_t VAR_4)
{
 uint16_t VAR_5 = FUNC_0(VAR_3, VAR_0);

 VAR_5 |= VAR_1;
 if (VAR_4 == 1)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;

 FUNC_1(VAR_3, VAR_0, VAR_5);
}
