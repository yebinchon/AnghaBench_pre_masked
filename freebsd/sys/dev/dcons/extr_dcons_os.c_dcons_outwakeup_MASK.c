
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct dcons_softc {int dummy; } ;


 int FUNC_0 (struct dcons_softc*,char) ;
 struct dcons_softc* FUNC_1 (struct tty*) ;
 scalar_t__ FUNC_2 (struct tty*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_0)
{
 struct dcons_softc *VAR_1;
 char VAR_2;

 VAR_1 = FUNC_1(VAR_0);

 while (FUNC_2(VAR_0, &VAR_2, sizeof VAR_2) != 0)
  FUNC_0(VAR_1, VAR_2);
}
