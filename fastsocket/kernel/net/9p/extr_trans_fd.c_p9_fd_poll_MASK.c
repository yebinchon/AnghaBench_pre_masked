
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct p9_trans_fd {TYPE_2__* wr; TYPE_2__* rd; } ;
struct p9_client {scalar_t__ status; struct p9_trans_fd* trans; } ;
struct TYPE_5__ {TYPE_1__* f_op; } ;
struct TYPE_4__ {int (* poll ) (TYPE_2__*,struct poll_table_struct*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,struct poll_table_struct*) ;
 int FUNC_1 (TYPE_2__*,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct p9_client *VAR_5, struct poll_table_struct *VAR_6)
{
 int VAR_7, VAR_8;
 struct p9_trans_fd *VAR_9 = ((void*)0);

 if (VAR_5 && VAR_5->status == VAR_0)
  VAR_9 = VAR_5->trans;

 if (!VAR_9)
  return -VAR_2;

 if (!VAR_9->rd->f_op || !VAR_9->rd->f_op->poll)
  return -VAR_1;

 if (!VAR_9->wr->f_op || !VAR_9->wr->f_op->poll)
  return -VAR_1;

 VAR_7 = VAR_9->rd->f_op->poll(VAR_9->rd, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_9->rd != VAR_9->wr) {
  VAR_8 = VAR_9->wr->f_op->poll(VAR_9->wr, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 = (VAR_7 & ~VAR_4) | (VAR_8 & ~VAR_3);
 }

 return VAR_7;
}
