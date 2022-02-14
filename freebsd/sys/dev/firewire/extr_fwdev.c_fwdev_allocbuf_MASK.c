
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct fw_xferq {int flag; int bnchunk; int bnpacket; int psize; TYPE_1__* bulkxfer; int stfree; int * stproc; int stdma; int stvalid; scalar_t__ queued; int * buf; } ;
struct fw_bulkxfer {int dummy; } ;
struct fw_bufspec {int nchunk; int psize; int npacket; } ;
struct firewire_comm {int dummy; } ;
struct TYPE_4__ {int poffset; int * mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (struct firewire_comm*,int,int,int,int ) ;
 int VAR_9 ;
 TYPE_1__* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int
FUNC_6(struct firewire_comm *VAR_10, struct fw_xferq *VAR_11,
 struct fw_bufspec *VAR_12)
{
 int VAR_13;

 if (VAR_11->flag & (VAR_5 | VAR_3))
  return (VAR_1);

 VAR_11->bulkxfer = FUNC_4(sizeof(struct fw_bulkxfer) * VAR_12->nchunk,
     VAR_7, VAR_8);

 VAR_12->psize = FUNC_5(VAR_12->psize, sizeof(uint32_t));
 VAR_11->buf = FUNC_3(VAR_10, sizeof(uint32_t),
     VAR_12->psize, VAR_12->nchunk * VAR_12->npacket, VAR_0);

 if (VAR_11->buf == ((void*)0)) {
  FUNC_2(VAR_11->bulkxfer, VAR_7);
  VAR_11->bulkxfer = ((void*)0);
  return (VAR_2);
 }
 VAR_11->bnchunk = VAR_12->nchunk;
 VAR_11->bnpacket = VAR_12->npacket;
 VAR_11->psize = (VAR_12->psize + 3) & ~3;
 VAR_11->queued = 0;

 FUNC_0(&VAR_11->stvalid);
 FUNC_0(&VAR_11->stfree);
 FUNC_0(&VAR_11->stdma);
 VAR_11->stproc = ((void*)0);

 for (VAR_13 = 0; VAR_13 < VAR_11->bnchunk; VAR_13++) {
  VAR_11->bulkxfer[VAR_13].poffset = VAR_13 * VAR_11->bnpacket;
  VAR_11->bulkxfer[VAR_13].mbuf = ((void*)0);
  FUNC_1(&VAR_11->stfree, &VAR_11->bulkxfer[VAR_13], VAR_9);
 }

 VAR_11->flag &= ~VAR_4;
 VAR_11->flag |= VAR_6;
 VAR_11->flag |= VAR_3;

 return (0);
}
