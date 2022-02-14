
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct snp_softc {int snp_outpoll; int snp_outq; struct tty* snp_tty; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void**) ;
 int FUNC_1 (struct thread*,int *) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct snp_softc *VAR_8;
 struct tty *VAR_9;
 int VAR_10;

 if (FUNC_0((void **)&VAR_8) != 0)
  return (VAR_6 &
      (VAR_0|VAR_1|VAR_3|VAR_2|VAR_4));

 VAR_10 = 0;

 if (VAR_6 & (VAR_1 | VAR_3)) {
  VAR_9 = VAR_8->snp_tty;
  if (VAR_9 != ((void*)0)) {
   FUNC_2(VAR_9);
   if (FUNC_4(&VAR_8->snp_outq) > 0)
    VAR_10 |= VAR_6 & (VAR_1 | VAR_3);
   FUNC_3(VAR_9);
  }
 }

 if (VAR_10 == 0)
  FUNC_1(VAR_7, &VAR_8->snp_outpoll);

 return (VAR_10);
}
