
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsdevice {struct nfsdevice* nfsdev_host; struct nfsdevice* nfsdev_flexaddr; struct nfsdevice* nfsdev_fileaddr; int ** nfsdev_dsdir; int * nfsdev_dvp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nfsdevice*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nfsdevice *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_1, -1);
 FUNC_2(VAR_3->nfsdev_dvp);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_3->nfsdev_dsdir[VAR_4] != ((void*)0))
   FUNC_2(VAR_3->nfsdev_dsdir[VAR_4]);
 FUNC_1(VAR_3->nfsdev_fileaddr, VAR_0);
 FUNC_1(VAR_3->nfsdev_flexaddr, VAR_0);
 FUNC_1(VAR_3->nfsdev_host, VAR_0);
 FUNC_1(VAR_3, VAR_0);
}
