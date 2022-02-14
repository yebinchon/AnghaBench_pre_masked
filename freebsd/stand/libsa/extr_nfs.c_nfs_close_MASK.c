
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct open_file {int * f_fsdata; } ;
struct nfs_iodesc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfs_iodesc*) ;
 int FUNC_1 (char*,int ) ;

int
FUNC_2(struct open_file *VAR_1)
{
 struct nfs_iodesc *VAR_2 = (struct nfs_iodesc *)VAR_1->f_fsdata;






 FUNC_0(VAR_2);
 VAR_1->f_fsdata = ((void*)0);

 return (0);
}
