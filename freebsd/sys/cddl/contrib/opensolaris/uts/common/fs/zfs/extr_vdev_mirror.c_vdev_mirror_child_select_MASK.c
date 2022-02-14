
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ io_txg; int * io_bp; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {size_t mm_preferred_cnt; int mm_children; int* mm_preferred; TYPE_3__* mm_child; } ;
typedef TYPE_2__ mirror_map_t ;
struct TYPE_10__ {int mc_tried; int mc_skipped; int mc_speculative; int mc_load; int mc_vd; int mc_offset; void* mc_error; } ;
typedef TYPE_3__ mirror_child_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(zio_t *VAR_4)
{
 mirror_map_t *VAR_5 = VAR_4->io_vsd;
 uint64_t VAR_6 = VAR_4->io_txg;
 int VAR_7, VAR_8;

 FUNC_0(VAR_4->io_bp == ((void*)0) || FUNC_1(VAR_4->io_bp) == VAR_6);

 VAR_8 = VAR_3;
 VAR_5->mm_preferred_cnt = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5->mm_children; VAR_7++) {
  mirror_child_t *VAR_9;

  VAR_9 = &VAR_5->mm_child[VAR_7];
  if (VAR_9->mc_tried || VAR_9->mc_skipped)
   continue;

  if (!FUNC_7(VAR_9->mc_vd)) {
   VAR_9->mc_error = FUNC_2(VAR_1);
   VAR_9->mc_tried = 1;
   VAR_9->mc_skipped = 1;
   continue;
  }

  if (FUNC_3(VAR_9->mc_vd, VAR_0, VAR_6, 1)) {
   VAR_9->mc_error = FUNC_2(VAR_2);
   VAR_9->mc_skipped = 1;
   VAR_9->mc_speculative = 1;
   continue;
  }

  VAR_9->mc_load = FUNC_4(VAR_5, VAR_9->mc_vd, VAR_9->mc_offset);
  if (VAR_9->mc_load > VAR_8)
   continue;

  if (VAR_9->mc_load < VAR_8) {
   VAR_8 = VAR_9->mc_load;
   VAR_5->mm_preferred_cnt = 0;
  }
  VAR_5->mm_preferred[VAR_5->mm_preferred_cnt] = VAR_7;
  VAR_5->mm_preferred_cnt++;
 }

 if (VAR_5->mm_preferred_cnt == 1) {
  FUNC_6(
      VAR_5->mm_child[VAR_5->mm_preferred[0]].mc_vd, VAR_4);
  return (VAR_5->mm_preferred[0]);
 }

 if (VAR_5->mm_preferred_cnt > 1) {
  int VAR_10 = FUNC_5(VAR_4);

  FUNC_6(VAR_5->mm_child[VAR_10].mc_vd, VAR_4);
  return (VAR_10);
 }





 for (VAR_7 = 0; VAR_7 < VAR_5->mm_children; VAR_7++) {
  if (!VAR_5->mm_child[VAR_7].mc_tried) {
   FUNC_6(VAR_5->mm_child[VAR_7].mc_vd,
       VAR_4);
   return (VAR_7);
  }
 }




 return (-1);
}
