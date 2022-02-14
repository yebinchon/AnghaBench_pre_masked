
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_count; } ;
struct pthread {int dummy; } ;


 struct pthread* FUNC_0 () ;
 int FUNC_1 (struct pthread*,struct pthread_mutex*,int ) ;

int
FUNC_2(struct pthread_mutex *VAR_0, int VAR_1)
{
 struct pthread *VAR_2;

 VAR_2 = FUNC_0();
 FUNC_1(VAR_2, VAR_0, 0);
 VAR_0->m_count = VAR_1;
 return (0);
}
