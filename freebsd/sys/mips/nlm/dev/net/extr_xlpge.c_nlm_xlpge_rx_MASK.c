
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef void* vm_offset_t ;
typedef int uintmax_t ;
typedef int uint64_t ;
struct nlm_xlpge_softc {int prepad_size; scalar_t__ prepad_en; struct ifnet* xlpge_if; } ;
struct TYPE_2__ {int len; struct ifnet* rcvif; } ;
struct mbuf {int m_data; int m_len; TYPE_1__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ifnet*,int ,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ifnet*,struct mbuf*) ;
 int FUNC_5 (struct ifnet*,struct mbuf*) ;
 int FUNC_6 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_7(struct nlm_xlpge_softc *VAR_2, int VAR_3, vm_paddr_t VAR_4, int VAR_5)
{
 struct ifnet *VAR_6;
 struct mbuf *VAR_7;
 vm_offset_t VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_6 = VAR_2->xlpge_if;
 VAR_8 = FUNC_2(VAR_4 - VAR_1);
 VAR_9 = FUNC_2(VAR_4 - VAR_1 + sizeof(uint64_t));

 VAR_7 = (struct mbuf *)(intptr_t)VAR_8;
 if (VAR_9 != 0xf00bad) {

  FUNC_3("cpu %d: ERR Rx packet paddr %jx, temp %p, mag %lx\n",
      FUNC_1(), (uintmax_t)VAR_4, (void *)VAR_8, VAR_9);
  return;
 }

 VAR_7->m_pkthdr.rcvif = VAR_6;
 if (VAR_2->prepad_en) {
  VAR_10 = ((VAR_2->prepad_size + 1) * 16);
  VAR_7->m_data += VAR_10;
  VAR_7->m_pkthdr.len = VAR_7->m_len = (VAR_5 - VAR_10);
 } else
  VAR_7->m_pkthdr.len = VAR_7->m_len = VAR_5;

 FUNC_0(VAR_6, VAR_0, 1);






 (*VAR_6->if_input)(VAR_6, VAR_7);

}
