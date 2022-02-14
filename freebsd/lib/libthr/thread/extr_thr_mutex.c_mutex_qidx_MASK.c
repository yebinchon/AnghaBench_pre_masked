
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_flags; } ;
struct pthread_mutex {TYPE_1__ m_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pthread_mutex*) ;

__attribute__((used)) static int
FUNC_1(struct pthread_mutex *VAR_4)
{

 if ((VAR_4->m_lock.m_flags & VAR_3) == 0)
  return (VAR_0);
 return (FUNC_0(VAR_4) ? VAR_2 : VAR_1);
}
