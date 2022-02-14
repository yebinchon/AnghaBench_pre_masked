
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ baddr; struct TYPE_4__* next; scalar_t__ vaddr; } ;
typedef TYPE_1__ m_vtob_s ;
struct TYPE_5__ {TYPE_1__** vtob; } ;
typedef TYPE_2__ m_pool_s ;
typedef scalar_t__ m_addr_t ;
typedef int bus_dma_tag_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static m_addr_t FUNC_3(bus_dma_tag_t VAR_1, void *VAR_2)
{
 m_pool_s *VAR_3;
 int VAR_4 = FUNC_0(VAR_2);
 m_vtob_s *VAR_5 = ((void*)0);
 m_addr_t VAR_6 = ((m_addr_t) VAR_2) & ~VAR_0;


 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  VAR_5 = VAR_3->vtob[VAR_4];
  while (VAR_5 && (m_addr_t) VAR_5->vaddr != VAR_6)
   VAR_5 = VAR_5->next;
 }

 if (!VAR_5)
  FUNC_2("sym: VTOBUS FAILED!\n");
 return VAR_5 ? VAR_5->baddr + (((m_addr_t) VAR_2) - VAR_6) : 0;
}
