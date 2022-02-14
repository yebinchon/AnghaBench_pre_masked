
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct pkt {int precision; int xmt; int rec; int org; int reftime; void* rootdisp; void* rootdelay; } ;
struct TYPE_5__ {unsigned long l_ui; unsigned long l_uf; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (double) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (double,double) ;
 int FUNC_4 (TYPE_1__*,struct timeval*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct pkt*,int ,struct timeval*,double*,double*,double*) ;

void
FUNC_8(void)
{
 struct pkt VAR_2;
 l_fp VAR_3, VAR_4;
 struct timeval VAR_5;
 double VAR_6, VAR_7, VAR_8;

 VAR_2.precision = -1;
 VAR_2.rootdelay = FUNC_2(FUNC_0(0.5));
 VAR_2.rootdisp = FUNC_2(FUNC_0(0.5));


 FUNC_6(&VAR_3);
 FUNC_1(&VAR_3, &VAR_2.reftime);


 VAR_4.l_ui = 1000000001UL;
 VAR_4.l_uf = 0UL;
 FUNC_1(&VAR_4, &VAR_2.org);


 VAR_4.l_ui = 1000000000UL;
 VAR_4.l_uf = 2147483648UL;
 FUNC_1(&VAR_4, &VAR_2.rec);


 VAR_4.l_ui = 1000000001UL;
 VAR_4.l_uf = 2147483648UL;
 FUNC_1(&VAR_4, &VAR_2.xmt);


 VAR_4.l_ui = 1000000003UL;
 VAR_4.l_uf = 0UL;

 FUNC_4(&VAR_4, &VAR_5);
 VAR_5.tv_sec -= VAR_0;

 FUNC_7(&VAR_2, VAR_1, &VAR_5, &VAR_6, &VAR_7, &VAR_8);

 FUNC_3(-1, VAR_6);
 FUNC_3(1. / FUNC_5(1), VAR_7);
 FUNC_3(1.3333483333333334, VAR_8);
}
