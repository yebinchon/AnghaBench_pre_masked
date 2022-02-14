
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {size_t private; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (size_t) ;
 int FUNC_1 (void*,size_t,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 unsigned int* FUNC_4 (size_t,int,int,int) ;
 void* FUNC_5 (int,unsigned int,int) ;
 int FUNC_6 (int ,void*,size_t,int,int,int) ;
 struct page* FUNC_7 (void*) ;

void *FUNC_8(size_t VAR_6, gfp_t VAR_7, int VAR_8)
{
 unsigned int *VAR_9;
 int VAR_10 = FUNC_3(VAR_0, VAR_1);
 void *VAR_11;

 FUNC_2(VAR_7);

 if (VAR_6 < VAR_2 - VAR_10) {
  if (!VAR_6)
   return VAR_3;

  VAR_9 = FUNC_4(VAR_6 + VAR_10, VAR_7, VAR_10, VAR_8);

  if (!VAR_9)
   return ((void*)0);
  *VAR_9 = VAR_6;
  VAR_11 = (void *)VAR_9 + VAR_10;

  FUNC_6(VAR_4, VAR_11,
       VAR_6, VAR_6 + VAR_10, VAR_7, VAR_8);
 } else {
  unsigned int VAR_12 = FUNC_0(VAR_6);

  VAR_11 = FUNC_5(VAR_7 | VAR_5, FUNC_0(VAR_6), VAR_8);
  if (VAR_11) {
   struct page *VAR_13;
   VAR_13 = FUNC_7(VAR_11);
   VAR_13->private = VAR_6;
  }

  FUNC_6(VAR_4, VAR_11,
       VAR_6, VAR_2 << VAR_12, VAR_7, VAR_8);
 }

 FUNC_1(VAR_11, VAR_6, 1, VAR_7);
 return VAR_11;
}
