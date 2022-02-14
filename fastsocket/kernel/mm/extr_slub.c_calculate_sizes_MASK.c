
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int dummy; } ;
struct kmem_cache {unsigned long flags; unsigned long objsize; unsigned long align; unsigned long inuse; unsigned long offset; unsigned long size; void* oo; void* max; void* min; int allocflags; scalar_t__ ctor; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_1 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 void* FUNC_4 (int,unsigned long) ;
 scalar_t__ FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct kmem_cache *VAR_10, int VAR_11)
{
 unsigned long VAR_12 = VAR_10->flags;
 unsigned long VAR_13 = VAR_10->objsize;
 unsigned long VAR_14 = VAR_10->align;
 int VAR_15;






 VAR_13 = FUNC_0(VAR_13, sizeof(void *));
 VAR_10->inuse = VAR_13;

 if (((VAR_12 & (VAR_1 | VAR_2)) ||
  VAR_10->ctor)) {
  VAR_10->offset = VAR_13;
  VAR_13 += sizeof(void *);
 }
 VAR_14 = FUNC_1(VAR_12, VAR_14, VAR_10->objsize);
 VAR_10->align = VAR_14;






 VAR_13 = FUNC_0(VAR_13, VAR_14);
 VAR_10->size = VAR_13;
 if (VAR_11 >= 0)
  VAR_15 = VAR_11;
 else
  VAR_15 = FUNC_2(VAR_13);

 if (VAR_15 < 0)
  return 0;

 VAR_10->allocflags = 0;
 if (VAR_15)
  VAR_10->allocflags |= VAR_7;

 if (VAR_10->flags & VAR_0)
  VAR_10->allocflags |= VAR_6;

 if (VAR_10->flags & VAR_3)
  VAR_10->allocflags |= VAR_8;




 VAR_10->oo = FUNC_4(VAR_15, VAR_13);
 VAR_10->min = FUNC_4(FUNC_3(VAR_13), VAR_13);
 if (FUNC_5(VAR_10->oo) > FUNC_5(VAR_10->max))
  VAR_10->max = VAR_10->oo;

 return !!FUNC_5(VAR_10->oo);

}
