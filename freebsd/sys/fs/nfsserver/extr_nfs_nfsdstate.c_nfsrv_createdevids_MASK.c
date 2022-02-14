
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfslayouthash {int dummy; } ;
struct nfsdevice {int dummy; } ;
struct nfsd_nfsd_args {char* addr; char* dnshost; char* dspath; char* mdspath; int mirrorcnt; int addrlen; int dnshostlen; int dspathlen; int mdspathlen; } ;
struct TYPE_3__ {int list; int mtx; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct nfsdevice*,char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,char*,int *,struct nfsdevice**) ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(struct nfsd_nfsd_args *VAR_11, NFSPROC_T *VAR_12)
{
 struct nfsdevice *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 int VAR_18, VAR_19;

 VAR_14 = VAR_11->addr;
 VAR_15 = VAR_11->dnshost;
 VAR_16 = VAR_11->dspath;
 VAR_17 = VAR_11->mdspath;
 VAR_10 = VAR_11->mirrorcnt;
 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0) || VAR_16 == ((void*)0) ||
     VAR_17 == ((void*)0))
  return (0);





 while (VAR_14 < (VAR_11->addr + VAR_11->addrlen) &&
     VAR_15 < (VAR_11->dnshost + VAR_11->dnshostlen) &&
     VAR_16 < (VAR_11->dspath + VAR_11->dspathlen) &&
     VAR_17 < (VAR_11->mdspath + VAR_11->mdspathlen)) {
  VAR_18 = FUNC_5(VAR_16, VAR_17, VAR_12, &VAR_13);
  if (VAR_18 != 0) {

   FUNC_4();
   VAR_6 = 0;
   return (VAR_0);
  }
  FUNC_3(VAR_13, VAR_14, VAR_15);
  VAR_14 += (FUNC_6(VAR_14) + 1);
  VAR_15 += (FUNC_6(VAR_15) + 1);
  VAR_16 += (FUNC_6(VAR_16) + 1);
  VAR_17 += (FUNC_6(VAR_17) + 1);
 }
 if (VAR_6 < VAR_10) {

  FUNC_4();
  VAR_6 = 0;
  VAR_10 = 1;
  return (VAR_0);
 }

 VAR_7 = VAR_10 - 1;





 if (VAR_5 == ((void*)0)) {
  VAR_8 = VAR_9 / 100;
  if (VAR_8 < 100)
   VAR_8 = 100;
  VAR_5 = FUNC_1(VAR_8,
      sizeof(struct nfslayouthash), VAR_2, VAR_3 |
      VAR_4);
  for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {
   FUNC_2(&VAR_5[VAR_19].mtx, "nfslm", ((void*)0), VAR_1);
   FUNC_0(&VAR_5[VAR_19].list);
  }
 }
 return (0);
}
