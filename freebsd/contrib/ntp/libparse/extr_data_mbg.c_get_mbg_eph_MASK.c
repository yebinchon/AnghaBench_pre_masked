
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L2flag; int L2code; int URA; int tgd; int af2; int af1; int af0; int cis; int cic; int cus; int cuc; int crs; int crc; int idot; int i0; int deltan; int OMEGADOT; int OMEGA0; int omega; int M0; int e; int sqrt_A; int t0e; int t0c; int tt; void* IODE3; void* IODE2; void* IODC; scalar_t__ health; int valid; scalar_t__ csum; } ;
typedef void* IOD ;
typedef scalar_t__ HEALTH ;
typedef TYPE_1__ EPH ;
typedef scalar_t__ CSUM ;


 int FUNC_0 (unsigned char**,int *) ;
 int FUNC_1 (unsigned char**) ;
 scalar_t__ FUNC_2 (unsigned char**) ;
 int FUNC_3 (unsigned char**) ;
 int FUNC_4 (unsigned char**,int *) ;

void
FUNC_5(
 unsigned char ** VAR_0,
 EPH *VAR_1
 )
{
  VAR_1->csum = (CSUM) FUNC_2(VAR_0);
  VAR_1->valid = FUNC_1(VAR_0);

  VAR_1->health = (HEALTH) FUNC_2(VAR_0);
  VAR_1->IODC = (IOD) FUNC_2(VAR_0);
  VAR_1->IODE2 = (IOD) FUNC_2(VAR_0);
  VAR_1->IODE3 = (IOD) FUNC_2(VAR_0);

  FUNC_4(VAR_0, &VAR_1->tt);
  FUNC_4(VAR_0, &VAR_1->t0c);
  FUNC_4(VAR_0, &VAR_1->t0e);

  FUNC_0(VAR_0, &VAR_1->sqrt_A);
  FUNC_0(VAR_0, &VAR_1->e);
  FUNC_0(VAR_0, &VAR_1->M0);
  FUNC_0(VAR_0, &VAR_1->omega);
  FUNC_0(VAR_0, &VAR_1->OMEGA0);
  FUNC_0(VAR_0, &VAR_1->OMEGADOT);
  FUNC_0(VAR_0, &VAR_1->deltan);
  FUNC_0(VAR_0, &VAR_1->i0);
  FUNC_0(VAR_0, &VAR_1->idot);
  FUNC_0(VAR_0, &VAR_1->crc);
  FUNC_0(VAR_0, &VAR_1->crs);
  FUNC_0(VAR_0, &VAR_1->cuc);
  FUNC_0(VAR_0, &VAR_1->cus);
  FUNC_0(VAR_0, &VAR_1->cic);
  FUNC_0(VAR_0, &VAR_1->cis);

  FUNC_0(VAR_0, &VAR_1->af0);
  FUNC_0(VAR_0, &VAR_1->af1);
  FUNC_0(VAR_0, &VAR_1->af2);
  FUNC_0(VAR_0, &VAR_1->tgd);

  VAR_1->URA = FUNC_3(VAR_0);

  VAR_1->L2code = *(*VAR_0)++;
  VAR_1->L2flag = *(*VAR_0)++;
}
