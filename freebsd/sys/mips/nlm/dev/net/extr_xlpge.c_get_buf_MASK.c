
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
struct TYPE_2__ {int len; } ;
struct mbuf {scalar_t__ m_data; TYPE_1__ m_pkthdr; int m_len; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mbuf*,int) ;
 struct mbuf* FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_4(void)
{
 struct mbuf *VAR_5;
 uint64_t *VAR_6;




 if ((VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_3)) == ((void*)0))
  return (((void*)0));
 VAR_5->m_len = VAR_5->m_pkthdr.len = VAR_0;
 FUNC_0(((uintptr_t)VAR_5->m_data & (VAR_4 - 1)) == 0,
     ("m_new->m_data is not cacheline aligned"));
 VAR_6 = (uint64_t *)VAR_5->m_data;
 VAR_6[0] = (intptr_t)VAR_5;
 VAR_6[1] = 0xf00bad;
 FUNC_1(VAR_5, VAR_4);







 return ((void *)VAR_5->m_data);
}
