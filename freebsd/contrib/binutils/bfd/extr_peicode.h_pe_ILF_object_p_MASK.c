
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int bfd_target ;
typedef int bfd_size_type ;
typedef scalar_t__ bfd_byte ;
struct TYPE_10__ {int const* xvec; } ;
typedef TYPE_1__ bfd ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (TYPE_1__*,scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,TYPE_1__*,...) ;
 scalar_t__* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (scalar_t__*,int,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,unsigned int,char*,char*,unsigned int,unsigned int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static const bfd_target *
FUNC_10 (bfd * VAR_9)
{
  bfd_byte VAR_10[16];
  bfd_byte * VAR_11;
  char * VAR_12;
  char * VAR_13;
  unsigned int VAR_14;
  bfd_size_type VAR_15;
  unsigned int VAR_16;
  unsigned int VAR_17;
  unsigned int VAR_18;



  if (FUNC_5 (VAR_10, (bfd_size_type) 16, VAR_9) != 16)
    return ((void*)0);

  VAR_11 = VAR_10;



  VAR_11 += 2;

  VAR_14 = FUNC_0 (VAR_9, VAR_11);
  VAR_11 += 2;


  VAR_18 = 0;

  switch (VAR_14)
    {
    case 128:
    case 145:
    case 144:
    case 140:
      break;

    case 141:



      break;

    case 143:



      break;

    case 139:



      break;

    case 133:
    case 132:
    case 134:

    case 138:
    case 137:
    case 136:



      break;

    case 131:
    case 130:



      break;

    case 142:



      break;

    case 129:
      break;

    case 135:

    default:
      FUNC_3
 (FUNC_2("%B: Unrecognised machine type (0x%x)"
    " in Import Library Format archive"),
  VAR_9, VAR_14);
      FUNC_7 (VAR_7);

      return ((void*)0);
      break;
    }

  if (VAR_18 == 0)
    {
      FUNC_3
 (FUNC_2("%B: Recognised but unhandled machine type (0x%x)"
    " in Import Library Format archive"),
  VAR_9, VAR_14);
      FUNC_7 (VAR_8);

      return ((void*)0);
    }



  VAR_11 += 4;

  VAR_15 = FUNC_1 (VAR_9, VAR_11);
  VAR_11 += 4;

  if (VAR_15 == 0)
    {
      FUNC_3
 (FUNC_2("%B: size field is zero in Import Library Format header"), VAR_9);
      FUNC_7 (VAR_7);

      return ((void*)0);
    }

  VAR_16 = FUNC_0 (VAR_9, VAR_11);
  VAR_11 += 2;

  VAR_17 = FUNC_0 (VAR_9, VAR_11);



  VAR_11 = FUNC_4 (VAR_9, VAR_15);
  if (VAR_11 == ((void*)0))
    return ((void*)0);

  if (FUNC_5 (VAR_11, VAR_15, VAR_9) != VAR_15)
    {
      FUNC_6 (VAR_9, VAR_11);
      return ((void*)0);
    }

  VAR_12 = (char *) VAR_11;
  VAR_13 = VAR_12 + FUNC_9 (VAR_12) + 1;


  if (VAR_11[VAR_15 - 1] != 0
      || (bfd_size_type) ((bfd_byte *) VAR_13 - VAR_11) >= VAR_15)
    {
      FUNC_3
 (FUNC_2("%B: string not null terminated in ILF object file."), VAR_9);
      FUNC_7 (VAR_7);
      FUNC_6 (VAR_9, VAR_11);
      return ((void*)0);
    }


  if (! FUNC_8 (VAR_9, VAR_18, VAR_12,
       VAR_13, VAR_16, VAR_17))
    {
      FUNC_6 (VAR_9, VAR_11);
      return ((void*)0);
    }

  return VAR_9->xvec;
}
