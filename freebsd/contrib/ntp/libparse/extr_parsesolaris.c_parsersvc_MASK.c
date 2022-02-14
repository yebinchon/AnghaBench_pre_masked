
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int queue_t ;
struct TYPE_7__ {TYPE_1__* b_datap; } ;
typedef TYPE_2__ mblk_t ;
struct TYPE_6__ {scalar_t__ db_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(
   queue_t *VAR_2
   )
{
 mblk_t *VAR_3;

 while ((VAR_3 = FUNC_1(VAR_2)))
 {
  if (FUNC_0(VAR_2) || (VAR_3->b_datap->db_type > VAR_1))
  {
   FUNC_4(VAR_2, VAR_3);
   FUNC_2(VAR_0, "parse: RSVC - putnext\n");
  }
  else
  {
   FUNC_3(VAR_2, VAR_3);
   FUNC_2(VAR_0, "parse: RSVC - flow control wait\n");
   break;
  }
 }
 return 0;
}
