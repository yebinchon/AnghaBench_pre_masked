
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mapping {struct map_value* values; } ;
struct map_value {int dummy; } ;
struct TYPE_4__ {int num_builtins; void* attrs; int apply_macro; int uses_macro_p; int find_builtin; void* macros; } ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_2 (char) ;
 char FUNC_3 (char) ;
 struct map_value** FUNC_4 (struct map_value**,int,char*) ;
 struct mapping* FUNC_5 (TYPE_1__*,void*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_6 (int,int ,int ,int ) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  struct mapping *VAR_12, *VAR_13;
  struct map_value **VAR_14, **VAR_15;
  char *VAR_16, *VAR_17;
  int VAR_18;

  VAR_9.attrs = FUNC_6 (13, VAR_5, VAR_6, 0);
  VAR_9.macros = FUNC_6 (13, VAR_5, VAR_6, 0);
  VAR_9.num_builtins = VAR_0;
  VAR_9.find_builtin = VAR_8;
  VAR_9.uses_macro_p = VAR_11;
  VAR_9.apply_macro = VAR_3;

  VAR_4.attrs = FUNC_6 (13, VAR_5, VAR_6, 0);
  VAR_4.macros = FUNC_6 (13, VAR_5, VAR_6, 0);
  VAR_4.num_builtins = VAR_1;
  VAR_4.find_builtin = VAR_7;
  VAR_4.uses_macro_p = VAR_10;
  VAR_4.apply_macro = VAR_2;

  VAR_12 = FUNC_5 (&VAR_9, VAR_9.attrs, "mode", 0);
  VAR_13 = FUNC_5 (&VAR_9, VAR_9.attrs, "MODE", 0);
  VAR_14 = &VAR_12->values;
  VAR_15 = &VAR_13->values;
  for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++)
    {
      VAR_16 = FUNC_7 (FUNC_0 (VAR_18));
      for (VAR_17 = VAR_16; *VAR_17 != 0; VAR_17++)
 *VAR_17 = FUNC_2 (*VAR_17);

      VAR_15 = FUNC_4 (VAR_15, VAR_18, FUNC_0 (VAR_18));
      VAR_14 = FUNC_4 (VAR_14, VAR_18, VAR_16);
    }

  VAR_12 = FUNC_5 (&VAR_4, VAR_4.attrs, "code", 0);
  VAR_13 = FUNC_5 (&VAR_4, VAR_4.attrs, "CODE", 0);
  VAR_14 = &VAR_12->values;
  VAR_15 = &VAR_13->values;
  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
    {
      VAR_16 = FUNC_7 (FUNC_1 (VAR_18));
      for (VAR_17 = VAR_16; *VAR_17 != 0; VAR_17++)
 *VAR_17 = FUNC_3 (*VAR_17);

      VAR_14 = FUNC_4 (VAR_14, VAR_18, FUNC_1 (VAR_18));
      VAR_15 = FUNC_4 (VAR_15, VAR_18, VAR_16);
    }
}
