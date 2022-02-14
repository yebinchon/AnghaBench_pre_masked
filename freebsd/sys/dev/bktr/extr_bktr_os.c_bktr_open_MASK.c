
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct bktr_softc {int flags; int bt848_card; int bt848_tuner; int reverse_mute; int slow_msp_audio; int stereo_once; int amsound; int dolby; } ;
typedef struct bktr_softc* bktr_ptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;

 int FUNC_1 (int ) ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bktr_softc*,int ,int) ;
 int FUNC_8 (struct bktr_softc*) ;
 int FUNC_9 (struct bktr_softc*) ;
 int FUNC_10 (struct bktr_softc*) ;

__attribute__((used)) static int
FUNC_11( struct cdev *VAR_13, int VAR_14, int VAR_15, struct thread *VAR_16 )
{
 bktr_ptr_t VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_1( FUNC_2(VAR_13) );


 VAR_17 = (struct bktr_softc*)FUNC_4(VAR_5, VAR_18);
 if (VAR_17 == ((void*)0)) {

  return (VAR_2);
 }

 if (!(VAR_17->flags & VAR_4))
  return( VAR_2 );


 FUNC_5(FUNC_3(VAR_5, VAR_18));


 if (VAR_7 != -1) {
   if ((VAR_7 >> 8 == VAR_18 ) &&
      ( (VAR_7 & 0xff) < VAR_0 )) {
     if ( VAR_17->bt848_card != (VAR_7 & 0xff) ) {
       VAR_17->bt848_card = (VAR_7 & 0xff);
       FUNC_7(VAR_17, VAR_3, VAR_18);
     }
   }
 }

 if (VAR_12 != -1) {
   if ((VAR_12 >> 8 == VAR_18 ) &&
      ( (VAR_12 & 0xff) < VAR_1 )) {
     if ( VAR_17->bt848_tuner != (VAR_12 & 0xff) ) {
       VAR_17->bt848_tuner = (VAR_12 & 0xff);
       FUNC_7(VAR_17, VAR_3, VAR_18);
     }
   }
 }

 if (VAR_9 != -1) {
   if ((VAR_9 >> 8) == VAR_18 ) {
     VAR_17->reverse_mute = VAR_9 & 0xff;
   }
 }

 if (VAR_10 != -1) {
   if ((VAR_10 >> 8) == VAR_18 ) {
       VAR_17->slow_msp_audio = (VAR_10 & 0xff);
   }
 }
 switch ( FUNC_0( FUNC_2(VAR_13) ) ) {
 case 128:
  VAR_19 = FUNC_10( VAR_17 );
  break;
 case 130:
  VAR_19 = FUNC_8( VAR_17 );
  break;
 case 129:
  VAR_19 = FUNC_9( VAR_17 );
  break;
 default:
  VAR_19 = VAR_2;
  break;
 }


 if (VAR_19 != 0)
  FUNC_6(FUNC_3(VAR_5, VAR_18));
 return( VAR_19 );
}
