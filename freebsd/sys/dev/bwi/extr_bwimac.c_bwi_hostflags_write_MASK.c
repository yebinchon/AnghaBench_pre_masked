
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bwi_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwi_mac*,int ,int ,int) ;

void
FUNC_1(struct bwi_mac *VAR_3, uint64_t VAR_4)
{
 uint64_t VAR_5;

 VAR_5 = VAR_4 & 0xffff;
 FUNC_0(VAR_3, VAR_0, VAR_1, VAR_5);

 VAR_5 = (VAR_4 >> 16) & 0xffff;
 FUNC_0(VAR_3, VAR_0, VAR_2, VAR_5);


}
