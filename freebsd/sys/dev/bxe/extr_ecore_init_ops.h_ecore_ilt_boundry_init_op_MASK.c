
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ilt_client_info {int client_num; scalar_t__ end; scalar_t__ start; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;




 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*) ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_12,
          struct ilt_client_info *VAR_13,
          uint32_t VAR_14, uint8_t VAR_15)
{
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 0;





 if (FUNC_0(VAR_12)) {
  switch (VAR_13->client_num) {
  case 131:
   VAR_16 = VAR_0;
   break;
  case 130:
   VAR_16 = VAR_1;
   break;
  case 129:
   VAR_16 = VAR_2;
   break;
  case 128:
   VAR_16 = VAR_3;
   break;
  }
  FUNC_2(VAR_12, VAR_16 + FUNC_3(VAR_12)*4,
         FUNC_1((VAR_14 + VAR_13->start),
     (VAR_14 + VAR_13->end)));
 } else {
  switch (VAR_13->client_num) {
  case 131:
   VAR_16 = VAR_4;
   VAR_17 = VAR_5;
   break;
  case 130:
   VAR_16 = VAR_6;
   VAR_17 = VAR_7;
   break;
  case 129:
   VAR_16 = VAR_8;
   VAR_17 = VAR_9;
   break;
  case 128:
   VAR_16 = VAR_10;
   VAR_17 = VAR_11;
   break;
  }
  FUNC_2(VAR_12, VAR_16, (VAR_14 + VAR_13->start));
  FUNC_2(VAR_12, VAR_17, (VAR_14 + VAR_13->end));
 }
}
