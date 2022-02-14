
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_vars {int dummy; } ;
struct elink_params {int* mac_addr; scalar_t__ port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct bxe_softc*,int,int*,int) ;
 int FUNC_3 (struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static elink_status_t FUNC_4(struct elink_params *VAR_13,
         struct elink_vars *VAR_14,
         uint8_t VAR_15)
{
 struct bxe_softc *VAR_16 = VAR_13->sc;
 uint8_t VAR_17 = VAR_13->port;
 uint32_t VAR_18 = VAR_17 ? VAR_12 :
          VAR_11;
 uint32_t VAR_19[2];
 uint32_t VAR_20;

 FUNC_1(VAR_16, "Enabling BigMAC1\n");


 VAR_19[0] = 0x3c;
 VAR_19[1] = 0;
 FUNC_2(VAR_16, VAR_18 + VAR_1,
      VAR_19, 2);


 VAR_19[0] = ((VAR_13->mac_addr[2] << 24) |
         (VAR_13->mac_addr[3] << 16) |
         (VAR_13->mac_addr[4] << 8) |
   VAR_13->mac_addr[5]);
 VAR_19[1] = ((VAR_13->mac_addr[0] << 8) |
   VAR_13->mac_addr[1]);
 FUNC_2(VAR_16, VAR_18 + VAR_7, VAR_19, 2);


 VAR_20 = 0x3;
 if (VAR_15) {
  VAR_20 |= 0x4;
  FUNC_1(VAR_16, "enable bmac loopback\n");
 }
 VAR_19[0] = VAR_20;
 VAR_19[1] = 0;
 FUNC_2(VAR_16, VAR_18 + VAR_0, VAR_19, 2);


 VAR_19[0] = VAR_8 + VAR_9;
 VAR_19[1] = 0;
 FUNC_2(VAR_16, VAR_18 + VAR_4, VAR_19, 2);

 FUNC_3(VAR_13, VAR_14);


 VAR_19[0] = VAR_8 + VAR_9;
 VAR_19[1] = 0;
 FUNC_2(VAR_16, VAR_18 + VAR_5, VAR_19, 2);


 VAR_19[0] = VAR_8 + VAR_9;
 VAR_19[1] = 0;
 FUNC_2(VAR_16, VAR_18 + VAR_2, VAR_19, 2);


 VAR_19[0] = 0x1000200;
 VAR_19[1] = 0;
 FUNC_2(VAR_16, VAR_18 + VAR_3,
      VAR_19, 2);
 return VAR_10;
}
