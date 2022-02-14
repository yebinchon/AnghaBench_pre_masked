
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex_attr {scalar_t__ m_type; scalar_t__ m_protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(const struct pthread_mutex_attr *VAR_5)
{

 if (VAR_5->m_type < VAR_1 ||
     VAR_5->m_type >= VAR_2)
  return (VAR_0);
 if (VAR_5->m_protocol < VAR_3 ||
     VAR_5->m_protocol > VAR_4)
  return (VAR_0);
 return (0);
}
