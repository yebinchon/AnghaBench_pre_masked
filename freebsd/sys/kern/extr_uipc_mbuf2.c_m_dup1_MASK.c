
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; int m_len; int m_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf*,int,int,int ) ;
 int FUNC_1 (struct mbuf*,struct mbuf*,int) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int,int ) ;
 struct mbuf* FUNC_4 (int,int ,int) ;
 struct mbuf* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mbuf*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct mbuf *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct mbuf *VAR_8;
 int VAR_9;

 if (VAR_6 > VAR_0)
  return ((void*)0);
 if (VAR_5 == 0 && (VAR_4->m_flags & VAR_2) != 0)
  VAR_9 = 1;
 else
  VAR_9 = 0;
 if (VAR_6 >= VAR_1) {
  if (VAR_9 == 1)
   VAR_8 = FUNC_4(VAR_7, VAR_4->m_type, VAR_2);
  else
   VAR_8 = FUNC_4(VAR_7, VAR_4->m_type, 0);
 } else {
  if (VAR_9 == 1)
   VAR_8 = FUNC_5(VAR_7, VAR_4->m_type);
  else
   VAR_8 = FUNC_3(VAR_7, VAR_4->m_type);
 }
 if (!VAR_8)
  return ((void*)0);

 if (VAR_9 && !FUNC_1(VAR_8, VAR_4, VAR_7)) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }
 FUNC_0(VAR_4, VAR_5, VAR_6, FUNC_6(VAR_8, VAR_3));
 VAR_8->m_len = VAR_6;
 return VAR_8;
}
