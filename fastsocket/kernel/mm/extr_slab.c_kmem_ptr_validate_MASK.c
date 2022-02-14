
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache {unsigned long buffer_size; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned long) ;
 struct kmem_cache* FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 struct page* FUNC_4 (void const*) ;

int FUNC_5(struct kmem_cache *VAR_3, const void *VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_4;
 unsigned long VAR_6 = VAR_1;
 unsigned long VAR_7 = VAR_0 - 1;
 unsigned long VAR_8 = VAR_3->buffer_size;
 struct page *VAR_9;

 if (FUNC_3(VAR_5 < VAR_6))
  goto out;
 if (FUNC_3(VAR_5 > (unsigned long)VAR_2 - VAR_8))
  goto out;
 if (FUNC_3(VAR_5 & VAR_7))
  goto out;
 if (FUNC_3(!FUNC_1(VAR_5)))
  goto out;
 if (FUNC_3(!FUNC_1(VAR_5 + VAR_8 - 1)))
  goto out;
 VAR_9 = FUNC_4(VAR_4);
 if (FUNC_3(!FUNC_0(VAR_9)))
  goto out;
 if (FUNC_3(FUNC_2(VAR_9) != VAR_3))
  goto out;
 return 1;
out:
 return 0;
}
