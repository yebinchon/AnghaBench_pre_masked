
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread_mutex {int m_lock; } ;
struct pthread_cond {int kcond; } ;
struct pthread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pthread* FUNC_0 () ;
 int FUNC_1 (struct pthread_mutex*,int) ;
 int FUNC_2 (struct pthread_mutex*,int*) ;
 int FUNC_3 (struct pthread_mutex*,int,int) ;
 int FUNC_4 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_5 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_6 (struct pthread*,int ) ;
 int FUNC_7 (struct pthread*,int ) ;
 int FUNC_8 (struct pthread*) ;
 int FUNC_9 (int *,int *,struct timespec const*,int) ;

__attribute__((used)) static int
FUNC_10(struct pthread_cond *VAR_4, struct pthread_mutex *VAR_5,
    const struct timespec *VAR_6, int VAR_7)
{
 struct pthread *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_0();
 VAR_12 = FUNC_4(VAR_8, VAR_5);

 VAR_9 = FUNC_2(VAR_5, &VAR_11);
 if (VAR_9 != 0) {
  if (VAR_12)
   FUNC_5(VAR_8, VAR_5);
  return (VAR_9);
 }

 if (VAR_7)
  FUNC_6(VAR_8, 0);
 VAR_9 = FUNC_9(&VAR_4->kcond, &VAR_5->m_lock, VAR_6,
     VAR_0 | VAR_1);
 if (VAR_7)
  FUNC_7(VAR_8, 0);





 if (VAR_9 == 0) {
  VAR_10 = FUNC_3(VAR_5, VAR_11, 1);
 } else if (VAR_9 == VAR_2 || VAR_9 == VAR_3) {
  VAR_10 = FUNC_3(VAR_5, VAR_11, 1);






  if (VAR_10 == 0 && VAR_7) {
   if (VAR_12) {
    FUNC_5(VAR_8, VAR_5);
    VAR_12 = 0;
   }
   FUNC_8(VAR_8);
  }

  if (VAR_9 == VAR_2)
   VAR_9 = 0;
 } else {

  FUNC_1(VAR_5, VAR_11);
  if (VAR_7) {
   if (VAR_12) {
    FUNC_5(VAR_8, VAR_5);
    VAR_12 = 0;
   }
   FUNC_8(VAR_8);
  }
  VAR_10 = 0;
 }
 if (VAR_12)
  FUNC_5(VAR_8, VAR_5);
 return (VAR_10 != 0 ? VAR_10 : VAR_9);
}
