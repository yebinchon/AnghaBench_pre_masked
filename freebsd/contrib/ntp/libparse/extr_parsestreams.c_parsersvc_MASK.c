
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int q_next; } ;
typedef TYPE_2__ queue_t ;
struct TYPE_13__ {TYPE_1__* b_datap; } ;
typedef TYPE_3__ mblk_t ;
struct TYPE_11__ {scalar_t__ db_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(
 queue_t *VAR_2
 )
{
 mblk_t *VAR_3;

 while ((VAR_3 = FUNC_1(VAR_2)))
 {
  if (FUNC_0(VAR_2->q_next) || (VAR_3->b_datap->db_type > VAR_1))
  {
   FUNC_4(VAR_2, VAR_3);
   FUNC_2(VAR_0,("parse: RSVC - putnext\n"));
  }
  else
  {
   FUNC_3(VAR_2, VAR_3);
   FUNC_2(VAR_0,("parse: RSVC - flow control wait\n"));
   break;
  }
 }
 return 0;
}
