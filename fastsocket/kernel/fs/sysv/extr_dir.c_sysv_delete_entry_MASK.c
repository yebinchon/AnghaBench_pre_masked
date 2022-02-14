
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {scalar_t__ inode; } ;
struct page {struct address_space* mapping; } ;
struct inode {int i_mtime; int i_ctime; } ;
struct address_space {scalar_t__ host; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct address_space*,int,int ,int ,struct page**,int *) ;
 int FUNC_2 (struct page*,int,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

int FUNC_8(struct sysv_dir_entry *VAR_3, struct page *VAR_4)
{
 struct address_space *VAR_5 = VAR_4->mapping;
 struct inode *VAR_6 = (struct inode*)VAR_5->host;
 char *VAR_7 = (char*)FUNC_6(VAR_4);
 loff_t VAR_8 = FUNC_7(VAR_4) + (char *)VAR_3 - VAR_7;
 int VAR_9;

 FUNC_4(VAR_4);
 VAR_9 = FUNC_1(((void*)0), VAR_5, VAR_8, VAR_2,
    VAR_0, &VAR_4, ((void*)0));
 FUNC_0(VAR_9);
 VAR_3->inode = 0;
 VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_2);
 FUNC_3(VAR_4);
 VAR_6->i_ctime = VAR_6->i_mtime = VAR_1;
 FUNC_5(VAR_6);
 return VAR_9;
}
