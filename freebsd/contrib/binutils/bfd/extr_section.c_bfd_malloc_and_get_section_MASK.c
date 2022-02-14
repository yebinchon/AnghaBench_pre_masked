
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {scalar_t__ rawsize; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int *,int ,scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;

bfd_boolean
FUNC_2 (bfd *VAR_2, sec_ptr VAR_3, bfd_byte **VAR_4)
{
  bfd_size_type VAR_5 = VAR_3->rawsize ? VAR_3->rawsize : VAR_3->size;
  bfd_byte *VAR_6 = ((void*)0);

  *VAR_4 = VAR_6;
  if (VAR_5 == 0)
    return VAR_1;

  VAR_6 = FUNC_1 (VAR_3->rawsize > VAR_3->size ? VAR_3->rawsize : VAR_3->size);
  if (VAR_6 == ((void*)0))
    return VAR_0;
  *VAR_4 = VAR_6;

  return FUNC_0 (VAR_2, VAR_3, VAR_6, 0, VAR_5);
}
