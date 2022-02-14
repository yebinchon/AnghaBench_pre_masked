
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsb_softc {int status; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rsb_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct rsb_softc*,int ) ;
 int FUNC_3 (struct rsb_softc*,int ,int) ;
 int VAR_7 ;
 struct rsb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_9)
{
 struct rsb_softc *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_4(VAR_9);

 FUNC_1(VAR_10);


 FUNC_3(VAR_10, VAR_4, VAR_2 | VAR_7);


 VAR_11 = VAR_1;
 for (VAR_12 = VAR_5; VAR_12 > 0; VAR_12--) {
  VAR_10->status |= FUNC_2(VAR_10, VAR_6);
  if ((VAR_10->status & VAR_3) != 0) {
   VAR_11 = 0;
   break;
  }
  FUNC_0((1000 * VAR_8) / VAR_5);
 }
 if (VAR_11 == 0 && (VAR_10->status & VAR_3) == 0) {
  FUNC_5(VAR_9, "transfer error, status 0x%08x\n",
      VAR_10->status);
  VAR_11 = VAR_0;
 }

 return (VAR_11);

}
