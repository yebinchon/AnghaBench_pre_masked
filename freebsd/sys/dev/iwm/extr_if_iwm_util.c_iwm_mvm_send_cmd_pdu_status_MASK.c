
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct iwm_softc {int dummy; } ;
struct iwm_host_cmd {int data; int len; int id; } ;


 int FUNC_0 (struct iwm_softc*,struct iwm_host_cmd*,int *) ;

int
FUNC_1(struct iwm_softc *VAR_0, uint32_t VAR_1,
 uint16_t VAR_2, const void *VAR_3, uint32_t *VAR_4)
{
 struct iwm_host_cmd VAR_5 = {
  .id = VAR_1,
  .len = VAR_2, 
  .data = VAR_3, 
 };

 return FUNC_0(VAR_0, &VAR_5, VAR_4);
}
