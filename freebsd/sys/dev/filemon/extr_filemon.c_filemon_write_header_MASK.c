
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct filemon {int msgbufr; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct filemon*,int ,int) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (int ,int,char*,int,int,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct filemon *VAR_2)
{
 int VAR_3;
 struct timeval VAR_4;

 FUNC_1(&VAR_4);

 VAR_3 = FUNC_2(VAR_2->msgbufr, sizeof(VAR_2->msgbufr),
     "# filemon version %d\n# Target pid %d\n# Start %ju.%06ju\nV %d\n",
     VAR_0, VAR_1->p_pid, (uintmax_t)VAR_4.tv_sec,
     (uintmax_t)VAR_4.tv_usec, VAR_0);
 if (VAR_3 < sizeof(VAR_2->msgbufr))
  FUNC_0(VAR_2, VAR_2->msgbufr, VAR_3);
}
