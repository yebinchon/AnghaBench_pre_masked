
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uni_abr_rec {int present; int nrm; int trm; int cdf; int adtf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u_int
FUNC_0(struct uni_abr_rec *VAR_4)
{
 u_int VAR_5 = VAR_4->present & 0xf000;

 if(VAR_5 & VAR_2)
  VAR_5 |= (VAR_4->nrm & 0x7) << 25;
 if(VAR_5 & VAR_3)
  VAR_5 |= (VAR_4->trm & 0x7) << 22;
 if(VAR_5 & VAR_1)
  VAR_5 |= (VAR_4->cdf & 0x7) << 19;
 if(VAR_5 & VAR_0)
  VAR_5 |= (VAR_4->adtf & 0x3ff) << 9;

 return VAR_5;
}
