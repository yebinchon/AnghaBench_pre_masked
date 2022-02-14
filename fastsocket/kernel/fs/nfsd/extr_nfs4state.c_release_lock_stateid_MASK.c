
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stateid {scalar_t__ st_stateowner; int st_file; } ;
struct file {int dummy; } ;
typedef int fl_owner_t ;


 struct file* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_stateid*) ;
 int FUNC_2 (struct file*,int ) ;
 int FUNC_3 (struct nfs4_stateid*) ;

__attribute__((used)) static void FUNC_4(struct nfs4_stateid *VAR_0)
{
 struct file *VAR_1;

 FUNC_3(VAR_0);
 VAR_1 = FUNC_0(VAR_0->st_file);
 if (VAR_1)
  FUNC_2(VAR_1, (fl_owner_t)VAR_0->st_stateowner);
 FUNC_1(VAR_0);
}
