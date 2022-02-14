
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct pthread_mutex*,int *,int,int) ;

int
FUNC_1(struct pthread_mutex *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, ((void*)0), 1, VAR_3);
 if (VAR_4 == 0 || VAR_4 == VAR_0)
  VAR_1->m_count = VAR_2;
 return (VAR_4);
}
