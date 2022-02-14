
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pbio_softc {int iomode; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct cdev*) ;
 struct pbio_softc* FUNC_2 (int) ;
 int FUNC_3 (struct pbio_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct pbio_softc *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_5);
 VAR_11 = FUNC_0(VAR_5);
 VAR_9 = FUNC_2(VAR_12);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 switch (VAR_11) {
 case 0: VAR_13 = 0x10; break;
 case 1: VAR_13 = 0x02; break;
 case 2: VAR_13 = 0x08; break;
 case 3: VAR_13 = 0x01; break;
 default: return (VAR_1);
 }
 VAR_10 = VAR_9->iomode;

 if (VAR_6 & VAR_3)

  FUNC_3(VAR_9, VAR_4, VAR_9->iomode = (VAR_10 & (~VAR_13)));
 else if (VAR_6 & VAR_2)

  FUNC_3(VAR_9, VAR_4, VAR_9->iomode = (VAR_10 | VAR_13));
 else
  return (VAR_0);

 return (0);
}
