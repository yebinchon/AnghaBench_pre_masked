
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct tty {int t_mtx; } ;
struct snp_softc {int snp_outwait; int snp_outq; struct tty* snp_tty; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (int *,struct tty*,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = VAR_4->uio_resid;
 struct snp_softc *VAR_8;
 struct tty *VAR_9;

 if (VAR_4->uio_resid == 0)
  return (0);

 VAR_6 = FUNC_1((void **)&VAR_8);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_9 = VAR_8->snp_tty;
 if (VAR_9 == ((void*)0) || FUNC_2(VAR_9))
  return (VAR_0);

 FUNC_3(VAR_9);
 for (;;) {
  VAR_6 = FUNC_5(&VAR_8->snp_outq, VAR_9, VAR_4);
  if (VAR_6 != 0 || VAR_4->uio_resid != VAR_7)
   break;


  if (VAR_5 & VAR_2) {
   VAR_6 = VAR_1;
   break;
  }
  VAR_6 = FUNC_0(&VAR_8->snp_outwait, VAR_9->t_mtx);
  if (VAR_6 != 0)
   break;
  if (FUNC_2(VAR_9)) {
   VAR_6 = VAR_0;
   break;
  }
 }
 FUNC_4(VAR_9);

 return (VAR_6);
}
