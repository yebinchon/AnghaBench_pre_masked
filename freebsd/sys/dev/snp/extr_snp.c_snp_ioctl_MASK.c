
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
struct tty {int dummy; } ;
struct thread {int td_proc; } ;
struct snp_softc {int snp_outq; struct tty* snp_tty; } ;
struct cdev {int dummy; } ;
typedef void* dev_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;

 void* VAR_2 ;



 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (void**) ;
 int VAR_4 ;
 int FUNC_3 (struct tty*) ;
 void* FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty**,int ,int,int *,struct snp_softc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct tty*,int ) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8,
    struct thread *VAR_9)
{
 struct snp_softc *VAR_10;
 struct tty *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2((void **)&VAR_10);
 if (VAR_12 != 0)
  return (VAR_12);

 switch (VAR_6) {
 case 128:

  FUNC_0();
  if (VAR_10->snp_tty != ((void*)0)) {
   FUNC_1();
   return (VAR_0);
  }



  VAR_12 = FUNC_6(&VAR_10->snp_tty, VAR_9->td_proc,
      *(int *)VAR_7, &VAR_4, VAR_10);
  FUNC_1();
  if (VAR_12 != 0)
   return (VAR_12);


  VAR_11 = VAR_10->snp_tty;
  FUNC_3(VAR_11);
  FUNC_8(&VAR_10->snp_outq, VAR_11, VAR_3);
  FUNC_5(VAR_11);

  return (0);
 case 130:

  if (VAR_10->snp_tty == ((void*)0))
   *(dev_t *)VAR_7 = VAR_2;
  else
   *(dev_t *)VAR_7 = FUNC_4(VAR_10->snp_tty);
  return (0);
 case 129:
  if (VAR_10->snp_tty == ((void*)0))
   *(uint32_t *)VAR_7 = -1;
  else
   *(uint32_t *)VAR_7 = FUNC_4(VAR_10->snp_tty);
  return (0);
 case 131:
  VAR_11 = VAR_10->snp_tty;
  if (VAR_11 != ((void*)0)) {
   FUNC_3(VAR_11);
   *(int *)VAR_7 = FUNC_7(&VAR_10->snp_outq);
   FUNC_5(VAR_11);
  } else {
   *(int *)VAR_7 = 0;
  }
  return (0);
 default:
  return (VAR_1);
 }
}
