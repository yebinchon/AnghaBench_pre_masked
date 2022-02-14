
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bsdar {int options; int s_cnt; int s_sn_sz; } ;


 int VAR_0 ;

__attribute__((used)) static size_t
FUNC_0(struct bsdar *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->options & VAR_0) {
  VAR_2 = 2 * sizeof(long) + (VAR_1->s_cnt * 2 * sizeof(long)) +
      VAR_1->s_sn_sz;
 } else {






  VAR_2 = sizeof(uint32_t) + VAR_1->s_cnt * sizeof(uint32_t) +
      VAR_1->s_sn_sz;
 }

 return (VAR_2);
}
