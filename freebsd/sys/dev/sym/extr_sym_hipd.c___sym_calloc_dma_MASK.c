
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_pool {int nump; } ;
typedef int bus_dma_tag_t ;


 struct m_pool* FUNC_0 (int ) ;
 int FUNC_1 (struct m_pool*) ;
 struct m_pool* FUNC_2 (int ) ;
 void* FUNC_3 (struct m_pool*,int,char*) ;

__attribute__((used)) static void *FUNC_4(bus_dma_tag_t VAR_0, int VAR_1, char *VAR_2)
{
 struct m_pool *VAR_3;
 void *VAR_4 = ((void*)0);


 VAR_3 = FUNC_2(VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2);






 return VAR_4;
}
