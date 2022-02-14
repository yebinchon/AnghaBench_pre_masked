
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct dcons_softc {int flags; struct tty* tty; } ;


 int VAR_0 ;
 struct dcons_softc* VAR_1 ;
 struct tty* FUNC_0 (int *,struct dcons_softc*) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (struct tty*,int *,char*,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char *VAR_3, int VAR_4)
{
 struct dcons_softc *VAR_5;
 struct tty *VAR_6;

 VAR_5 = &VAR_1[VAR_2];
 VAR_6 = FUNC_0(&VAR_0, VAR_5);
 VAR_5->flags = VAR_4;
 VAR_5->tty = VAR_6;
 FUNC_1(VAR_6, 0);
 FUNC_2(VAR_6, ((void*)0), "%s", VAR_3);
 return(0);
}
