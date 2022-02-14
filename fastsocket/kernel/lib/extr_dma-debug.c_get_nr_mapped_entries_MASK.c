
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_bucket {int dummy; } ;
struct dma_debug_entry {int sg_mapped_ents; } ;
struct device {int dummy; } ;


 struct dma_debug_entry* FUNC_0 (struct hash_bucket*,struct dma_debug_entry*) ;
 struct hash_bucket* FUNC_1 (struct dma_debug_entry*,unsigned long*) ;
 int FUNC_2 (struct hash_bucket*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
     struct dma_debug_entry *VAR_1)
{
 struct dma_debug_entry *VAR_2;
 struct hash_bucket *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 VAR_2 = FUNC_0(VAR_3, VAR_1);
 VAR_5 = 0;

 if (VAR_2)
  VAR_5 = VAR_2->sg_mapped_ents;
 FUNC_2(VAR_3, &VAR_4);

 return VAR_5;
}
