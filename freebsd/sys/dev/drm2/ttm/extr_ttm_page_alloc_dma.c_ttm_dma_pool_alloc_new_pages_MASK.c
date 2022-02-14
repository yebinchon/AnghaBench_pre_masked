
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct list_head {int dummy; } ;
struct dma_pool {int dev_name; int name; } ;
struct dma_page {int page_list; struct page* p; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct dma_page* FUNC_1 (struct dma_pool*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (char*,int ,int ,int ,unsigned int) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (struct dma_pool*,struct list_head*,struct page**,unsigned int) ;
 int FUNC_9 (struct dma_pool*,struct page**,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct dma_pool *VAR_4,
     struct list_head *VAR_5,
     unsigned VAR_6)
{
 struct page **VAR_7;
 struct dma_page *VAR_8;
 struct page *VAR_9;
 int VAR_10 = 0;
 unsigned VAR_11, VAR_12;
 unsigned VAR_13 = FUNC_5(VAR_6,
   (unsigned)(VAR_2/sizeof(struct page *)));


 VAR_7 = FUNC_3(VAR_13*sizeof(struct page *), VAR_1);

 if (!VAR_7) {
  FUNC_7("%s: Unable to allocate table for new pages\n",
         VAR_4->dev_name);
  return -VAR_0;
 }

 if (VAR_6 > 1) {
  FUNC_6("%s: (%s:%d) Getting %d pages\n",
    VAR_4->dev_name, VAR_4->name, VAR_3->pid, VAR_6);
 }

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_6; ++VAR_11) {
  VAR_8 = FUNC_1(VAR_4);
  if (!VAR_8) {
   FUNC_7("%s: Unable to get page %u\n",
          VAR_4->dev_name, VAR_11);



   if (VAR_12) {
    VAR_10 = FUNC_9(VAR_4, VAR_7,
         VAR_12);
    if (VAR_10)
     FUNC_8(
      VAR_4, VAR_5, VAR_7,
      VAR_12);
   }
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_9 = VAR_8->p;






  {
   VAR_7[VAR_12++] = VAR_9;
   if (VAR_12 == VAR_13) {

    VAR_10 = FUNC_9(VAR_4, VAR_7,
       VAR_12);
    if (VAR_10) {
     FUNC_8(
      VAR_4, VAR_5, VAR_7,
      VAR_12);
     goto out;
    }
    VAR_12 = 0;
   }
  }
  FUNC_4(&VAR_8->page_list, VAR_5);
 }

 if (VAR_12) {
  VAR_10 = FUNC_9(VAR_4, VAR_7, VAR_12);
  if (VAR_10)
   FUNC_8(VAR_4, VAR_5,
     VAR_7, VAR_12);
 }
out:
 FUNC_2(VAR_7);
 return VAR_10;
}
