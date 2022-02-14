
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct tty {int dummy; } ;
struct snp_softc {struct tty* snp_tty; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,char*,int) ;
 int FUNC_7 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct snp_softc *VAR_6;
 struct tty *VAR_7;
 int VAR_8, VAR_9;
 char VAR_10[VAR_2];

 VAR_8 = FUNC_0((void **)&VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_7 = VAR_6->snp_tty;
 if (VAR_7 == ((void*)0) || FUNC_2(VAR_7))
  return (VAR_0);

 while (VAR_4->uio_resid > 0) {

  VAR_9 = FUNC_1(VAR_4->uio_resid, sizeof VAR_10);
  VAR_8 = FUNC_7(VAR_10, VAR_9, VAR_4);
  if (VAR_8 != 0)
   return (VAR_8);

  FUNC_3(VAR_7);


  if (FUNC_2(VAR_7)) {
   FUNC_4(VAR_7);
   return (VAR_1);
  }






  FUNC_6(VAR_7, VAR_10, VAR_9);
  FUNC_5(VAR_7);

  FUNC_4(VAR_7);
 }

 return (0);
}
