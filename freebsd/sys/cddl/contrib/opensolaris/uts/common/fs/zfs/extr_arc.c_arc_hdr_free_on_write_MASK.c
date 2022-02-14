
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int arcs_size; int * arcs_esize; } ;
typedef TYPE_2__ arc_state_t ;
struct TYPE_10__ {int b_pabd; int b_refcnt; int b_arc_node; TYPE_2__* b_state; } ;
struct TYPE_12__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;
typedef size_t arc_buf_contents_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_4 ;
 size_t FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(arc_buf_hdr_t *VAR_6)
{
 arc_state_t *VAR_7 = VAR_6->b_l1hdr.b_state;
 arc_buf_contents_t VAR_8 = FUNC_1(VAR_6);
 uint64_t VAR_9 = FUNC_2(VAR_6);


 if (FUNC_5(&VAR_6->b_l1hdr.b_arc_node)) {
  FUNC_0(FUNC_6(&VAR_6->b_l1hdr.b_refcnt));
  FUNC_0(VAR_7 != VAR_4 && VAR_7 != VAR_5);

  (void) FUNC_7(&VAR_7->arcs_esize[VAR_8],
      VAR_9, VAR_6);
 }
 (void) FUNC_7(&VAR_7->arcs_size, VAR_9, VAR_6);
 if (VAR_8 == VAR_1) {
  FUNC_3(VAR_9, VAR_3);
 } else {
  FUNC_0(VAR_8 == VAR_0);
  FUNC_3(VAR_9, VAR_2);
 }

 FUNC_4(VAR_6->b_l1hdr.b_pabd, VAR_9, VAR_8);
}
