
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct inode*,int ) ;
 scalar_t__ FUNC_2 (struct page*) ;

struct sysv_dir_entry * FUNC_3 (struct inode *VAR_0, struct page **VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_0, 0);
 struct sysv_dir_entry *VAR_3 = ((void*)0);

 if (!FUNC_0(VAR_2)) {
  VAR_3 = (struct sysv_dir_entry*) FUNC_2(VAR_2) + 1;
  *VAR_1 = VAR_2;
 }
 return VAR_3;
}
