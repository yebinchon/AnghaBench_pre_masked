
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_vardefn {int flags; } ;
struct bhnd_nvram_sprom {int state; } ;
struct bhnd_nvram_data {int dummy; } ;
struct TYPE_3__ {int vid; } ;
typedef TYPE_1__ bhnd_sprom_opcode_idx_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bhnd_nvram_vardefn* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int *,char const*) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_nvram_data *VAR_3, const char *VAR_4)
{
 struct bhnd_nvram_sprom *VAR_5;
 const struct bhnd_nvram_vardefn *VAR_6;
 bhnd_sprom_opcode_idx_entry *VAR_7;

 VAR_5 = (struct bhnd_nvram_sprom *)VAR_3;


 if (FUNC_2(VAR_4))
  return (VAR_1);


 if ((VAR_7 = FUNC_3(&VAR_5->state, VAR_4)) == ((void*)0))
  return (VAR_2);

 VAR_6 = FUNC_1(VAR_7->vid);
 FUNC_0(VAR_6 != ((void*)0), ("missing variable definition"));





 if (!(VAR_6->flags & VAR_0))
  return (VAR_1);

 return (0);
}
