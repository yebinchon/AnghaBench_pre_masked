
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long total_used; int idx_lebs; scalar_t__ total_dark; scalar_t__ total_dead; } ;
struct ubifs_info {long long main_bytes; int jhead_cnt; long long leb_size; int dark_wm; TYPE_1__ lst; } ;



long long FUNC_0(const struct ubifs_info *VAR_0, int VAR_1)
{
 int VAR_2;
 long long VAR_3;

 VAR_3 = VAR_0->main_bytes - VAR_0->lst.total_used;






 VAR_2 = VAR_1;


 VAR_2 += 1;






 VAR_2 += VAR_0->jhead_cnt - 1;


 VAR_2 += 1;

 VAR_3 -= (long long)VAR_2 * VAR_0->leb_size;


 VAR_3 -= VAR_0->lst.total_dead;







 VAR_3 -= VAR_0->lst.total_dark;







 if (VAR_0->lst.idx_lebs > VAR_1) {
  VAR_2 = VAR_0->lst.idx_lebs - VAR_1;
  VAR_3 -= VAR_2 * VAR_0->dark_wm;
 }


 return VAR_3 > 0 ? VAR_3 : 0;
}
