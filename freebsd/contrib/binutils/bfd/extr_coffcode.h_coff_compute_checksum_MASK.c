
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,unsigned int*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_2 (bfd *VAR_2)
{
  bfd_boolean VAR_3;
  file_ptr VAR_4;
  unsigned int VAR_5;
  unsigned int VAR_6;

  VAR_6 = 0;
  VAR_1 = 0;
  VAR_4 = (file_ptr) 0;

  do
    {
      if (FUNC_0 (VAR_2, VAR_4, VAR_0) != 0)
 return 0;

      VAR_3 = FUNC_1 (VAR_2, &VAR_5);
      VAR_6 += VAR_5;
      VAR_6 = 0xffff & (VAR_6 + (VAR_6 >> 0x10));
      VAR_4 += 2;
    }
  while (VAR_3);

  return (0xffff & (VAR_6 + (VAR_6 >> 0x10)));
}
