
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsdevice {scalar_t__ nfsdev_mdsisset; int * nfsdev_nmp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct nfsdevice *VAR_1)
{

 FUNC_0(4, "deleteds: deleting a mirror\n");
 VAR_1->nfsdev_nmp = ((void*)0);
 if (VAR_1->nfsdev_mdsisset == 0)
  VAR_0--;
}
