
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct cred {int dummy; } ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cred const*,struct inode*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, int VAR_1)
{
 const struct cred *VAR_2 = FUNC_0();

 if (!VAR_1) {

  return 0;
 }

 return FUNC_2(VAR_2, VAR_0,
         FUNC_1(VAR_0->i_mode, VAR_1), ((void*)0));
}
