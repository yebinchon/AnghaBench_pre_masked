
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct bhnd_nvram_vardefn {int nelem; int type; } ;
struct TYPE_6__ {scalar_t__ var_state; size_t vid; int var; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,size_t) ;
 struct bhnd_nvram_vardefn* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static int
FUNC_6(bhnd_sprom_opcode_state *VAR_3, size_t VAR_4)
{
 const struct bhnd_nvram_vardefn *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3->var_state == VAR_1,
     ("overwrite of open variable definition"));


 if ((VAR_5 = FUNC_2(VAR_4)) == ((void*)0)) {
  FUNC_1(VAR_3, "unknown variable ID: %zu\n", VAR_4);
  return (VAR_0);
 }


 VAR_3->vid = VAR_4;
 VAR_3->var_state = VAR_2;


 FUNC_5(&VAR_3->var, 0x0, sizeof(VAR_3->var));


 if ((VAR_6 = FUNC_4(VAR_3, VAR_5->type)))
  return (VAR_6);


 if ((VAR_6 = FUNC_3(VAR_3, VAR_5->nelem)))
  return (VAR_6);

 return (0);
}
