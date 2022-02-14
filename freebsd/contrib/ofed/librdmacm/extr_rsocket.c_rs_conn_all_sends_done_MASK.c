
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ sqe_avail; scalar_t__ sq_size; int state; scalar_t__ ctrl_seqno; scalar_t__ ctrl_max_seqno; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rsocket *VAR_1)
{
 return ((((int) VAR_1->ctrl_max_seqno) - ((int) VAR_1->ctrl_seqno)) +
  VAR_1->sqe_avail == VAR_1->sq_size) ||
        !(VAR_1->state & VAR_0);
}
