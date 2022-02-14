
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_2 (bfd *VAR_1, int VAR_2)
{
  unsigned char VAR_3[4];

  FUNC_1 (VAR_1, (file_ptr) VAR_2, VAR_0);
  FUNC_0 (VAR_3, (bfd_size_type) 4, VAR_1);
  return VAR_3[0] + (VAR_3[1] << 8) + (VAR_3[2] << 16) + (VAR_3[3] << 24);
}
