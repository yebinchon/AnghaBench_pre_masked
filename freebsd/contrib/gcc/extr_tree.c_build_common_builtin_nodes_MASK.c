
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
struct TYPE_3__ {int * (* type_for_mode ) (int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* FUNC_0 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char FUNC_1 (char const) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int ** VAR_25 ;
 char** VAR_26 ;
 char* FUNC_4 (char*,char*,char*,int *) ;
 int * VAR_27 ;
 int * VAR_28 ;
 TYPE_2__ VAR_29 ;
 int FUNC_5 (char*,int *,int,char*,int) ;
 int * VAR_30 ;
 int * VAR_31 ;
 int * FUNC_6 (int,int ) ;
 int * FUNC_7 (int ,int *,int *) ;
 int * VAR_32 ;
 int * VAR_33 ;

void
FUNC_8 (void)
{
  tree VAR_34, VAR_35;

  if (VAR_25[VAR_6] == ((void*)0)
      || VAR_25[VAR_7] == ((void*)0))
    {
      VAR_34 = FUNC_7 (VAR_24, VAR_31, VAR_32);
      VAR_34 = FUNC_7 (VAR_24, VAR_27, VAR_34);
      VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_34);
      VAR_35 = FUNC_3 (VAR_30, VAR_34);

      if (VAR_25[VAR_6] == ((void*)0))
 FUNC_5 ("__builtin_memcpy", VAR_35, VAR_6,
         "memcpy", VAR_20);
      if (VAR_25[VAR_7] == ((void*)0))
 FUNC_5 ("__builtin_memmove", VAR_35, VAR_7,
         "memmove", VAR_20);
    }

  if (VAR_25[VAR_5] == ((void*)0))
    {
      VAR_34 = FUNC_7 (VAR_24, VAR_31, VAR_32);
      VAR_34 = FUNC_7 (VAR_24, VAR_27, VAR_34);
      VAR_34 = FUNC_7 (VAR_24, VAR_27, VAR_34);
      VAR_35 = FUNC_3 (VAR_28, VAR_34);
      FUNC_5 ("__builtin_memcmp", VAR_35, VAR_5,
       "memcmp", VAR_21 | VAR_20);
    }

  if (VAR_25[VAR_8] == ((void*)0))
    {
      VAR_34 = FUNC_7 (VAR_24, VAR_31, VAR_32);
      VAR_34 = FUNC_7 (VAR_24, VAR_28, VAR_34);
      VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_34);
      VAR_35 = FUNC_3 (VAR_30, VAR_34);
      FUNC_5 ("__builtin_memset", VAR_35, VAR_8,
       "memset", VAR_20);
    }

  if (VAR_25[VAR_1] == ((void*)0))
    {
      VAR_34 = FUNC_7 (VAR_24, VAR_31, VAR_32);
      VAR_35 = FUNC_3 (VAR_30, VAR_34);
      FUNC_5 ("__builtin_alloca", VAR_35, VAR_1,
       "alloca", VAR_20 | VAR_18);
    }

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_34);
  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_34);
  VAR_35 = FUNC_3 (VAR_33, VAR_34);
  FUNC_5 ("__builtin_init_trampoline", VAR_35,
   VAR_4,
   "__builtin_init_trampoline", VAR_20);

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_35 = FUNC_3 (VAR_30, VAR_34);
  FUNC_5 ("__builtin_adjust_trampoline", VAR_35,
   VAR_0,
   "__builtin_adjust_trampoline",
   VAR_17 | VAR_20);

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_34);
  VAR_35 = FUNC_3 (VAR_33, VAR_34);
  FUNC_5 ("__builtin_nonlocal_goto", VAR_35,
   VAR_9,
   "__builtin_nonlocal_goto",
   VAR_19 | VAR_20);

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_34);
  VAR_35 = FUNC_3 (VAR_33, VAR_34);
  FUNC_5 ("__builtin_setjmp_setup", VAR_35,
   VAR_14,
   "__builtin_setjmp_setup", VAR_20);

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_35 = FUNC_3 (VAR_30, VAR_34);
  FUNC_5 ("__builtin_setjmp_dispatcher", VAR_35,
   VAR_12,
   "__builtin_setjmp_dispatcher",
   VAR_21 | VAR_20);

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_35 = FUNC_3 (VAR_33, VAR_34);
  FUNC_5 ("__builtin_setjmp_receiver", VAR_35,
   VAR_13,
   "__builtin_setjmp_receiver", VAR_20);

  VAR_35 = FUNC_3 (VAR_30, VAR_32);
  FUNC_5 ("__builtin_stack_save", VAR_35, VAR_16,
   "__builtin_stack_save", VAR_20);

  VAR_34 = FUNC_7 (VAR_24, VAR_30, VAR_32);
  VAR_35 = FUNC_3 (VAR_33, VAR_34);
  FUNC_5 ("__builtin_stack_restore", VAR_35,
   VAR_15,
   "__builtin_stack_restore", VAR_20);

  VAR_35 = FUNC_3 (VAR_33, VAR_32);
  FUNC_5 ("__builtin_profile_func_enter", VAR_35,
   VAR_10, "profile_func_enter", 0);
  FUNC_5 ("__builtin_profile_func_exit", VAR_35,
   VAR_11, "profile_func_exit", 0);





  {
    enum machine_mode VAR_36;

    for (VAR_36 = VAR_23; VAR_36 <= VAR_22; ++VAR_36)
      {
 char VAR_37[4], *VAR_38;
 const char *VAR_39;
 enum built_in_function VAR_40, VAR_41;
 tree VAR_42, VAR_43;

 VAR_42 = VAR_29.types.type_for_mode (VAR_36, 0);
 if (VAR_42 == ((void*)0))
   continue;
 VAR_43 = FUNC_2 (VAR_42);

 VAR_34 = FUNC_7 (VAR_24, VAR_43, VAR_32);
 VAR_34 = FUNC_7 (VAR_24, VAR_43, VAR_34);
 VAR_34 = FUNC_7 (VAR_24, VAR_43, VAR_34);
 VAR_34 = FUNC_7 (VAR_24, VAR_43, VAR_34);
 VAR_35 = FUNC_3 (VAR_42, VAR_34);

        VAR_40 = VAR_3 + VAR_36 - VAR_23;
        VAR_41 = VAR_2 + VAR_36 - VAR_23;

        for (VAR_39 = FUNC_0 (VAR_36), VAR_38 = VAR_37; *VAR_39; VAR_39++, VAR_38++)
   *VAR_38 = FUNC_1 (*VAR_39);
 *VAR_38 = '\0';

 VAR_26[VAR_40] = FUNC_4 ("__mul", VAR_37, "3", ((void*)0));
        FUNC_5 (VAR_26[VAR_40], VAR_35, VAR_40,
         VAR_26[VAR_40], VAR_17 | VAR_20);

 VAR_26[VAR_41] = FUNC_4 ("__div", VAR_37, "3", ((void*)0));
        FUNC_5 (VAR_26[VAR_41], VAR_35, VAR_41,
         VAR_26[VAR_41], VAR_17 | VAR_20);
      }
  }
}
