
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ thr_uid; scalar_t__ thr_discrim; } ;
typedef TYPE_1__ prof_tdata_t ;



__attribute__((used)) static int
FUNC_0(const prof_tdata_t *VAR_0, const prof_tdata_t *VAR_1) {
 int VAR_2;
 uint64_t VAR_3 = VAR_0->thr_uid;
 uint64_t VAR_4 = VAR_1->thr_uid;

 VAR_2 = ((VAR_3 > VAR_4) - (VAR_3 < VAR_4));
 if (VAR_2 == 0) {
  uint64_t VAR_5 = VAR_0->thr_discrim;
  uint64_t VAR_6 = VAR_1->thr_discrim;

  VAR_2 = ((VAR_5 > VAR_6) - (VAR_5 < VAR_6));
 }
 return VAR_2;
}
