
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct bktr_softc {int vbi_select; int vbisize; } ;
typedef struct bktr_softc* bktr_ptr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bktr_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bktr_softc*) ;

 int VAR_3 ;
 int FUNC_7 (struct cdev*) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int VAR_4 ;
 int FUNC_9 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_10( struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8;
 bktr_ptr_t VAR_9;
 int VAR_10 = 0;
 FUNC_0(VAR_4);

 VAR_8 = FUNC_5(FUNC_7(VAR_5));


 VAR_9 = (struct bktr_softc*)FUNC_8(VAR_3, VAR_8);
 if (VAR_9 == ((void*)0)) {

  return (VAR_0);
 }

 FUNC_4(VAR_9);
 FUNC_1(VAR_4);

 if (VAR_6 & (VAR_1 | VAR_2)) {

  switch ( FUNC_3( FUNC_7(VAR_5) ) ) {
  case 128:
   if(VAR_9->vbisize == 0)
    FUNC_9(VAR_7, &VAR_9->vbi_select);
   else
    VAR_10 |= VAR_6 & (VAR_1 | VAR_2);
   break;
  }
 }

 FUNC_2(VAR_4);
 FUNC_6(VAR_9);

 return (VAR_10);
}
