
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac {int m_buflen; int * m_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mac*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(struct mac **VAR_3, const char *VAR_4)
{

 if (FUNC_3(VAR_4) >= VAR_2)
  return (VAR_0);

 *VAR_3 = (struct mac *) FUNC_1(sizeof(**VAR_3));
 if (*VAR_3 == ((void*)0))
  return (VAR_1);

 (*VAR_3)->m_string = FUNC_1(VAR_2);
 if ((*VAR_3)->m_string == ((void*)0)) {
  FUNC_0(*VAR_3);
  *VAR_3 = ((void*)0);
  return (VAR_1);
 }

 FUNC_2((*VAR_3)->m_string, VAR_4);
 (*VAR_3)->m_buflen = VAR_2;

 return (0);
}
