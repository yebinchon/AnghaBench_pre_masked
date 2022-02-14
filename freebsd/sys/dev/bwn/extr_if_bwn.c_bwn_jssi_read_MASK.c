
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct bwn_mac *VAR_1)
{
 uint32_t VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 0x08a);
 VAR_2 <<= 16;
 VAR_2 |= FUNC_0(VAR_1, VAR_0, 0x088);

 return (VAR_2);
}
