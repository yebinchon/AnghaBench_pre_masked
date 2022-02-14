
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union bhnd_nvram_sprom_storage {int dummy; } bhnd_nvram_sprom_storage ;
struct bhnd_nvram_vardefn {int dummy; } ;
struct bhnd_nvram_io {int dummy; } ;
typedef int bhnd_sprom_opcode_state ;
struct TYPE_4__ {size_t vid; } ;
typedef TYPE_1__ bhnd_sprom_opcode_idx_entry ;
typedef int bhnd_sprom_layout ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bhnd_nvram_vardefn* FUNC_1 (char const*) ;
 size_t FUNC_2 (struct bhnd_nvram_vardefn const*) ;
 int FUNC_3 (struct bhnd_nvram_io*,int const**) ;
 int FUNC_4 (int *,TYPE_1__*,struct bhnd_nvram_io*,union bhnd_nvram_sprom_storage*,int *) ;
 int FUNC_5 (int *,void*,size_t*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct bhnd_nvram_io *VAR_2, const char *VAR_3,
    void *VAR_4, size_t *VAR_5, bhnd_nvram_type VAR_6)
{
 const bhnd_sprom_layout *VAR_7;
 bhnd_sprom_opcode_state VAR_8;
 const struct bhnd_nvram_vardefn *VAR_9;
 size_t VAR_10;
 int VAR_11;


 if ((VAR_9 = FUNC_1(VAR_3)) == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_2(VAR_9);


 if ((VAR_11 = FUNC_3(VAR_2, &VAR_7)))
  return (VAR_11);


 if ((VAR_11 = FUNC_7(&VAR_8, VAR_7))) {
  FUNC_0("error initializing opcode state: %d\n", VAR_11);
  return (VAR_1);
 }


 while ((VAR_11 = FUNC_9(&VAR_8)) == 0) {
  bhnd_sprom_opcode_idx_entry VAR_12;
  union bhnd_nvram_sprom_storage VAR_13;
  bhnd_nvram_val VAR_14;


  if ((VAR_11 = FUNC_8(&VAR_8, &VAR_12)))
   return (VAR_11);


  if (VAR_12.vid != VAR_10)
   continue;


  VAR_11 = FUNC_4(&VAR_8, &VAR_12, VAR_2, &VAR_13,
      &VAR_14);
  if (VAR_11)
   return (VAR_11);


  VAR_11 = FUNC_5(&VAR_14, VAR_4, VAR_5, VAR_6);


  FUNC_6(&VAR_14);
  return (VAR_11);
 }


 if (VAR_11 == VAR_0)
  return (VAR_0);


 return (VAR_11);
}
