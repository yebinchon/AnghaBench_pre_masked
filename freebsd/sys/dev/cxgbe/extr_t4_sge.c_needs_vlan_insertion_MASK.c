
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int m_flags; } ;


 int FUNC_0 (struct mbuf*) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_1(struct mbuf *VAR_1)
{

 FUNC_0(VAR_1);

 return (VAR_1->m_flags & VAR_0);
}
