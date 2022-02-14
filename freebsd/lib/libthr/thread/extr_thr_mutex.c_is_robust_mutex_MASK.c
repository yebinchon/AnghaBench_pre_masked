
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_flags; } ;
struct pthread_mutex {TYPE_1__ m_lock; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct pthread_mutex *VAR_1)
{

 return ((VAR_1->m_lock.m_flags & VAR_0) != 0);
}
