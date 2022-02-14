
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t bitmap_t ;
struct TYPE_4__ {size_t nbits; int ngroups; } ;
typedef TYPE_1__ bitmap_info_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (size_t*,int,int ) ;

void
FUNC_2(bitmap_t *VAR_2, const bitmap_info_t *VAR_3, bool VAR_4) {
 size_t VAR_5;

 if (VAR_4) {
  FUNC_1(VAR_2, 0, FUNC_0(VAR_3));
  return;
 }

 FUNC_1(VAR_2, 0xffU, FUNC_0(VAR_3));
 VAR_5 = (VAR_0 - (VAR_3->nbits & VAR_1))
     & VAR_1;
 if (VAR_5 != 0) {
  VAR_2[VAR_3->ngroups - 1] >>= VAR_5;
 }
}
