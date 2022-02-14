
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ _n_offset; scalar_t__ _n_zeroes; } ;
struct TYPE_6__ {TYPE_1__ _n_n; int _n_name; } ;
struct internal_syment {TYPE_2__ _n; } ;
struct bfd_strtab_hash {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_3__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bfd_strtab_hash*,char const*,int ,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_5, struct bfd_strtab_hash *VAR_6,
       struct internal_syment *VAR_7,
       const char *VAR_8)
{
  if (FUNC_1 (VAR_8) <= VAR_3)
    {
      FUNC_2 (VAR_7->_n._n_name, VAR_8, VAR_3);
    }
  else
    {
      bfd_boolean VAR_9;
      bfd_size_type VAR_10;

      VAR_9 = VAR_4;
      if ((VAR_5->flags & VAR_0) != 0)
 VAR_9 = VAR_1;
      VAR_10 = FUNC_0 (VAR_6, VAR_8, VAR_9, VAR_1);
      if (VAR_10 == (bfd_size_type) -1)
 return VAR_1;
      VAR_7->_n._n_n._n_zeroes = 0;
      VAR_7->_n._n_n._n_offset = VAR_2 + VAR_10;
    }
  return VAR_4;
}
