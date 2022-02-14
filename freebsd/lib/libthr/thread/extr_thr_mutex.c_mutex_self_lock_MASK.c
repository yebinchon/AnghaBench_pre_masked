
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct pthread_mutex {int m_count; int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;




 int FUNC_1 (struct timespec*,struct timespec const*,struct timespec*) ;
 int FUNC_2 (struct timespec*,int *) ;
 int FUNC_3 (int ,struct timespec*) ;

__attribute__((used)) static int
FUNC_4(struct pthread_mutex *VAR_5, const struct timespec *VAR_6)
{
 struct timespec VAR_7, VAR_8;
 int VAR_9;

 switch (FUNC_0(VAR_5->m_flags)) {
 case 130:
 case 131:
  if (VAR_6) {
   if (VAR_6->tv_sec < 0 || VAR_6->tv_nsec < 0 ||
       VAR_6->tv_nsec >= 1000000000) {
    VAR_9 = VAR_3;
   } else {
    FUNC_3(VAR_0, &VAR_7);
    FUNC_1(&VAR_8, VAR_6, &VAR_7);
    FUNC_2(&VAR_8, ((void*)0));
    VAR_9 = VAR_4;
   }
  } else {




   VAR_9 = VAR_2;
  }
  break;

 case 129:




  VAR_9 = 0;
  if (VAR_6) {
   if (VAR_6->tv_sec < 0 || VAR_6->tv_nsec < 0 ||
       VAR_6->tv_nsec >= 1000000000) {
    VAR_9 = VAR_3;
   } else {
    FUNC_3(VAR_0, &VAR_7);
    FUNC_1(&VAR_8, VAR_6, &VAR_7);
    FUNC_2(&VAR_8, ((void*)0));
    VAR_9 = VAR_4;
   }
  } else {
   VAR_7 = 30;
   VAR_7 = 0;
   for (;;)
    FUNC_2(&VAR_7, ((void*)0));
  }
  break;

 case 128:

  if (VAR_5->m_count + 1 > 0) {
   VAR_5->m_count++;
   VAR_9 = 0;
  } else
   VAR_9 = VAR_1;
  break;

 default:

  VAR_9 = VAR_3;
 }

 return (VAR_9);
}
