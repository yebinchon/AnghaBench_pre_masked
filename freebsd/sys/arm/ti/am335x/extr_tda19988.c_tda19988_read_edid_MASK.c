
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tda19988_softc {scalar_t__ sc_version; int* sc_edid; int sc_edid_len; int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_1 (int*,int,int ,int ) ;
 int FUNC_2 (struct tda19988_softc*,int*,int) ;
 int FUNC_3 (struct tda19988_softc*,int ,int ) ;
 int FUNC_4 (struct tda19988_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct tda19988_softc *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;
 uint8_t *VAR_12;

 VAR_9 = 0;
 if (VAR_8->sc_version == VAR_4)
  FUNC_3(VAR_8, VAR_5, VAR_6);

 VAR_9 = FUNC_2(VAR_8, VAR_8->sc_edid, 0);
 if (VAR_9)
  goto done;

 VAR_10 = VAR_8->sc_edid[0x7e];
 if (VAR_10 > 0) {
  VAR_8->sc_edid = FUNC_1(VAR_8->sc_edid,
      VAR_0*(VAR_10+1), VAR_2, VAR_3);
  VAR_8->sc_edid_len = VAR_0*(VAR_10+1);
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {

   VAR_12 = VAR_8->sc_edid + VAR_0*(VAR_11+1);
   VAR_9 = FUNC_2(VAR_8, VAR_12, VAR_11);
   if (VAR_9)
    goto done;
  }
 }

 FUNC_0(VAR_7, VAR_8->sc_dev, VAR_1);
done:
 if (VAR_8->sc_version == VAR_4)
  FUNC_4(VAR_8, VAR_5, VAR_6);

 return (VAR_9);
}
