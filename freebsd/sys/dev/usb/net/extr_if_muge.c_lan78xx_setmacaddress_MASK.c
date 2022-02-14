
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct muge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int FUNC_1 (struct muge_softc*,int ,int) ;
 int FUNC_2 (struct muge_softc*,char*,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static int
FUNC_3(struct muge_softc *VAR_3, const uint8_t *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 FUNC_2(VAR_3,
     "setting mac address to %02x:%02x:%02x:%02x:%02x:%02x\n",
     VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5]);

 FUNC_0(VAR_3, VAR_2);

 VAR_6 = (VAR_4[3] << 24) | (VAR_4[2] << 16) | (VAR_4[1] << 8) | VAR_4[0];
 if ((VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_6)) != 0)
  goto done;

 VAR_6 = (VAR_4[5] << 8) | VAR_4[4];
 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_6);

done:
 return (VAR_5);
}
