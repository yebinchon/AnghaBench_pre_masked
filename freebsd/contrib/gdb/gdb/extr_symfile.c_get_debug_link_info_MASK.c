
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int obfd; } ;
typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int asection ;


 unsigned long FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__) ;

__attribute__((used)) static char *
FUNC_6 (struct objfile *VAR_0, unsigned long *VAR_1)
{
  asection *VAR_2;
  bfd_size_type VAR_3;
  unsigned long VAR_4;
  char *VAR_5;
  int VAR_6;
  unsigned char *VAR_7;

  VAR_2 = FUNC_1 (VAR_0->obfd, ".gnu_debuglink");

  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_3 = FUNC_3 (VAR_0->obfd, VAR_2);

  VAR_5 = FUNC_5 (VAR_3);
  FUNC_2 (VAR_0->obfd, VAR_2, VAR_5,
       (file_ptr)0, (bfd_size_type)VAR_3);


  VAR_6 = FUNC_4 (VAR_5) + 1;
  VAR_6 = (VAR_6 + 3) & ~3;

  VAR_4 = FUNC_0 (VAR_0->obfd, (bfd_byte *) (VAR_5 + VAR_6));

  *VAR_1 = VAR_4;
  return VAR_5;
}
