
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {int * a_ops; struct inode* host; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (int) ;
 int VAR_0 ;
 struct page* FUNC_2 (struct address_space*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct inode*,int ,struct page**,int ,int ,int *) ;
 int FUNC_4 (struct page*) ;

struct page *FUNC_5(struct address_space *VAR_2,
      pgoff_t VAR_3, gfp_t VAR_4)
{
 return FUNC_2(VAR_2, VAR_3, VAR_4);

}
