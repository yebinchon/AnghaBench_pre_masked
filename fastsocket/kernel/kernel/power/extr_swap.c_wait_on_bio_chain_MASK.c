
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct bio {TYPE_1__* bi_io_vec; struct bio* bi_private; } ;
struct TYPE_2__ {struct page* bv_page; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct bio **VAR_1)
{
 struct bio *VAR_2;
 struct bio *VAR_3;
 int VAR_4 = 0;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_2 = *VAR_1;
 if (VAR_2 == ((void*)0))
  return 0;
 while (VAR_2) {
  struct page *VAR_5;

  VAR_3 = VAR_2->bi_private;
  VAR_5 = VAR_2->bi_io_vec[0].bv_page;
  FUNC_4(VAR_5);
  if (!FUNC_1(VAR_5) || FUNC_0(VAR_5))
   VAR_4 = -VAR_0;
  FUNC_3(VAR_5);
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }
 *VAR_1 = ((void*)0);
 return VAR_4;
}
