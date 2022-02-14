
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bxe_softc*,int,int*,int) ;
 int FUNC_3 (struct elink_params*,struct elink_vars*,scalar_t__) ;

__attribute__((used)) static elink_status_t FUNC_4(struct elink_params *VAR_12,
         struct elink_vars *VAR_13,
         uint8_t VAR_14)
{
 struct bxe_softc *VAR_15 = VAR_12->sc;
 uint8_t VAR_16 = VAR_12->port;
 uint32_t VAR_17 = VAR_16 ? VAR_11 :
          VAR_10;
 uint32_t VAR_18[2];

 FUNC_1(VAR_15, "Enabling BigMAC2\n");

 VAR_18[0] = 0;
 VAR_18[1] = 0;
 FUNC_2(VAR_15, VAR_17 + VAR_0, VAR_18, 2);
 FUNC_0(30);


 VAR_18[0] = 0x3c;
 VAR_18[1] = 0;
 FUNC_2(VAR_15, VAR_17 + VAR_1,
      VAR_18, 2);

 FUNC_0(30);


 VAR_18[0] = ((VAR_12->mac_addr[2] << 24) |
         (VAR_12->mac_addr[3] << 16) |
         (VAR_12->mac_addr[4] << 8) |
   VAR_12->mac_addr[5]);
 VAR_18[1] = ((VAR_12->mac_addr[0] << 8) |
   VAR_12->mac_addr[1]);
 FUNC_2(VAR_15, VAR_17 + VAR_6,
      VAR_18, 2);

 FUNC_0(30);


 VAR_18[0] = 0x1000200;
 VAR_18[1] = 0;
 FUNC_2(VAR_15, VAR_17 + VAR_3,
      VAR_18, 2);
 FUNC_0(30);


 VAR_18[0] = VAR_7 + VAR_8;
 VAR_18[1] = 0;
 FUNC_2(VAR_15, VAR_17 + VAR_4, VAR_18, 2);
 FUNC_0(30);


 VAR_18[0] = VAR_7 + VAR_8;
 VAR_18[1] = 0;
 FUNC_2(VAR_15, VAR_17 + VAR_5, VAR_18, 2);
 FUNC_0(30);

 VAR_18[0] = VAR_7 + VAR_8 - 2;
 VAR_18[1] = 0;
 FUNC_2(VAR_15, VAR_17 + VAR_2, VAR_18, 2);
 FUNC_0(30);
 FUNC_3(VAR_12, VAR_13, VAR_14);

 return VAR_9;
}
