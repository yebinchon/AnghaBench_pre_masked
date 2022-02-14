
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct iwm_ucode_capabilities {int enabled_api; } ;
struct iwm_ucode_api {int api_flags; int api_index; } ;
struct iwm_softc {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct iwm_softc *VAR_1, const uint8_t *VAR_2,
   struct iwm_ucode_capabilities *VAR_3)
{
 const struct iwm_ucode_api *VAR_4 = (const void *)VAR_2;
 uint32_t VAR_5 = FUNC_2(VAR_4->api_index);
 uint32_t VAR_6 = FUNC_2(VAR_4->api_flags);
 int VAR_7;

 if (VAR_5 >= FUNC_1(VAR_0, 32)) {
  FUNC_0(VAR_1->sc_dev,
      "api flags index %d larger than supported by driver\n",
      VAR_5);

  return 0;
 }

 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  if (VAR_6 & (1U << VAR_7))
   FUNC_3(VAR_3->enabled_api, VAR_7 + 32 * VAR_5);
 }

 return 0;
}
