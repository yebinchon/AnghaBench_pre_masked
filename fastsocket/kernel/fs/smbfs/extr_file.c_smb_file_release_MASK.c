
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int openers; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_0, struct file * VAR_1)
{
 FUNC_2();
 if (!--FUNC_0(VAR_0)->openers) {



  FUNC_1(VAR_0->i_mapping);
  FUNC_3(VAR_0);
 }
 FUNC_4();
 return 0;
}
