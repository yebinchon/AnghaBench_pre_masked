
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct iwm_softc {int dummy; } ;
struct iwm_host_cmd {int flags; int data; int len; int id; } ;


 int FUNC_0 (struct iwm_softc*,struct iwm_host_cmd*) ;

int
FUNC_1(struct iwm_softc *VAR_0, uint32_t VAR_1,
 uint32_t VAR_2, uint16_t VAR_3, const void *VAR_4)
{
 struct iwm_host_cmd VAR_5 = {
  .id = VAR_1,
  .len = VAR_3, 
  .data = VAR_4, 
  .flags = VAR_2,
 };

 return FUNC_0(VAR_0, &VAR_5);
}
