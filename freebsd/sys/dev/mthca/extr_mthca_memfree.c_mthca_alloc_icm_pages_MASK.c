
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int,int) ;
 int FUNC_1 (struct scatterlist*,struct page*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_3, int VAR_4, gfp_t VAR_5)
{
 struct page *VAR_6;





 VAR_6 = FUNC_0(VAR_5 | VAR_2, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_6, VAR_1 << VAR_4, 0);
 return 0;
}
