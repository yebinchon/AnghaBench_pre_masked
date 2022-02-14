
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_common_args {int acdirmax; int acdirmin; int acregmax; int acregmin; int retrans; int timeo; int wsize; int rsize; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_1(const struct nfs_common_args *VAR_1)
{
  FUNC_0(VAR_0, "NA->flags = 0x%lx", VAR_1->flags);

  FUNC_0(VAR_0, "NA->rsize = %lu", VAR_1->rsize);
  FUNC_0(VAR_0, "NA->wsize = %lu", VAR_1->wsize);
  FUNC_0(VAR_0, "NA->timeo = %lu", VAR_1->timeo);
  FUNC_0(VAR_0, "NA->retrans = %lu", VAR_1->retrans);







}
