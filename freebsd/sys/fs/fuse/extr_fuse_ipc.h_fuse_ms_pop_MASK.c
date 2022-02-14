
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * stqe_next; } ;
struct fuse_ticket {TYPE_1__ tk_ms_link; } ;
struct fuse_data {scalar_t__ ms_count; int ms_head; int ms_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct fuse_ticket* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline struct fuse_ticket *
FUNC_4(struct fuse_data *VAR_2)
{
 struct fuse_ticket *VAR_3 = ((void*)0);

 FUNC_3(&VAR_2->ms_mtx, VAR_0);

 if ((VAR_3 = FUNC_1(&VAR_2->ms_head))) {
  FUNC_2(&VAR_2->ms_head, VAR_1);
  VAR_2->ms_count--;




 }

 return (VAR_3);
}
