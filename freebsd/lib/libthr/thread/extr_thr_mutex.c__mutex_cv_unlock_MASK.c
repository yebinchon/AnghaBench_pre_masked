
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_count; } ;


 int FUNC_0 (struct pthread_mutex*,int,int*) ;

int
FUNC_1(struct pthread_mutex *VAR_0, int *VAR_1, int *VAR_2)
{




 *VAR_1 = VAR_0->m_count;
 VAR_0->m_count = 0;
 (void)FUNC_0(VAR_0, 1, VAR_2);
        return (0);
}
