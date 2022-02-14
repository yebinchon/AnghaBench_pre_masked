
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwi_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bwi_mac*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct bwi_mac *VAR_2)
{
 uint16_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
 VAR_4 = (int)VAR_3;

 VAR_4 = ((VAR_4 - 11) * 103) / 64;
 VAR_4 -= 109;
 return VAR_4;
}
