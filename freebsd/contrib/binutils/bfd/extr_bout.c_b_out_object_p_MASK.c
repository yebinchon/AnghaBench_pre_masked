
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_exec {int a_info; } ;
struct external_exec {int e_info; } ;
typedef int bfd_target ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct internal_exec) ;
 int const* FUNC_2 (int *,struct internal_exec*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (void*,scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct external_exec*,struct internal_exec*) ;

__attribute__((used)) static const bfd_target *
FUNC_7 (bfd *VAR_4)
{
  struct internal_exec VAR_5;
  struct external_exec VAR_6;
  bfd_size_type VAR_7 = VAR_0;

  if (FUNC_3 ((void *) &VAR_6, VAR_7, VAR_4) != VAR_7)
    {
      if (FUNC_4 () != VAR_2)
 FUNC_5 (VAR_3);
      return 0;
    }

  VAR_5.a_info = FUNC_0 (VAR_4, VAR_6.e_info);

  if (FUNC_1 (VAR_5))
    {
      FUNC_5 (VAR_3);
      return 0;
    }

  FUNC_6 (VAR_4, &VAR_6, &VAR_5);
  return FUNC_2 (VAR_4, &VAR_5, VAR_1);
}
