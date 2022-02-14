
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,void*,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_4,
        asection *VAR_5,
        void * VAR_6,
        file_ptr VAR_7,
        bfd_size_type VAR_8)
{
  if (VAR_5->flags & (VAR_2 | VAR_1))
    {
      FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_3);
      return VAR_3;
    }

  return VAR_0;
}
