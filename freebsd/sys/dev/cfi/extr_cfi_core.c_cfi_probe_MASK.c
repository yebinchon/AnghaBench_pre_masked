
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cfi_softc {int sc_width; int sc_cmdset; unsigned int sc_size; int * sc_res; scalar_t__ sc_rid; int sc_handle; int sc_tag; int sc_dev; } ;
typedef int device_t ;
typedef int desc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct cfi_softc*,scalar_t__) ;
 struct cfi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;

int
FUNC_9(device_t VAR_8)
{
 char VAR_9[80];
 struct cfi_softc *VAR_10;
 char *VAR_11;
 int VAR_12;
 uint16_t VAR_13, VAR_14;

 VAR_10 = FUNC_4(VAR_8);
 VAR_10->sc_dev = VAR_8;

 VAR_10->sc_rid = 0;
 VAR_10->sc_res = FUNC_0(VAR_8, VAR_7, &VAR_10->sc_rid,
     VAR_6);
 if (VAR_10->sc_res == ((void*)0))
  return (VAR_5);

 VAR_10->sc_tag = FUNC_7(VAR_10->sc_res);
 VAR_10->sc_handle = FUNC_6(VAR_10->sc_res);

 if (VAR_10->sc_width == 0) {
  VAR_10->sc_width = 1;
  while (VAR_10->sc_width <= 4) {
   if (FUNC_3(VAR_10, VAR_0) == 'Q')
    break;
   VAR_10->sc_width <<= 1;
  }
 } else if (FUNC_3(VAR_10, VAR_0) != 'Q') {
  VAR_12 = VAR_5;
  goto out;
 }
 if (VAR_10->sc_width > 4) {
  VAR_12 = VAR_5;
  goto out;
 }


 if (FUNC_3(VAR_10, VAR_0 + 1) != 'R' ||
     FUNC_3(VAR_10, VAR_0 + 2) != 'Y') {
  VAR_12 = VAR_5;
  goto out;
 }


 VAR_14 = FUNC_3(VAR_10, VAR_3) |
     (FUNC_3(VAR_10, VAR_3 + 1) << 8);

 VAR_10->sc_cmdset = VAR_14;

 switch (VAR_14) {
 case 133:
 case 132:
  VAR_11 = "AMD/Fujitsu";
  break;
 case 131:
  VAR_11 = "Intel/Sharp";
  break;
 case 130:
  VAR_11 = "Intel";
  break;
 case 129:
 case 128:
  VAR_11 = "Mitsubishi";
  break;
 default:
  VAR_11 = "Unknown vendor";
  break;
 }


 VAR_10->sc_size = 1U << FUNC_3(VAR_10, VAR_2);


 VAR_13 = FUNC_3(VAR_10, VAR_1) |
     (FUNC_3(VAR_10, VAR_1 + 1) << 8);






 VAR_13++;

 VAR_12 = (VAR_13 & VAR_10->sc_width) ? 0 : VAR_4;
 if (VAR_12)
  goto out;

 FUNC_8(VAR_9, sizeof(VAR_9), "%s - %s", VAR_11,
     FUNC_2(VAR_10->sc_size));
 FUNC_5(VAR_8, VAR_9);

 out:
 FUNC_1(VAR_8, VAR_7, VAR_10->sc_rid, VAR_10->sc_res);
 return (VAR_12);
}
