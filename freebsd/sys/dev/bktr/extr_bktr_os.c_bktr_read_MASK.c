
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct cdev {int dummy; } ;
struct bktr_softc {int dummy; } ;
typedef struct bktr_softc* bktr_ptr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int VAR_1 ;
 int FUNC_2 (struct cdev*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct bktr_softc*,struct uio*,int) ;
 int FUNC_5 (struct bktr_softc*,int,struct cdev*,struct uio*) ;

__attribute__((used)) static int
FUNC_6( struct cdev *VAR_2, struct uio *VAR_3, int VAR_4 )
{
 bktr_ptr_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_2(VAR_2));


 VAR_5 = (struct bktr_softc*)FUNC_3(VAR_1, VAR_6);
 if (VAR_5 == ((void*)0)) {

  return (VAR_0);
 }

 switch ( FUNC_0( FUNC_2(VAR_2) ) ) {
 case 128:
  return( FUNC_5( VAR_5, VAR_6, VAR_2, VAR_3 ) );
 case 129:
  return( FUNC_4( VAR_5, VAR_3, VAR_4 ) );
 }
        return( VAR_0 );
}
