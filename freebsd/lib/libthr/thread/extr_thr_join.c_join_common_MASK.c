
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;
struct pthread {int flags; long tid; struct pthread* joiner; void* ret; } ;
typedef struct pthread* pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pthread*,int ) ;
 int FUNC_1 (struct pthread*,int ,struct pthread*) ;
 int VAR_6 ;
 int FUNC_2 (struct pthread*,struct pthread*) ;
 int FUNC_3 (struct pthread*,struct pthread*) ;
 long VAR_7 ;
 int FUNC_4 (struct timespec*,struct timespec const*,struct timespec*) ;
 struct pthread* FUNC_5 () ;
 int FUNC_6 (struct pthread*) ;
 int FUNC_7 (struct pthread*,int ) ;
 int FUNC_8 (struct pthread*,struct pthread*,int) ;
 int FUNC_9 (struct pthread*) ;
 int FUNC_10 (struct pthread*,struct pthread*) ;
 int FUNC_11 (long*,long,struct timespec*) ;
 int VAR_8 ;
 int FUNC_12 (int ,struct timespec*) ;

__attribute__((used)) static int
FUNC_13(pthread_t VAR_9, void **VAR_10,
 const struct timespec *VAR_11)
{
 struct pthread *VAR_12 = FUNC_5();
 struct timespec VAR_13, VAR_14, *VAR_15;
 void *VAR_16;
 long VAR_17;
 int VAR_18 = 0;

 if (VAR_9 == ((void*)0))
  return (VAR_2);

 if (VAR_9 == VAR_12)
  return (VAR_1);

 if ((VAR_18 = FUNC_8(VAR_12, VAR_9, 1)) != 0)
  return (VAR_4);

 if ((VAR_9->flags & VAR_6) != 0) {
  VAR_18 = VAR_2;
 } else if (VAR_9->joiner != ((void*)0)) {

  VAR_18 = VAR_3;
 }
 if (VAR_18) {
  FUNC_3(VAR_12, VAR_9);
  return (VAR_18);
 }

 VAR_9->joiner = VAR_12;

 FUNC_3(VAR_12, VAR_9);

 FUNC_1(VAR_12, VAR_8, VAR_9);
 FUNC_6(VAR_12);

 VAR_17 = VAR_9->tid;
 while (VAR_9->tid != VAR_7) {
  FUNC_9(VAR_12);
  if (VAR_11 != ((void*)0)) {
   FUNC_12(VAR_0, &VAR_13);
   FUNC_4(&VAR_14, VAR_11, &VAR_13);
   if (VAR_14 < 0) {
    VAR_18 = VAR_5;
    break;
   }
   VAR_15 = &VAR_14;
  } else
   VAR_15 = ((void*)0);
  VAR_18 = FUNC_11(&VAR_9->tid, VAR_17, VAR_15);
  if (VAR_18 == VAR_5)
   break;
 }

 FUNC_7(VAR_12, 0);
 FUNC_0(VAR_12, 0);

 if (VAR_18 == VAR_5) {
  FUNC_2(VAR_12, VAR_9);
  VAR_9->joiner = ((void*)0);
  FUNC_3(VAR_12, VAR_9);
 } else {
  VAR_18 = 0;
  VAR_16 = VAR_9->ret;
  FUNC_2(VAR_12, VAR_9);
  VAR_9->flags |= VAR_6;
  VAR_9->joiner = ((void*)0);
  FUNC_10(VAR_12, VAR_9);

  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_16;
 }
 return (VAR_18);
}
