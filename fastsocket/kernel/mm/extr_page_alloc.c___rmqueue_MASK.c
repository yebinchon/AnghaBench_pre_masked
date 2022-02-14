
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (struct zone*,unsigned int,int) ;
 struct page* FUNC_1 (struct zone*,unsigned int,int) ;
 int FUNC_2 (struct page*,unsigned int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct page *FUNC_4(struct zone *VAR_1, unsigned int VAR_2,
      int VAR_3)
{
 struct page *VAR_4;

retry_reserve:
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (FUNC_3(!VAR_4) && VAR_3 != VAR_0) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);






  if (!VAR_4) {
   VAR_3 = VAR_0;
   goto retry_reserve;
  }
 }

 FUNC_2(VAR_4, VAR_2, VAR_3);
 return VAR_4;
}
