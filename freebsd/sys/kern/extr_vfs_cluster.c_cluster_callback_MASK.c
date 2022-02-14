
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int cluster_head; } ;
struct buf {int b_ioflags; int b_error; int b_flags; scalar_t__ b_dirtyend; scalar_t__ b_dirtyoff; TYPE_1__ b_cluster; int b_npages; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct buf* FUNC_0 (int *) ;
 struct buf* FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct buf*) ;

__attribute__((used)) static void
FUNC_8(struct buf *VAR_6)
{
 struct buf *VAR_7, *VAR_8;
 int VAR_9 = 0;




 if (VAR_6->b_ioflags & VAR_0)
  VAR_9 = VAR_6->b_error;

 if (FUNC_2(VAR_6)) {
  FUNC_5(FUNC_6((vm_offset_t) VAR_6->b_data),
      VAR_6->b_npages);
 }




 for (VAR_8 = FUNC_0(&VAR_6->b_cluster.cluster_head);
  VAR_8; VAR_8 = VAR_7) {
  VAR_7 = FUNC_1(&VAR_8->b_cluster, VAR_4);
  if (VAR_9) {
   VAR_8->b_ioflags |= VAR_0;
   VAR_8->b_error = VAR_9;
  } else {
   VAR_8->b_dirtyoff = VAR_8->b_dirtyend = 0;
   VAR_8->b_flags &= ~VAR_2;
   VAR_8->b_ioflags &= ~VAR_0;







   if (VAR_8->b_flags & VAR_1)
    VAR_8->b_flags |= VAR_3;
  }
  FUNC_3(VAR_8);
 }
 FUNC_4(VAR_6);
 FUNC_7(VAR_5, VAR_6);
}
