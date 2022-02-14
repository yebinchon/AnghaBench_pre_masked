
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_3 (void)
{



  bfd_byte VAR_4 = 0;
  bfd_boolean VAR_5 = VAR_0;
  if (FUNC_1 (VAR_2, VAR_3) != 0)
    VAR_5 = FUNC_2 (VAR_2, VAR_3, &VAR_4, (file_ptr) 0,
      (bfd_size_type) 1);
  else if (FUNC_1 (VAR_2, VAR_1) != 0)
    VAR_5 = FUNC_2 (VAR_2, VAR_1, &VAR_4, (file_ptr) 0,
      (bfd_size_type) 1);

  FUNC_0 (VAR_5);
}
