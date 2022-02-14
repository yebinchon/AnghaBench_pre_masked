
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct dcons_softc {struct tty* tty; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 struct dcons_softc* VAR_1 ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(int VAR_2)
{
 struct tty *VAR_3;
 struct dcons_softc *VAR_4;

 VAR_4 = &VAR_1[VAR_2];
 VAR_3 = VAR_4->tty;


 FUNC_0(&VAR_0, 1);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 return(0);
}
