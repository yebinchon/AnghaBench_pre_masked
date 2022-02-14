
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct bktr_softc {scalar_t__ bigbuf; } ;
typedef scalar_t__ ioctl_cmd_t ;
typedef int caddr_t ;
typedef struct bktr_softc* bktr_ptr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;

 int VAR_6 ;
 int FUNC_2 (struct cdev*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct bktr_softc*,int,scalar_t__,int ,struct thread*) ;
 int FUNC_5 (struct bktr_softc*,int,scalar_t__,int ,struct thread*) ;

__attribute__((used)) static int
FUNC_6( struct cdev *VAR_7, ioctl_cmd_t VAR_8, caddr_t VAR_9, int VAR_10, struct thread *VAR_11 )
{
 bktr_ptr_t VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(FUNC_2(VAR_7));


 VAR_12 = (struct bktr_softc*)FUNC_3(VAR_6, VAR_13);
 if (VAR_12 == ((void*)0)) {

  return (VAR_5);
 }







 if (VAR_12->bigbuf == 0)
  return( VAR_4 );


 switch ( FUNC_0( FUNC_2(VAR_7) ) ) {
 case 128:
  return( FUNC_5( VAR_12, VAR_13, VAR_8, VAR_9, VAR_11 ) );
 case 129:
  return( FUNC_4( VAR_12, VAR_13, VAR_8, VAR_9, VAR_11 ) );
 }

 return( VAR_5 );
}
