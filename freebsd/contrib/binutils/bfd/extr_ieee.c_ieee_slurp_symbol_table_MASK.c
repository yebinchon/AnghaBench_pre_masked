
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ read_symbols; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2)
{
  if (! FUNC_0 (VAR_2)->read_symbols)
    {
      if (! FUNC_1 (VAR_2))
 return VAR_0;
      FUNC_0 (VAR_2)->read_symbols = VAR_1;
    }
  return VAR_1;
}
