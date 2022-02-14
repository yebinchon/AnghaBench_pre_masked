
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_bucket {int lock; } ;
struct dma_debug_entry {int dummy; } ;


 struct hash_bucket* VAR_0 ;
 int FUNC_0 (struct dma_debug_entry*) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct hash_bucket *FUNC_2(struct dma_debug_entry *VAR_1,
        unsigned long *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_0[VAR_3].lock, VAR_4);
 *VAR_2 = VAR_4;
 return &VAR_0[VAR_3];
}
