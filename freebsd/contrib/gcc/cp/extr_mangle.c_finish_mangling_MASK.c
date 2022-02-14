
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int substitutions; int entity; scalar_t__ need_abi_warning; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char) ;

__attribute__((used)) static inline const char *
FUNC_4 (const bool VAR_5)
{
  if (VAR_4 && VAR_5 && VAR_0.need_abi_warning)
    FUNC_2 (VAR_1, "the mangled name of %qD will change in a future "
      "version of GCC",
      VAR_0.entity);


  FUNC_0 (VAR_3, VAR_0.substitutions, 0);


  FUNC_3 ('\0');

  return (const char *) FUNC_1 (VAR_2);
}
