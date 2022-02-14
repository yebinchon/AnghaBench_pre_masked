
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_data; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(struct inode *VAR_0)
{
 FUNC_0("ino=%ld\n", VAR_0->i_ino);
 FUNC_5(&VAR_0->i_data, 0);
 FUNC_3();
 if (FUNC_4(VAR_0))
  FUNC_1("could not close inode %ld\n", VAR_0->i_ino);
 FUNC_6();
 FUNC_2(VAR_0);
}
