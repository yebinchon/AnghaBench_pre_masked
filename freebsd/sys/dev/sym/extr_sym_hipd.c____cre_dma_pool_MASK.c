
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; int freep; int getp; int dmat; int dev_dmat; } ;
typedef TYPE_1__ m_pool_s ;
typedef int bus_dma_tag_t ;
struct TYPE_9__ {TYPE_1__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,char*) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static m_pool_s *FUNC_3(bus_dma_tag_t VAR_6)
{
 m_pool_s *VAR_7 = ((void*)0);

 VAR_7 = FUNC_0(&VAR_5, sizeof(*VAR_7), "MPOOL");
 if (VAR_7) {
  VAR_7->dev_dmat = VAR_6;
  if (!FUNC_2(VAR_6, 1, VAR_2,
          VAR_1,
          VAR_0,
          ((void*)0), ((void*)0), VAR_2, 1,
          VAR_2, 0,
          ((void*)0), ((void*)0), &VAR_7->dmat)) {
   VAR_7->getp = VAR_4;



   VAR_7->next = VAR_5;
   VAR_5 = VAR_7;
   return VAR_7;
  }
 }
 if (VAR_7)
  FUNC_1(&VAR_5, VAR_7, sizeof(*VAR_7), "MPOOL");
 return ((void*)0);
}
