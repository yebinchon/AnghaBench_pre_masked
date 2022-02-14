
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int,int,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,size_t,int,int) ;
 void* FUNC_3 (struct page*) ;

__attribute__((used)) static void *FUNC_4(size_t VAR_2, gfp_t VAR_3, int VAR_4)
{
 struct page *VAR_5;
 void *VAR_6 = ((void*)0);

 VAR_3 |= VAR_0 | VAR_1;
 VAR_5 = FUNC_0(VAR_4, VAR_3, FUNC_1(VAR_2));
 if (VAR_5)
  VAR_6 = FUNC_3(VAR_5);

 FUNC_2(VAR_6, VAR_2, 1, VAR_3);
 return VAR_6;
}
