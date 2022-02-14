
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bhnd_nvram_vardefn {int fmt; } ;
struct bhnd_nvram_sprom {int state; } ;
struct bhnd_nvram_data {int dummy; } ;
struct TYPE_4__ {int vid; } ;
typedef TYPE_1__ bhnd_sprom_opcode_idx_entry ;
typedef int bhnd_nvram_val ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bhnd_nvram_vardefn* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (int *,char const*) ;

__attribute__((used)) static int
FUNC_7(struct bhnd_nvram_data *VAR_3, const char *VAR_4,
    bhnd_nvram_val *VAR_5, bhnd_nvram_val **VAR_6)
{
 struct bhnd_nvram_sprom *VAR_7;
 const struct bhnd_nvram_vardefn *VAR_8;
 bhnd_sprom_opcode_idx_entry *VAR_9;
 bhnd_nvram_val *VAR_10;
 int VAR_11;

 VAR_7 = (struct bhnd_nvram_sprom *)VAR_3;


 if (FUNC_5(VAR_4))
  return (VAR_1);


 if ((VAR_9 = FUNC_6(&VAR_7->state, VAR_4)) == ((void*)0))
  return (VAR_2);

 VAR_8 = FUNC_1(VAR_9->vid);
 FUNC_0(VAR_8 != ((void*)0), ("missing variable definition"));


 VAR_11 = FUNC_3(&VAR_10, VAR_8->fmt, VAR_5,
     VAR_0);
 if (VAR_11)
  return (VAR_11);


 VAR_11 = FUNC_2(&VAR_7->state, VAR_9, VAR_10, ((void*)0));
 if (VAR_11) {
  FUNC_4(VAR_10);
  return (VAR_11);
 }



 *VAR_6 = VAR_10;
 return (0);
}
