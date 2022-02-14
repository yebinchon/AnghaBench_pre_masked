
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {int dummy; } ;
struct nfsdevice {char* nfsdev_host; int nfsdev_deviceid; } ;
typedef int NFSPROC_T ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct nfsdevice*) ;
 struct nfsdevice* FUNC_4 (struct nfsmount*) ;
 int FUNC_5 (int ,int *) ;
 struct nfsdevice* FUNC_6 (struct nfsmount*) ;
 int FUNC_7 (char*,char*) ;

struct nfsdevice *
FUNC_8(int VAR_1, struct nfsmount *VAR_2, NFSPROC_T *VAR_3)
{
 struct nfsdevice *VAR_4;

 FUNC_2(4, "deldsdvp\n");
 FUNC_0();
 if (VAR_1 == VAR_0)
  VAR_4 = FUNC_6(VAR_2);
 else
  VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_4);
 FUNC_1();
 if (VAR_4 != ((void*)0)) {
  if (VAR_1 != VAR_0)
   FUNC_5(VAR_4->nfsdev_deviceid, VAR_3);
  FUNC_7("pNFS server: mirror %s failed\n", VAR_4->nfsdev_host);
 }
 return (VAR_4);
}
