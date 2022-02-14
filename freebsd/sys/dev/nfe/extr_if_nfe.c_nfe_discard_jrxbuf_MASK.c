
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfe_desc32* jdesc32; struct nfe_desc64* jdesc64; struct nfe_rx_data* jdata; } ;
struct nfe_softc {int nfe_flags; TYPE_1__ jrxq; } ;
struct nfe_rx_data {int paddr; struct mbuf* m; } ;
struct nfe_desc64 {void* flags; void* length; void** physaddr; } ;
struct nfe_desc32 {void* flags; void* length; } ;
struct mbuf {int m_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static __inline void
FUNC_4(struct nfe_softc *VAR_2, int VAR_3)
{
 struct nfe_desc32 *VAR_4;
 struct nfe_desc64 *VAR_5;
 struct nfe_rx_data *VAR_6;
 struct mbuf *VAR_7;

 VAR_6 = &VAR_2->jrxq.jdata[VAR_3];
 VAR_7 = VAR_6->m;

 if (VAR_2->nfe_flags & VAR_0) {
  VAR_5 = &VAR_2->jrxq.jdesc64[VAR_3];

  VAR_5->physaddr[0] = FUNC_3(FUNC_0(VAR_6->paddr));
  VAR_5->physaddr[1] = FUNC_3(FUNC_1(VAR_6->paddr));
  VAR_5->length = FUNC_2(VAR_7->m_len);
  VAR_5->flags = FUNC_2(VAR_1);
 } else {
  VAR_4 = &VAR_2->jrxq.jdesc32[VAR_3];
  VAR_4->length = FUNC_2(VAR_7->m_len);
  VAR_4->flags = FUNC_2(VAR_1);
 }
}
