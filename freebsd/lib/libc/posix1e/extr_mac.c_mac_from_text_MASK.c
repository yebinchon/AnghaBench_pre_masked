
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac {int * m_string; scalar_t__ m_buflen; } ;


 int VAR_0 ;
 int FUNC_0 (struct mac*) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(struct mac **VAR_1, const char *VAR_2)
{

 *VAR_1 = (struct mac *) FUNC_1(sizeof(**VAR_1));
 if (*VAR_1 == ((void*)0))
  return (VAR_0);

 (*VAR_1)->m_string = FUNC_2(VAR_2);
 if ((*VAR_1)->m_string == ((void*)0)) {
  FUNC_0(*VAR_1);
  *VAR_1 = ((void*)0);
  return (VAR_0);
 }

 (*VAR_1)->m_buflen = FUNC_3((*VAR_1)->m_string)+1;

 return (0);
}
