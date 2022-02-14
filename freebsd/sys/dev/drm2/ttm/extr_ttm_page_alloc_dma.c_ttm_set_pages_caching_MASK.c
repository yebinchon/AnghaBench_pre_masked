
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_pool {int type; int dev_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (struct page**,unsigned int) ;
 int FUNC_2 (struct page**,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dma_pool *VAR_2,
     struct page **VAR_3, unsigned VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2->type & VAR_0) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  if (VAR_5)
   FUNC_0("%s: Failed to set %d pages to uc!\n",
          VAR_2->dev_name, VAR_4);
 }
 if (VAR_2->type & VAR_1) {
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  if (VAR_5)
   FUNC_0("%s: Failed to set %d pages to wc!\n",
          VAR_2->dev_name, VAR_4);
 }
 return VAR_5;
}
