
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int dummy; } ;
typedef int bfd_boolean ;


 int FUNC_0 (struct stab_write_handle*,long,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_0, unsigned int VAR_1)
{
  struct stab_write_handle *VAR_2 = (struct stab_write_handle *) VAR_0;
  long VAR_3;

  switch (VAR_1)
    {
    case 1:
      VAR_3 = -21;
      break;

    case 2:
      VAR_3 = -22;
      break;

    default:
    case 4:
      VAR_3 = -16;
      break;

    case 8:
      VAR_3 = -33;
      break;
    }

  return FUNC_0 (VAR_2, VAR_3, VAR_1);
}
