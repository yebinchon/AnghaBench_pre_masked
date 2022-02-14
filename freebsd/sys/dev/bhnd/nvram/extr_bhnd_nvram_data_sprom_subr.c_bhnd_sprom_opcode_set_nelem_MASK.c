
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct bhnd_nvram_vardefn {int nelem; int type; } ;
struct TYPE_5__ {int nelem; } ;
struct TYPE_6__ {scalar_t__ var_state; TYPE_1__ var; int vid; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 struct bhnd_nvram_vardefn* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(bhnd_sprom_opcode_state *VAR_3, uint8_t VAR_4)
{
 const struct bhnd_nvram_vardefn *VAR_5;


 if (VAR_3->var_state != VAR_2) {
  FUNC_0(VAR_3, "array length set without open variable "
      "state");
  return (VAR_0);
 }


 if ((VAR_5 = FUNC_1(VAR_3->vid)) == ((void*)0)) {
  FUNC_0(VAR_3, "unknown variable ID: %zu\n", VAR_3->vid);
  return (VAR_0);
 }


 if (VAR_4 == 0) {
  FUNC_0(VAR_3, "invalid nelem: %hhu\n", VAR_4);
  return (VAR_0);
 }



 if (!FUNC_2(VAR_5->type) && VAR_4 != 1) {
  FUNC_0(VAR_3, "nelem %hhu on non-array %zu\n", VAR_4,
      VAR_3->vid);
  return (VAR_1);
 }


 if (VAR_4 > VAR_5->nelem) {
  FUNC_0(VAR_3, "nelem %hhu exceeds %zu length %hhu\n",
      VAR_4, VAR_3->vid, VAR_5->nelem);
  return (VAR_1);
 }


 VAR_3->var.nelem = VAR_4;

 return (0);
}
