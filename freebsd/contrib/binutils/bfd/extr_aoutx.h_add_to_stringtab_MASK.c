
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfd_strtab_hash {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bfd_strtab_hash*,char const*,int ,int ) ;

__attribute__((used)) static inline bfd_size_type
FUNC_1 (bfd *VAR_4,
    struct bfd_strtab_hash *VAR_5,
    const char *VAR_6,
    bfd_boolean VAR_7)
{
  bfd_boolean VAR_8;
  bfd_size_type VAR_9;


  if (VAR_6 == 0 || *VAR_6 == '\0')
    return 0;



  VAR_8 = VAR_3;
  if ((VAR_4->flags & VAR_0) != 0)
    VAR_8 = VAR_2;

  VAR_9 = FUNC_0 (VAR_5, VAR_6, VAR_8, VAR_7);

  if (VAR_9 != (bfd_size_type) -1)


    VAR_9 += VAR_1;

  return VAR_9;
}
