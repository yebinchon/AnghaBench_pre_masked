
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ ieee_per_section_type ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,void*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,void*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_2,
      sec_ptr VAR_3,
      void * VAR_4,
      file_ptr VAR_5,
      bfd_size_type VAR_6)
{
  ieee_per_section_type *VAR_7 = FUNC_1 (VAR_3);
  if ((VAR_3->flags & VAR_0) != 0)
    return FUNC_0 (VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
  FUNC_2 (VAR_2);
  (void) FUNC_3 ((void *) VAR_4, (void *) (VAR_7->data + VAR_5), (unsigned) VAR_6);
  return VAR_1;
}
