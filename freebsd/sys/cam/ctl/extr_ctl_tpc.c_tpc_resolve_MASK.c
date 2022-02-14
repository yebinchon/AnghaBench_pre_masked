
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct tpc_list {int ncscd; int * cscd; int init_port; TYPE_2__* lun; } ;
struct TYPE_4__ {int ctl_softc; int lun; TYPE_1__* be_lun; } ;
struct TYPE_3__ {int blocksize; int pblockexp; int pblockoff; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int*,int*,int*) ;

__attribute__((used)) static uint64_t
FUNC_1(struct tpc_list *VAR_1, uint16_t VAR_2, uint32_t *VAR_3,
    uint32_t *VAR_4, uint32_t *VAR_5)
{

 if (VAR_2 == 0xffff) {
  if (VAR_3 && VAR_1->lun->be_lun)
   *VAR_3 = VAR_1->lun->be_lun->blocksize;
  if (VAR_4 && VAR_1->lun->be_lun)
   *VAR_4 = VAR_1->lun->be_lun->blocksize <<
       VAR_1->lun->be_lun->pblockexp;
  if (VAR_5 && VAR_1->lun->be_lun)
   *VAR_5 = VAR_1->lun->be_lun->blocksize *
       VAR_1->lun->be_lun->pblockoff;
  return (VAR_1->lun->lun);
 }
 if (VAR_2 >= VAR_1->ncscd)
  return (VAR_0);
 return (FUNC_0(VAR_1->lun->ctl_softc,
     VAR_1->init_port, &VAR_1->cscd[VAR_2], VAR_3, VAR_4, VAR_5));
}
