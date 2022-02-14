
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct bktr_softc {int dummy; } ;
typedef struct bktr_softc* bktr_ptr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;


 int VAR_1 ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bktr_softc*) ;
 int FUNC_7 (struct bktr_softc*) ;
 int FUNC_8 (struct bktr_softc*) ;

__attribute__((used)) static int
FUNC_9( struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5 )
{
 bktr_ptr_t VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1( FUNC_2(VAR_2) );


 VAR_6 = (struct bktr_softc*)FUNC_4(VAR_1, VAR_7);
 if (VAR_6 == ((void*)0)) {

  return (VAR_0);
 }

 switch ( FUNC_0( FUNC_2(VAR_2) ) ) {
 case 128:
  VAR_8 = FUNC_8( VAR_6 );
  break;
 case 130:
  VAR_8 = FUNC_6( VAR_6 );
  break;
 case 129:
  VAR_8 = FUNC_7( VAR_6 );
  break;
 default:
  return (VAR_0);
  break;
 }

 FUNC_5(FUNC_3(VAR_1, VAR_7));
 return( VAR_8 );
}
