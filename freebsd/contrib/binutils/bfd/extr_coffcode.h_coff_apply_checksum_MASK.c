
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int*,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_5)
{
  unsigned int VAR_6;
  unsigned int VAR_7 = 0;

  if (FUNC_1 (VAR_5, 0x3c, VAR_1) != 0)
    return VAR_0;

  if (!FUNC_3 (VAR_5, &VAR_3))
    return VAR_0;

  if (FUNC_1 (VAR_5, VAR_3 + 0x58, VAR_1) != 0)
    return VAR_0;

  VAR_7 = 0;
  FUNC_0 (&VAR_7, (bfd_size_type) 4, VAR_5);

  if (FUNC_1 (VAR_5, VAR_3, VAR_1) != 0)
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_5);

  VAR_7 = VAR_6 + VAR_4;

  if (FUNC_1 (VAR_5, VAR_3 + 0x58, VAR_1) != 0)
    return VAR_0;

  FUNC_0 (&VAR_7, (bfd_size_type) 4, VAR_5);

  return VAR_2;
}
