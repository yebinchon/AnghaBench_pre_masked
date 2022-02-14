
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct filemon {int lock; struct file* fp; int msgbufr; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int ) ;
 int FUNC_1 (struct filemon*,int ,size_t) ;
 int FUNC_2 (struct timeval*) ;
 size_t FUNC_3 (int ,int,char*,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct filemon *VAR_2)
{
 struct file *VAR_3;
 struct timeval VAR_4;
 size_t VAR_5;

 FUNC_4(&VAR_2->lock, VAR_0);
 if (VAR_2->fp == ((void*)0))
  return;

 FUNC_2(&VAR_4);

 VAR_5 = FUNC_3(VAR_2->msgbufr,
     sizeof(VAR_2->msgbufr),
     "# Stop %ju.%06ju\n# Bye bye\n",
     (uintmax_t)VAR_4.tv_sec, (uintmax_t)VAR_4.tv_usec);

 if (VAR_5 < sizeof(VAR_2->msgbufr))
  FUNC_1(VAR_2, VAR_2->msgbufr, VAR_5);
 VAR_3 = VAR_2->fp;
 VAR_2->fp = ((void*)0);

 FUNC_6(&VAR_2->lock);
 FUNC_0(VAR_3, VAR_1);
 FUNC_5(&VAR_2->lock);
}
