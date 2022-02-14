
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
struct TYPE_7__ {int b_wptr; TYPE_1__* b_datap; } ;
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
 int VAR_12 ;
 TYPE_5__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(
      queue_t *VAR_13,
      int VAR_14
      )
{
 register mblk_t *VAR_15;

 FUNC_3(VAR_1,"parse: SETUP_STREAM - setting up stream for q=%x\n", VAR_13);

 VAR_15 = FUNC_1(sizeof(struct stroptions), VAR_0);
 if (VAR_15)
 {
  struct stroptions *VAR_16 = (void *)VAR_15->b_wptr;

  VAR_16->so_flags = VAR_12|VAR_9|VAR_11|VAR_10;
  VAR_16->so_readopt = (VAR_14 == VAR_5) ? VAR_7 : VAR_8;
  VAR_16->so_hiwat = (VAR_14 == VAR_5) ? sizeof(parsetime_t) : 256;
  VAR_16->so_lowat = 0;
  VAR_15->b_datap->db_type = VAR_6;
  VAR_15->b_wptr += sizeof(struct stroptions);
  if (!VAR_13)
      FUNC_2("NULL q - strange");
  FUNC_5(VAR_13, VAR_15);
  return FUNC_4(FUNC_0(VAR_13)->q_next, VAR_4, (VAR_14 == VAR_5) ? VAR_3 :
          VAR_2);
 }
 else
 {
  FUNC_3(VAR_1, "parse: setup_stream - FAILED - no MEMORY for allocb\n");
  return 0;
 }
}
