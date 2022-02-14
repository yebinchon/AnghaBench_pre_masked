
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_filelist {int name; } ;
struct qstr {int len; int name; int hash; } ;
struct inode {int i_mode; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 () ;

 int VAR_0 ;

 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_1,
        const struct rpc_filelist *VAR_2,
        int VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_1->d_inode;
 struct dentry *VAR_6;
 struct qstr VAR_7;
 int VAR_8;

 for (VAR_8 = VAR_3; VAR_8 < VAR_4; VAR_8++) {
  VAR_7.name = VAR_2[VAR_8].name;
  VAR_7.len = FUNC_6(VAR_2[VAR_8].name);
  VAR_7.hash = FUNC_5(VAR_7.name, VAR_7.len);
  VAR_6 = FUNC_3(VAR_1, &VAR_7);

  if (VAR_6 == ((void*)0))
   continue;
  if (VAR_6->d_inode == ((void*)0))
   goto next;
  switch (VAR_6->d_inode->i_mode & VAR_0) {
   default:
    FUNC_0();
   case 128:
    FUNC_2(VAR_5, VAR_6);
    break;
   case 129:
    FUNC_1(VAR_5, VAR_6);
  }
next:
  FUNC_4(VAR_6);
 }
}
