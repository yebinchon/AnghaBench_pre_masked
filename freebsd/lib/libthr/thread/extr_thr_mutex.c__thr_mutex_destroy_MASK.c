
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_2__* pthread_mutex_t ;
struct TYPE_12__ {scalar_t__ m_owner; } ;
struct TYPE_13__ {TYPE_1__ m_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 TYPE_2__* FUNC_3 (TYPE_2__**,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*) ;

int
FUNC_6(pthread_mutex_t *VAR_6)
{
 pthread_mutex_t VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = *VAR_6;
 if (VAR_7 < VAR_2) {
  VAR_9 = 0;
 } else if (VAR_7 == VAR_2) {
  VAR_9 = VAR_1;
 } else {
  if (VAR_7 == VAR_3) {
   VAR_8 = FUNC_3(VAR_6, 0);
   if (VAR_8 != ((void*)0)) {
    if ((uint32_t)VAR_8->m_lock.m_owner !=
        VAR_5) {
     FUNC_5(
         FUNC_4(), VAR_8);
    }
    FUNC_2(VAR_6);
   }
   *VAR_6 = VAR_2;
   return (0);
  }
  if (FUNC_0(VAR_7) != 0 &&
      (uint32_t)VAR_7->m_lock.m_owner != VAR_4) {
   VAR_9 = VAR_0;
  } else {
   *VAR_6 = VAR_2;
   FUNC_5(FUNC_4(), VAR_7);
   FUNC_1(VAR_7);
   VAR_9 = 0;
  }
 }

 return (VAR_9);
}
