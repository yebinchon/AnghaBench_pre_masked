
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int io_offset; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {int mm_preferred_cnt; int* mm_preferred; scalar_t__ mm_root; } ;
typedef TYPE_2__ mirror_map_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(zio_t *VAR_1)
{
 mirror_map_t *VAR_2 = VAR_1->io_vsd;
 int VAR_3;

 if (VAR_2->mm_root) {
  VAR_3 = FUNC_0(VAR_2->mm_preferred_cnt);
  return (FUNC_1(VAR_1, VAR_3));
 }







 VAR_3 = (VAR_1->io_offset >> VAR_0) % VAR_2->mm_preferred_cnt;
 return (VAR_2->mm_preferred[VAR_3]);
}
