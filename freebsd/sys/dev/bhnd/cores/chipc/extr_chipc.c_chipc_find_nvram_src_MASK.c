
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_softc {int core; int dev; } ;
struct chipc_caps {scalar_t__ otp_size; scalar_t__ flash_type; scalar_t__ sprom; } ;
typedef int bhnd_nvram_src ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct chipc_softc*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static bhnd_nvram_src
FUNC_3(struct chipc_softc *VAR_12, struct chipc_caps *VAR_13)
{
 uint32_t VAR_14, VAR_15;





 if (FUNC_0(VAR_12, VAR_11) && VAR_13->sprom) {
  VAR_15 = FUNC_1(VAR_12->core, VAR_7);
  if (VAR_15 & VAR_8)
   return (VAR_2);
 }


 if (FUNC_0(VAR_12, VAR_10) && VAR_13->otp_size > 0) {

  if (!FUNC_0(VAR_12, VAR_9)) {
   FUNC_2(VAR_12->dev,
       "NVRAM unavailable: unsupported OTP controller.\n");
   return (VAR_3);
  }

  VAR_14 = FUNC_1(VAR_12->core, VAR_5);
  if (VAR_14 & VAR_6)
   return (VAR_1);
 }


 if (VAR_13->flash_type != VAR_4)
  return (VAR_0);


 return (VAR_3);
}
