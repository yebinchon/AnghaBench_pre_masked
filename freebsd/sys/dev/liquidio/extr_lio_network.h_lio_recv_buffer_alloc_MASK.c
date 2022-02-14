
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mbuf* FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void *
FUNC_1(uint32_t VAR_3)
{
 struct mbuf *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3);
 if (VAR_4 != ((void*)0))
  VAR_4->m_pkthdr.len = VAR_4->m_len = VAR_3;

 return ((void *)VAR_4);
}
