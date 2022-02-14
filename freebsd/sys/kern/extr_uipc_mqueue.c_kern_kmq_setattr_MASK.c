
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct mqueue {int mq_curmsgs; int mq_msgsize; int mq_maxmsg; } ;
struct mq_attr {int mq_flags; int mq_curmsgs; int mq_msgsize; int mq_maxmsg; } ;
struct file {int f_flag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int,struct file**,int *,struct mqueue**) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_2, int VAR_3, const struct mq_attr *VAR_4,
    struct mq_attr *VAR_5)
{
 struct mqueue *VAR_6;
 struct file *VAR_7;
 u_int VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(VAR_3);
 if (VAR_4 != ((void*)0) && (VAR_4->mq_flags & ~VAR_1) != 0)
  return (VAR_0);
 VAR_10 = FUNC_3(VAR_2, VAR_3, &VAR_7, ((void*)0), &VAR_6);
 if (VAR_10)
  return (VAR_10);
 VAR_5->mq_maxmsg = VAR_6->mq_maxmsg;
 VAR_5->mq_msgsize = VAR_6->mq_msgsize;
 VAR_5->mq_curmsgs = VAR_6->mq_curmsgs;
 if (VAR_4 != ((void*)0)) {
  do {
   VAR_8 = VAR_9 = VAR_7->f_flag;
   VAR_9 &= ~VAR_1;
   VAR_9 |= (VAR_4->mq_flags & VAR_1);
  } while (FUNC_1(&VAR_7->f_flag, VAR_8, VAR_9) == 0);
 } else
  VAR_8 = VAR_7->f_flag;
 VAR_5->mq_flags = (VAR_1 & VAR_8);
 FUNC_2(VAR_7, VAR_2);
 return (VAR_10);
}
