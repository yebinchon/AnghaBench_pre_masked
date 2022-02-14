
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct targ_softc {int read_select; int periph; int abort_queue; int user_ccb_queue; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct targ_softc *VAR_7;
 int VAR_8;

 FUNC_3((void **)&VAR_7);


 VAR_8 = VAR_5 & (VAR_1 | VAR_3);
 if ((VAR_5 & (VAR_0 | VAR_2)) != 0) {

  FUNC_1(VAR_7->periph);
  if (!FUNC_0(&VAR_7->user_ccb_queue) ||
      !FUNC_0(&VAR_7->abort_queue)) {
   VAR_8 |= VAR_5 & (VAR_0 | VAR_2);
  }
  FUNC_2(VAR_7->periph);

  if (VAR_8 == 0)
   FUNC_4(VAR_6, &VAR_7->read_select);
 }

 return (VAR_8);
}
