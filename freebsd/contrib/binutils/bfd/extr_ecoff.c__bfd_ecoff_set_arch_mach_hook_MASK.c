
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_filehdr {int f_magic; } ;
typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd_boolean ;
typedef int bfd ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

bfd_boolean
FUNC_1 (bfd *VAR_6, void * VAR_7)
{
  struct internal_filehdr *VAR_8 = VAR_7;
  enum bfd_architecture VAR_9;
  unsigned long VAR_10;

  switch (VAR_8->f_magic)
    {
    case 134:
    case 130:
    case 133:
      VAR_9 = VAR_1;
      VAR_10 = VAR_3;
      break;

    case 129:
    case 132:

      VAR_9 = VAR_1;
      VAR_10 = VAR_5;
      break;

    case 128:
    case 131:

      VAR_9 = VAR_1;
      VAR_10 = VAR_4;
      break;

    case 135:
      VAR_9 = VAR_0;
      VAR_10 = 0;
      break;

    default:
      VAR_9 = VAR_2;
      VAR_10 = 0;
      break;
    }

  return FUNC_0 (VAR_6, VAR_9, VAR_10);
}
