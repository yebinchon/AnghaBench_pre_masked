
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int * data; } ;
struct TYPE_5__ {int flags; void* contents; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,void*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_3,
      sec_ptr VAR_4,
      const void * VAR_5,
      file_ptr VAR_6,
      bfd_size_type VAR_7)
{
  if ((VAR_4->flags & VAR_1) != 0)
    {
      if (VAR_4->contents == ((void*)0))
 {
   bfd_size_type VAR_8 = VAR_4->size;
   VAR_4->contents = FUNC_0 (VAR_3, VAR_8);
   if (VAR_4->contents == ((void*)0))
     return VAR_0;
 }


      FUNC_3 (VAR_4->contents + VAR_6, VAR_5, (size_t) VAR_7);
      return VAR_2;
    }

  if (FUNC_1 (VAR_4)->data == (bfd_byte *) ((void*)0))
    {
      if (!FUNC_2 (VAR_3))
 return VAR_0;
    }
  FUNC_3 ((void *) (FUNC_1 (VAR_4)->data + VAR_6),
   (void *) VAR_5,
   (unsigned int) VAR_7);
  return VAR_2;
}
