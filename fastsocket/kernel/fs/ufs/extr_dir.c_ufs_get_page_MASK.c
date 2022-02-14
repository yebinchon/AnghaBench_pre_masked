
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (struct address_space*,unsigned long,int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static struct page *FUNC_8(struct inode *VAR_1, unsigned long VAR_2)
{
 struct address_space *VAR_3 = VAR_1->i_mapping;
 struct page *VAR_4 = FUNC_5(VAR_3, VAR_2, ((void*)0));
 if (!FUNC_1(VAR_4)) {
  FUNC_4(VAR_4);
  if (!FUNC_2(VAR_4))
   FUNC_6(VAR_4);
  if (FUNC_3(VAR_4))
   goto fail;
 }
 return VAR_4;

fail:
 FUNC_7(VAR_4);
 return FUNC_0(-VAR_0);
}
