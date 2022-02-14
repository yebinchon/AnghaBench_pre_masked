
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int n_wq; int n_io; } ;
struct TYPE_6__ {int* num_qentries; TYPE_1__ config; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static void
FUNC_3(ocs_hw_t *VAR_4)
{
 uint32_t VAR_5 = FUNC_2(&VAR_4->sli, VAR_3);
 uint32_t VAR_6 = VAR_4->num_qentries[VAR_3];
 uint32_t VAR_7 = VAR_4->num_qentries[VAR_2];






 if (VAR_7 < VAR_6 * 2) {
  VAR_6 = VAR_4->num_qentries[VAR_3] = VAR_7 / 2;
 }
 VAR_4->config.n_wq = ((VAR_4->config.n_io * 2) + (VAR_6 - 1)) / VAR_6;





 if (VAR_4->config.n_wq < 4 &&
     VAR_1 == FUNC_1(&VAR_4->sli)) {
  VAR_4->config.n_wq = 4;
 }




 if (VAR_4->config.n_wq < 2 &&
     FUNC_0(VAR_4) > 1) {
  VAR_4->config.n_wq = 2;
 }


 if (VAR_4->config.n_wq > VAR_0) {
  VAR_4->config.n_wq = VAR_0;
 }


 if (VAR_4->config.n_wq > VAR_5) {
  VAR_4->config.n_wq = VAR_5;
 }




 VAR_4->config.n_wq /= FUNC_0(VAR_4);
}
