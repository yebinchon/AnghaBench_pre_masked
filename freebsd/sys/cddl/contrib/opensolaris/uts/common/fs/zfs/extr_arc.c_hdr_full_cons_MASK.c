
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_arc_node; int b_freeze_lock; int b_refcnt; int b_cv; } ;
struct TYPE_5__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_2__ arc_buf_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4, void *VAR_5, int VAR_6)
{
 arc_buf_hdr_t *VAR_7 = VAR_4;

 FUNC_1(VAR_7, VAR_2);
 FUNC_2(&VAR_7->b_l1hdr.b_cv, ((void*)0), VAR_1, ((void*)0));
 FUNC_5(&VAR_7->b_l1hdr.b_refcnt);
 FUNC_4(&VAR_7->b_l1hdr.b_freeze_lock, ((void*)0), VAR_3, ((void*)0));
 FUNC_3(&VAR_7->b_l1hdr.b_arc_node);
 FUNC_0(VAR_2, VAR_0);

 return (0);
}
