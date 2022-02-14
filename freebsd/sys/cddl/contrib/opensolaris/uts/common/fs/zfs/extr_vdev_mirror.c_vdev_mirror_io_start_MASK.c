
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ io_type; int io_flags; int io_priority; int io_size; int io_abd; int * io_bp; int io_spa; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_12__ {int mm_children; TYPE_3__* mm_child; int mm_resilvering; } ;
typedef TYPE_2__ mirror_map_t ;
struct TYPE_13__ {int mc_offset; int mc_vd; } ;
typedef TYPE_3__ mirror_child_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ,int ,int ,scalar_t__,int ,int ,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(zio_t *VAR_6)
{
 mirror_map_t *VAR_7;
 mirror_child_t *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_4(VAR_6);

 if (VAR_7 == ((void*)0)) {
  FUNC_0(!FUNC_2(VAR_6->io_spa));
  FUNC_0(VAR_6->io_type == VAR_2);
  FUNC_5(VAR_6);
  return;
 }

 if (VAR_6->io_type == VAR_2) {
  if (VAR_6->io_bp != ((void*)0) &&
      (VAR_6->io_flags & VAR_0) && !VAR_7->mm_resilvering &&
      VAR_7->mm_children > 1) {
   for (VAR_9 = 0; VAR_9 < VAR_7->mm_children; VAR_9++) {
    VAR_8 = &VAR_7->mm_child[VAR_9];
    FUNC_6(FUNC_7(VAR_6, VAR_6->io_bp,
        VAR_8->mc_vd, VAR_8->mc_offset,
        FUNC_1(VAR_6->io_abd,
        VAR_6->io_size), VAR_6->io_size,
        VAR_6->io_type, VAR_6->io_priority, 0,
        VAR_5, VAR_8));
   }
   FUNC_5(VAR_6);
   return;
  }



  VAR_9 = FUNC_3(VAR_6);
  VAR_10 = (VAR_9 >= 0);
 } else {
  FUNC_0(VAR_6->io_type == VAR_3 ||
      VAR_6->io_type == VAR_1);




  VAR_9 = 0;
  VAR_10 = VAR_7->mm_children;
 }

 while (VAR_10--) {
  VAR_8 = &VAR_7->mm_child[VAR_9];
  FUNC_6(FUNC_7(VAR_6, VAR_6->io_bp,
      VAR_8->mc_vd, VAR_8->mc_offset, VAR_6->io_abd, VAR_6->io_size,
      VAR_6->io_type, VAR_6->io_priority, 0,
      VAR_4, VAR_8));
  VAR_9++;
 }

 FUNC_5(VAR_6);
}
