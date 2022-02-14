
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct dcons_softc {struct tty* tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void (*) (void*),struct tty*) ;
 int VAR_2 ;
 int FUNC_1 (struct dcons_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dcons_softc* VAR_6 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*,int,int ) ;
 int FUNC_5 (struct tty*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_7)
{
 struct tty *VAR_8;
 struct dcons_softc *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10 ++) {
  VAR_9 = &VAR_6[VAR_10];
  VAR_8 = VAR_9->tty;

  FUNC_2(VAR_8);
  while ((VAR_11 = FUNC_1(VAR_9)) != -1) {
   FUNC_4(VAR_8, VAR_11, 0);
   VAR_5 = 0;
  }
  FUNC_5(VAR_8);
  FUNC_3(VAR_8);
 }
 VAR_5++;
 VAR_12 = VAR_3;
 if (VAR_5 <= (VAR_4 * VAR_1))
  VAR_12 /= VAR_4;
 FUNC_0(&VAR_2, VAR_12, FUNC_6, VAR_8);
}
