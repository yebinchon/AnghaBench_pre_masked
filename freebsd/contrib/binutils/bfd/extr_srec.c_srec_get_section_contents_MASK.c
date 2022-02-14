
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ size; int * used_by_bfd; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_2,
      asection *VAR_3,
      void * VAR_4,
      file_ptr VAR_5,
      bfd_size_type VAR_6)
{
  if (VAR_3->used_by_bfd == ((void*)0))
    {
      VAR_3->used_by_bfd = FUNC_0 (VAR_2, VAR_3->size);
      if (VAR_3->used_by_bfd == ((void*)0) && VAR_3->size != 0)
 return VAR_0;

      if (! FUNC_2 (VAR_2, VAR_3, VAR_3->used_by_bfd))
 return VAR_0;
    }

  FUNC_1 (VAR_4, (bfd_byte *) VAR_3->used_by_bfd + VAR_5,
   (size_t) VAR_6);

  return VAR_1;
}
