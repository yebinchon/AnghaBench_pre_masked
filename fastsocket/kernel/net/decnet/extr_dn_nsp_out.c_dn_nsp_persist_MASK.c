
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {int nsp_srtt; int nsp_rttvar; size_t nsp_rxtshift; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 unsigned long VAR_0 ;
 size_t VAR_1 ;
 unsigned long* VAR_2 ;

unsigned long FUNC_1(struct sock *VAR_3)
{
 struct dn_scp *VAR_4 = FUNC_0(VAR_3);

 unsigned long VAR_5 = ((VAR_4->nsp_srtt >> 2) + VAR_4->nsp_rttvar) >> 1;

 VAR_5 *= VAR_2[VAR_4->nsp_rxtshift];

 if (VAR_5 < VAR_0) VAR_5 = VAR_0;
 if (VAR_5 > (600*VAR_0)) VAR_5 = (600*VAR_0);

 if (VAR_4->nsp_rxtshift < VAR_1)
  VAR_4->nsp_rxtshift++;



 return VAR_5;
}
