
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {size_t m_maxlen; int m_data; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct mbuf*,scalar_t__) ;
 struct mbuf* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(size_t VAR_3, struct mbuf **VAR_4)
{
 struct mbuf *VAR_5;

 VAR_3 = FUNC_0(VAR_3);
 if (VAR_3 < VAR_2)
  VAR_3 = VAR_2;
 VAR_5 = FUNC_3(VAR_1 + VAR_3);
 if (VAR_5 == ((void*)0))
  return VAR_0;
 FUNC_2(VAR_5, VAR_1 + VAR_3);
 VAR_5->m_maxlen = VAR_3;
 VAR_5->m_data = FUNC_1(VAR_5);
 *VAR_4 = VAR_5;
 return 0;
}
