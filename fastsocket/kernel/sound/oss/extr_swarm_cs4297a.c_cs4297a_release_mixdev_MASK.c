
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct cs4297a_state {int dummy; } ;


 int FUNC_0 (struct cs4297a_state*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct cs4297a_state *VAR_2 =
     (struct cs4297a_state *) VAR_1->private_data;

 FUNC_0(VAR_2);
 return 0;
}
