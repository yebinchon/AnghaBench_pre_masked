
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int obfd; } ;
typedef int bfd_byte ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (char *VAR_3, int VAR_4, int VAR_5,
  struct objfile *VAR_6)
{
  CORE_ADDR VAR_7;

  switch (VAR_4)
    {
    case 8:
      VAR_7 = FUNC_2 (VAR_6->obfd, (bfd_byte *) VAR_3);
      break;
    case 4:
      VAR_7 = FUNC_1 (VAR_6->obfd, (bfd_byte *) VAR_3);
      break;
    case 2:
      VAR_7 = FUNC_0 (VAR_6->obfd, (bfd_byte *) VAR_3);
      break;
    case 1:
      VAR_7 = FUNC_3 (VAR_6->obfd, (bfd_byte *) VAR_3);
      break;
    default:
      FUNC_4 (&VAR_2,
   "DIE @ 0x%x \"%s\", no bfd support for %d byte data object",
   VAR_0, VAR_1, VAR_4);
      VAR_7 = 0;
      break;
    }
  return (VAR_7);
}
