
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
typedef int rqt ;
typedef int rmt ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct timespec const*,struct timespec*,int) ;
 int FUNC_1 (struct timespec*,struct timespec*,int) ;
 int FUNC_2 (struct thread*,int ,int,struct timespec*,struct timespec*) ;
 int FUNC_3 (struct timespec*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_4, clockid_t VAR_5, int VAR_6,
    const struct timespec *VAR_7, struct timespec *VAR_8)
{
 struct timespec VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_7, &VAR_10, sizeof(VAR_10));
 if (VAR_11)
  return (VAR_11);
 if (VAR_8 != ((void*)0) && (VAR_6 & VAR_2) == 0 &&
     !FUNC_3(VAR_8, sizeof(VAR_9), VAR_3))
  return (VAR_0);
 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_10, &VAR_9);
 if (VAR_11 == VAR_1 && VAR_8 != ((void*)0) && (VAR_6 & VAR_2) == 0) {
  int VAR_12;

  VAR_12 = FUNC_1(&VAR_9, VAR_8, sizeof(VAR_9));
  if (VAR_12)
   VAR_11 = VAR_12;
 }
 return (VAR_11);
}
