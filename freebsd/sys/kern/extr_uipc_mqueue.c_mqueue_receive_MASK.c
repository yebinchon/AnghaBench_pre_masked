
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct mqueue_msg {scalar_t__ msg_size; } ;
struct mqueue {size_t mq_msgsize; } ;
struct TYPE_2__ {scalar_t__* td_retval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (struct mqueue*,struct mqueue_msg**,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (struct mqueue_msg*) ;
 int FUNC_4 (struct mqueue_msg*,char*,unsigned int*) ;
 int FUNC_5 (struct timespec const*,struct timespec*,struct timespec*) ;
 int FUNC_6 (struct timeval*) ;

int
FUNC_7(struct mqueue *VAR_5, char *VAR_6,
 size_t VAR_7, unsigned *VAR_8, int VAR_9,
 const struct timespec *VAR_10)
{
 struct mqueue_msg *VAR_11;
 struct timespec VAR_12, VAR_13;
 struct timeval VAR_14;
 int VAR_15;

 if (VAR_7 < VAR_5->mq_msgsize)
  return (VAR_2);


 if (!VAR_9) {
  VAR_15 = FUNC_1(VAR_5, &VAR_11, -1);
  if (VAR_15)
   return (VAR_15);
  goto received;
 }


 if (VAR_10 == ((void*)0)) {
  VAR_15 = FUNC_1(VAR_5, &VAR_11, 0);
  if (VAR_15)
   return (VAR_15);
  goto received;
 }


 VAR_15 = FUNC_1(VAR_5, &VAR_11, -1);
 if (VAR_15 == 0)
  goto received;

 if (VAR_15 != VAR_0)
  return (VAR_15);

 if (VAR_10->tv_nsec >= 1000000000 || VAR_10->tv_nsec < 0) {
  VAR_15 = VAR_1;
  return (VAR_15);
 }

 for (;;) {
  FUNC_2(&VAR_12);
  FUNC_5(VAR_10, &VAR_12, &VAR_13);
  if (VAR_13 < 0 || (VAR_13 == 0 && VAR_13 <= 0)) {
   VAR_15 = VAR_3;
   return (VAR_15);
  }
  FUNC_0(&VAR_14, &VAR_13);
  VAR_15 = FUNC_1(VAR_5, &VAR_11, FUNC_6(&VAR_14));
  if (VAR_15 == 0)
   break;
  if (VAR_15 != VAR_3)
   return (VAR_15);
 }

received:
 VAR_15 = FUNC_4(VAR_11, VAR_6, VAR_8);
 if (VAR_15 == 0) {
  VAR_4->td_retval[0] = VAR_11->msg_size;
  VAR_4->td_retval[1] = 0;
 }
 FUNC_3(VAR_11);
 return (VAR_15);
}
