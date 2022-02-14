
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct mqueue_msg {int dummy; } ;
struct mqueue {size_t mq_msgsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (struct mqueue*,struct mqueue_msg*,int) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (struct mqueue_msg*) ;
 struct mqueue_msg* FUNC_4 (char const*,size_t,unsigned int) ;
 int FUNC_5 (struct timespec const*,struct timespec*,struct timespec*) ;
 int FUNC_6 (struct timeval*) ;

int
FUNC_7(struct mqueue *VAR_6, const char *VAR_7,
 size_t VAR_8, unsigned VAR_9, int VAR_10,
 const struct timespec *VAR_11)
{
 struct mqueue_msg *VAR_12;
 struct timespec VAR_13, VAR_14;
 struct timeval VAR_15;
 int VAR_16;

 if (VAR_9 >= VAR_5)
  return (VAR_2);
 if (VAR_8 > VAR_6->mq_msgsize)
  return (VAR_3);
 VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_9);
 if (VAR_12 == ((void*)0))
  return (VAR_1);


 if (!VAR_10) {
  VAR_16 = FUNC_1(VAR_6, VAR_12, -1);
  if (VAR_16)
   goto bad;
  return (0);
 }


 if (VAR_11 == ((void*)0)) {
  VAR_16 = FUNC_1(VAR_6, VAR_12, 0);
  if (VAR_16)
   goto bad;
  return (0);
 }


 VAR_16 = FUNC_1(VAR_6, VAR_12, -1);
 if (VAR_16 == 0)
  return (0);

 if (VAR_16 != VAR_0)
  goto bad;

 if (VAR_11->tv_nsec >= 1000000000 || VAR_11->tv_nsec < 0) {
  VAR_16 = VAR_2;
  goto bad;
 }
 for (;;) {
  FUNC_2(&VAR_13);
  FUNC_5(VAR_11, &VAR_13, &VAR_14);
  if (VAR_14 < 0 || (VAR_14 == 0 && VAR_14 <= 0)) {
   VAR_16 = VAR_4;
   break;
  }
  FUNC_0(&VAR_15, &VAR_14);
  VAR_16 = FUNC_1(VAR_6, VAR_12, FUNC_6(&VAR_15));
  if (VAR_16 != VAR_4)
   break;
 }
 if (VAR_16 == 0)
  return (0);
bad:
 FUNC_3(VAR_12);
 return (VAR_16);
}
