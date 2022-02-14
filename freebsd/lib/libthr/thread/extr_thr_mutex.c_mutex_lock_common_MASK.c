
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {int m_flags; } ;
struct pthread_mutex {int m_flags; TYPE_1__ m_lock; } ;
struct pthread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*) ;
 int FUNC_2 (struct pthread*) ;
 int VAR_2 ;
 struct pthread* FUNC_3 () ;
 int FUNC_4 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_5 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct pthread*,struct pthread_mutex*,int) ;
 int FUNC_8 (struct pthread*,struct pthread_mutex*,struct timespec const*) ;

__attribute__((used)) static inline int
FUNC_9(struct pthread_mutex *VAR_3, const struct timespec *VAR_4,
    bool VAR_5, bool VAR_6)
{
 struct pthread *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_7 = FUNC_3();
 if (!VAR_5 && VAR_3->m_flags & VAR_1)
  FUNC_0(VAR_7);
 if (!VAR_6)
  VAR_9 = FUNC_4(VAR_7, VAR_3);
 VAR_8 = FUNC_6(&VAR_3->m_lock, FUNC_2(VAR_7));
 if (VAR_8 == 0 || VAR_8 == VAR_0) {
  FUNC_7(VAR_7, VAR_3, VAR_8);
  if (VAR_8 == VAR_0)
   VAR_3->m_lock.m_flags |= VAR_2;
 } else {
  VAR_8 = FUNC_8(VAR_7, VAR_3, VAR_4);
 }
 if (!VAR_6 && VAR_9)
  FUNC_5(VAR_7, VAR_3);
 if (VAR_8 != 0 && VAR_8 != VAR_0 &&
     (VAR_3->m_flags & VAR_1) != 0 && !VAR_5)
  FUNC_1(VAR_7);
 return (VAR_8);
}
