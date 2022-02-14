
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ filename; } ;
typedef TYPE_1__ bfd ;


 int FUNC_0 (TYPE_1__*,int ,int ,int *,int *) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_0)
{
  unsigned int VAR_1 = FUNC_1 (VAR_0->filename);


  if (VAR_1 > 40)
    VAR_1 = 40;

  return FUNC_0 (VAR_0, 0, (bfd_vma) 0,
       (bfd_byte *) VAR_0->filename,
       (bfd_byte *) VAR_0->filename + VAR_1);
}
