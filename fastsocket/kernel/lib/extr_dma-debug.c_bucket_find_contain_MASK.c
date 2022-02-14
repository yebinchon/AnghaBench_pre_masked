
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_bucket {int dummy; } ;
struct dma_debug_entry {int dev_addr; int dev; } ;


 int VAR_0 ;
 struct dma_debug_entry* FUNC_0 (struct hash_bucket*,struct dma_debug_entry*,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 struct hash_bucket* FUNC_2 (struct dma_debug_entry*,unsigned long*) ;
 int FUNC_3 (struct hash_bucket*,unsigned long*) ;

__attribute__((used)) static struct dma_debug_entry *FUNC_4(struct hash_bucket **VAR_2,
         struct dma_debug_entry *VAR_3,
         unsigned long *VAR_4)
{

 unsigned int VAR_5 = FUNC_1(VAR_3->dev);
 struct dma_debug_entry *VAR_6, VAR_7 = *VAR_3;
 unsigned int VAR_8 = 0;

 while (VAR_8 <= VAR_5) {
  VAR_6 = FUNC_0(*VAR_2, &VAR_7, VAR_1);

  if (VAR_6)
   return VAR_6;




  FUNC_3(*VAR_2, VAR_4);
  VAR_8 += (1 << VAR_0);
  VAR_7.dev_addr -= (1 << VAR_0);
  *VAR_2 = FUNC_2(&VAR_7, VAR_4);
 }

 return ((void*)0);
}
