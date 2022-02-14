
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reloc_howto_type ;
typedef int bfd_boolean ;




 int * FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static reloc_howto_type *
FUNC_1 (unsigned int VAR_2, bfd_boolean VAR_3)
{
  switch (VAR_2)
    {
    case 129:
      return &VAR_0;
    case 128:
      return &VAR_1;
    default:
      return FUNC_0 (VAR_2, VAR_3);
    }
}
