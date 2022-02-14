
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;


 struct page* FUNC_0 (struct hstate*,int) ;
 struct page* FUNC_1 (struct hstate*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct page *FUNC_4(struct hstate *VAR_1, int VAR_2)
{
 struct page *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_3(&VAR_0);

 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
