
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct snp_softc {int snp_outwait; int snp_outq; struct tty* snp_tty; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snp_softc*,int ) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct snp_softc *VAR_2 = VAR_1;
 struct tty *VAR_3;

 VAR_3 = VAR_2->snp_tty;
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3);
  FUNC_4(&VAR_2->snp_outq);
  FUNC_3(VAR_3);
 }

 FUNC_0(&VAR_2->snp_outwait);
 FUNC_1(VAR_2, VAR_0);
}
