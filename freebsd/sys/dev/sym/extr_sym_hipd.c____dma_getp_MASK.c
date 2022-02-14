
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dmamap; struct TYPE_6__* next; void* baddr; void* vaddr; } ;
typedef TYPE_1__ m_vtob_s ;
struct TYPE_7__ {int dmat; int nump; TYPE_1__** vtob; } ;
typedef TYPE_2__ m_pool_s ;
typedef void* m_addr_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 TYPE_1__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int,char*) ;
 int FUNC_3 (int ,int ,void*,int ,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,void**,int,int *) ;
 int FUNC_6 (int ,void*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static m_addr_t FUNC_7(m_pool_s *VAR_6)
{
 m_vtob_s *VAR_7;
 void *VAR_8 = ((void*)0);
 bus_addr_t VAR_9 = 0;

 VAR_7 = FUNC_1(&VAR_5, sizeof(*VAR_7), "VTOB");
 if (!VAR_7)
  goto out_err;

 if (FUNC_5(VAR_6->dmat, &VAR_8,
   VAR_0 | VAR_2, &VAR_7->dmamap))
  goto out_err;
 FUNC_3(VAR_6->dmat, VAR_7->dmamap, VAR_8,
   VAR_3, VAR_4, &VAR_9, VAR_1);
 if (VAR_9) {
  int VAR_10 = FUNC_0(VAR_8);
  VAR_7->vaddr = (m_addr_t) VAR_8;
  VAR_7->baddr = (m_addr_t) VAR_9;
  VAR_7->next = VAR_6->vtob[VAR_10];
  VAR_6->vtob[VAR_10] = VAR_7;
  ++VAR_6->nump;
  return (m_addr_t) VAR_8;
 }
out_err:
 if (VAR_9)
  FUNC_4(VAR_6->dmat, VAR_7->dmamap);
 if (VAR_8)
  FUNC_6(VAR_6->dmat, VAR_8, VAR_7->dmamap);
 if (VAR_7)
  FUNC_2(&VAR_5, VAR_7, sizeof(*VAR_7), "VTOB");
 return 0;
}
