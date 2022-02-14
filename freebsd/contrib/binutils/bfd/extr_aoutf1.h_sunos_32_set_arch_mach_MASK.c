
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_type { ____Placeholder_machine_type } machine_type ;
typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;
typedef int bfd ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (int *,int,unsigned long) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_9, enum machine_type VAR_10)
{

  enum bfd_architecture VAR_11;
  unsigned long VAR_12;

  switch (VAR_10)
    {
    case 128:


      VAR_11 = VAR_1;
      VAR_12 = VAR_4;
      break;

    case 136:
    case 134:
      VAR_11 = VAR_1;
      VAR_12 = VAR_5;
      break;

    case 135:
    case 133:
      VAR_11 = VAR_1;
      VAR_12 = VAR_6;
      break;

    case 131:
      VAR_11 = VAR_3;
      VAR_12 = 0;
      break;

    case 130:
      VAR_11 = VAR_3;
      VAR_12 = VAR_7;
      break;

    case 129:
      VAR_11 = VAR_3;
      VAR_12 = VAR_8;
      break;

    case 138:
    case 137:
      VAR_11 = VAR_0;
      VAR_12 = 0;
      break;

    case 132:
      VAR_11 = VAR_1;
      VAR_12 = 0;
      break;

    default:
      VAR_11 = VAR_2;
      VAR_12 = 0;
      break;
    }
  FUNC_0 (VAR_9, VAR_11, VAR_12);
}
