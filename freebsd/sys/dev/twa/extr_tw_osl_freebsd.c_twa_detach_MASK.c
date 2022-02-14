
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {scalar_t__ open; } ;
typedef int device_t ;
typedef scalar_t__ TW_INT32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct twa_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,struct twa_softc*,char*) ;
 int FUNC_2 (struct twa_softc*) ;
 int FUNC_3 (struct twa_softc*,char*,int ,int ,int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static TW_INT32
FUNC_5(device_t VAR_3)
{
 struct twa_softc *VAR_4 = FUNC_0(VAR_3);
 TW_INT32 VAR_5;

 FUNC_1(3, VAR_4, "entered");

 VAR_5 = VAR_0;
 if (VAR_4->open) {
  FUNC_3(VAR_4, "error = %d",
   VAR_2,
   VAR_1,
   0x2014,
   "Device open",
   VAR_5);
  goto out;
 }


 if ((VAR_5 = FUNC_4(VAR_3)))
  goto out;


 FUNC_2(VAR_4);
 VAR_5 = 0;

out:
 return(VAR_5);
}
