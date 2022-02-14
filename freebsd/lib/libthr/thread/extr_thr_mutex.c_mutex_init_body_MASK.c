
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pthread_mutex_attr {int m_protocol; scalar_t__ m_pshared; scalar_t__ m_robust; int m_ceiling; int m_type; } ;
struct TYPE_2__ {int m_flags; int * m_ceilings; void* m_owner; } ;
struct pthread_mutex {scalar_t__ m_yieldloops; scalar_t__ m_spinloops; int m_flags; TYPE_1__ m_lock; scalar_t__ m_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct pthread_mutex*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct pthread_mutex *VAR_12,
    const struct pthread_mutex_attr *VAR_13)
{

 VAR_12->m_flags = VAR_13->m_type;
 VAR_12->m_count = 0;
 VAR_12->m_spinloops = 0;
 VAR_12->m_yieldloops = 0;
 FUNC_1(VAR_12);
 switch (VAR_13->m_protocol) {
 case 129:
  VAR_12->m_lock.m_owner = VAR_8;
  VAR_12->m_lock.m_flags = 0;
  break;
 case 130:
  VAR_12->m_lock.m_owner = VAR_8;
  VAR_12->m_lock.m_flags = VAR_5;
  break;
 case 128:
  VAR_12->m_lock.m_owner = VAR_4;
  VAR_12->m_lock.m_flags = VAR_6;
  VAR_12->m_lock.m_ceilings[0] = VAR_13->m_ceiling;
  break;
 }
 if (VAR_13->m_pshared == VAR_3)
  VAR_12->m_lock.m_flags |= VAR_9;
 if (VAR_13->m_robust == VAR_2) {
  FUNC_2(((void*)0));
  VAR_12->m_lock.m_flags |= VAR_7;
 }
 if (FUNC_0(VAR_12->m_flags) == VAR_1) {
  VAR_12->m_spinloops =
      VAR_10 ? VAR_10: VAR_0;
  VAR_12->m_yieldloops = VAR_11;
 }
}
