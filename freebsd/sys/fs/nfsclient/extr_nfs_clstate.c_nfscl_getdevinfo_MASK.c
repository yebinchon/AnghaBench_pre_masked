
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nfscldevinfo {int nfsdi_refcnt; } ;
struct nfsclclient {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct nfscldevinfo* FUNC_2 (struct nfsclclient*,int *) ;

struct nfscldevinfo *
FUNC_3(struct nfsclclient *VAR_0, uint8_t *VAR_1,
    struct nfscldevinfo *VAR_2)
{

 FUNC_0();
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0))
  VAR_2->nfsdi_refcnt++;
 FUNC_1();
 return (VAR_2);
}
