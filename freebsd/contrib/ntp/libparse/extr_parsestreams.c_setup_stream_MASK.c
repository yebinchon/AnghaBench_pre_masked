
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stroptions {int so_flags; int so_hiwat; scalar_t__ so_lowat; int so_readopt; } ;
typedef int queue_t ;
typedef int parsetime_t ;
struct TYPE_7__ {int b_wptr; TYPE_1__* b_datap; scalar_t__ b_rptr; } ;
typedef TYPE_2__ mblk_t ;
struct TYPE_8__ {int q_next; } ;
struct TYPE_6__ {int db_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(
      queue_t *VAR_12,
      int VAR_13
      )
{
 mblk_t *VAR_14;

 VAR_14 = FUNC_1(sizeof(struct stroptions), VAR_0);
 if (VAR_14)
 {
  struct stroptions *VAR_15 = (struct stroptions *)(void *)VAR_14->b_rptr;

  VAR_15->so_flags = VAR_11|VAR_9|VAR_10;
  VAR_15->so_readopt = (VAR_13 == VAR_5) ? VAR_7 : VAR_8;
  VAR_15->so_hiwat = (VAR_13 == VAR_5) ? sizeof(parsetime_t) : 256;
  VAR_15->so_lowat = 0;
  VAR_14->b_datap->db_type = VAR_6;
  VAR_14->b_wptr += sizeof(struct stroptions);
  FUNC_4(VAR_12, VAR_14);
  return FUNC_3(FUNC_0(VAR_12)->q_next, VAR_4, (VAR_13 == VAR_5) ? VAR_3 :
          VAR_2);
 }
 else
 {
  FUNC_2(VAR_1,("parse: setup_stream - FAILED - no MEMORY for allocb\n"));
  return 0;
 }
}
