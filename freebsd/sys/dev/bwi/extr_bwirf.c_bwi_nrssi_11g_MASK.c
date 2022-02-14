
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_mac {int dummy; } ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_mac*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline int16_t
FUNC_2(struct bwi_mac *VAR_1)
{
 int16_t VAR_2;



 VAR_2 = (int16_t)FUNC_1(FUNC_0(VAR_1, 0x47f), FUNC_0(13, 8));
 if (VAR_2 >= 32)
  VAR_2 -= 64;
 return VAR_2;


}
