
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct pts_softc {int pts_flags; } ;


 int VAR_0 ;
 struct pts_softc* FUNC_0 (struct tty*) ;

__attribute__((used)) static int
FUNC_1(struct tty *VAR_1)
{
 struct pts_softc *VAR_2 = FUNC_0(VAR_1);

 VAR_2->pts_flags &= ~VAR_0;

 return (0);
}
