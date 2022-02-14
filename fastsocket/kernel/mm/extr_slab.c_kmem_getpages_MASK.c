
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache {int gfpflags; int flags; int gfporder; scalar_t__ ctor; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ,int) ;
 struct page* FUNC_2 (int,int,int) ;
 int FUNC_3 (struct page*,int,int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*,int) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void *FUNC_8(struct kmem_cache *VAR_8, gfp_t VAR_9, int VAR_10)
{
 struct page *VAR_11;
 int VAR_12;
 int VAR_13;






 VAR_9 |= VAR_4;


 VAR_9 |= VAR_8->gfpflags;
 if (VAR_8->flags & VAR_3)
  VAR_9 |= VAR_6;

 VAR_11 = FUNC_2(VAR_10, VAR_9 | VAR_5, VAR_8->gfporder);
 if (!VAR_11)
  return ((void*)0);

 VAR_12 = (1 << VAR_8->gfporder);
 if (VAR_8->flags & VAR_3)
  FUNC_1(FUNC_7(VAR_11),
   VAR_0, VAR_12);
 else
  FUNC_1(FUNC_7(VAR_11),
   VAR_1, VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  FUNC_0(VAR_11 + VAR_13);

 if (VAR_7 && !(VAR_8->flags & VAR_2)) {
  FUNC_3(VAR_11, VAR_8->gfporder, VAR_9, VAR_10);

  if (VAR_8->ctor)
   FUNC_5(VAR_11, VAR_12);
  else
   FUNC_4(VAR_11, VAR_12);
 }

 return FUNC_6(VAR_11);
}
