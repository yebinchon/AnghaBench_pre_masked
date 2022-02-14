
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; } ;
struct mbuf {unsigned int m_len; TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int ) ;

__attribute__((used)) static struct mbuf *FUNC_5 (void *VAR_3, unsigned VAR_4)
{
 struct mbuf *VAR_5;

 FUNC_1 (VAR_5, VAR_1, VAR_0);
 if (! VAR_5)
  return 0;
 if (!(FUNC_0 (VAR_5, VAR_1))) {
  FUNC_3 (VAR_5);
  return 0;
 }
 VAR_5->m_pkthdr.len = VAR_5->m_len = VAR_4;
 FUNC_2 (VAR_3, FUNC_4 (VAR_5, VAR_2), VAR_4);
 return VAR_5;
}
