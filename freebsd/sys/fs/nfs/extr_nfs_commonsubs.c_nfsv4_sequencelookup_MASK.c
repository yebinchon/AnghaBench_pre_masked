
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct nfsmount {int nm_mountp; } ;
struct nfsclsession {scalar_t__ nfsess_defunct; int nfsess_foreslots; int nfsess_slots; int nfsess_mtx; int nfsess_sessionid; scalar_t__* nfsess_slotseq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct nfsmount *VAR_5, struct nfsclsession *VAR_6,
    int *VAR_7, int *VAR_8, uint32_t *VAR_9, uint8_t *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14;


 VAR_13 = -1;
 VAR_12 = -1;
 FUNC_2(&VAR_6->nfsess_mtx);
 do {
  if (VAR_5 != ((void*)0) && VAR_6->nfsess_defunct != 0) {

   FUNC_1(VAR_6->nfsess_sessionid, VAR_10,
       VAR_2);
   FUNC_4(&VAR_6->nfsess_mtx);
   return (VAR_1);
  }
  VAR_14 = 1;
  for (VAR_11 = 0; VAR_11 < VAR_6->nfsess_foreslots; VAR_11++) {
   if ((VAR_14 & VAR_6->nfsess_slots) == 0) {
    VAR_13 = VAR_11;
    VAR_6->nfsess_slots |= VAR_14;
    VAR_6->nfsess_slotseq[VAR_11]++;
    *VAR_9 = VAR_6->nfsess_slotseq[VAR_11];
    break;
   }
   VAR_14 <<= 1;
  }
  if (VAR_13 == -1) {





   if (VAR_5 != ((void*)0) && FUNC_0(VAR_5->nm_mountp)) {
    FUNC_4(&VAR_6->nfsess_mtx);
    return (VAR_0);
   }

   (void)FUNC_3(&VAR_6->nfsess_slots, &VAR_6->nfsess_mtx,
       VAR_3, "nfsclseq", VAR_4);
  }
 } while (VAR_13 == -1);

 VAR_14 = 1;
 for (VAR_11 = 0; VAR_11 < 64; VAR_11++) {
  if ((VAR_14 & VAR_6->nfsess_slots) != 0)
   VAR_12 = VAR_11;
  VAR_14 <<= 1;
 }
 FUNC_1(VAR_6->nfsess_sessionid, VAR_10, VAR_2);
 FUNC_4(&VAR_6->nfsess_mtx);
 *VAR_7 = VAR_13;
 *VAR_8 = VAR_12;
 return (0);
}
