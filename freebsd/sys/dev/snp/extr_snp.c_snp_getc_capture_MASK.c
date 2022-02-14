
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct snp_softc {int snp_outpoll; int snp_outwait; int snp_outq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snp_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct snp_softc *VAR_3 = FUNC_2(VAR_0);

 FUNC_3(&VAR_3->snp_outq, VAR_1, VAR_2);

 FUNC_0(&VAR_3->snp_outwait);
 FUNC_1(&VAR_3->snp_outpoll);
}
