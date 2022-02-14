
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {int base_type; void* scale; void* mask; } ;
struct TYPE_6__ {scalar_t__ var_state; TYPE_1__ var; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;
typedef int bhnd_nvram_type ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 void* VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(bhnd_sprom_opcode_state *VAR_5, bhnd_nvram_type VAR_6)
{
 bhnd_nvram_type VAR_7;
 size_t VAR_8;
 uint32_t VAR_9;


 if (VAR_5->var_state != VAR_1) {
  FUNC_0(VAR_5, "type set outside variable definition\n");
  return (VAR_0);
 }


 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 == 0) {
  FUNC_0(VAR_5, "unsupported variable-width type: %d\n",
      VAR_6);
  return (VAR_0);
 } else if (VAR_8 > VAR_3) {
  FUNC_0(VAR_5, "invalid type width %zu for type: %d\n",
      VAR_8, VAR_6);
  return (VAR_0);
 }


 VAR_7 = FUNC_1(VAR_6);
 switch (VAR_7) {
 case 128:
 case 132:
 case 135:
  VAR_9 = VAR_4;
  break;
 case 130:
 case 134:
  VAR_9 = VAR_2;
  break;
 case 129:
 case 133:
  VAR_9 = VAR_3;
  break;
 case 131:

 default:
  FUNC_0(VAR_5, "unsupported type: %d\n", VAR_6);
  return (VAR_0);
 }


 VAR_5->var.base_type = VAR_7;
 VAR_5->var.mask = VAR_9;
 VAR_5->var.scale = (uint32_t)VAR_8;

 return (0);
}
