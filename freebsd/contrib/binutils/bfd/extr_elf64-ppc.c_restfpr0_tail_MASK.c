
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int *) ;
 int * FUNC_1 (int *,int *,int) ;

__attribute__((used)) static bfd_byte *
FUNC_2 (bfd *VAR_3, bfd_byte *VAR_4, int VAR_5)
{
  FUNC_0 (VAR_3, VAR_1 + 16, VAR_4);
  VAR_4 = VAR_4 + 4;
  VAR_4 = FUNC_1 (VAR_3, VAR_4, VAR_5);
  FUNC_0 (VAR_3, VAR_2, VAR_4);
  VAR_4 = VAR_4 + 4;
  if (VAR_5 == 29)
    {
      VAR_4 = FUNC_1 (VAR_3, VAR_4, 30);
      VAR_4 = FUNC_1 (VAR_3, VAR_4, 31);
    }
  FUNC_0 (VAR_3, VAR_0, VAR_4);
  return VAR_4 + 4;
}
