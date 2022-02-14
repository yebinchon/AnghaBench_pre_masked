
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_block {scalar_t__ dirty; int free; int lock; int dirty_map; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long,unsigned int) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (struct vmap_block*) ;
 unsigned int FUNC_5 (unsigned long) ;
 struct vmap_block* FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_12(const void *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;
 struct vmap_block *VAR_12;

 FUNC_0(VAR_8 & ~VAR_0);
 FUNC_0(VAR_8 > VAR_2*VAR_5);

 FUNC_3((unsigned long)VAR_7, (unsigned long)VAR_7 + VAR_8);

 VAR_11 = FUNC_5(VAR_8);

 VAR_9 = (unsigned long)VAR_7 & (VAR_4 - 1);

 VAR_10 = FUNC_1((unsigned long)VAR_7);
 FUNC_7();
 VAR_12 = FUNC_6(&VAR_6, VAR_10);
 FUNC_8();
 FUNC_0(!VAR_12);

 FUNC_11((unsigned long)VAR_7, (unsigned long)VAR_7 + VAR_8);

 FUNC_9(&VAR_12->lock);
 FUNC_0(FUNC_2(VAR_12->dirty_map, VAR_9 >> VAR_1, VAR_11));

 VAR_12->dirty += 1UL << VAR_11;
 if (VAR_12->dirty == VAR_3) {
  FUNC_0(VAR_12->free);
  FUNC_10(&VAR_12->lock);
  FUNC_4(VAR_12);
 } else
  FUNC_10(&VAR_12->lock);
}
