
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,scalar_t__,int ,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,TYPE_1__*,int **) ;
 int FUNC_7 (int *,TYPE_1__*,int *,int ,scalar_t__) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char const*,int ) ;

bfd_boolean
FUNC_14 (bfd *VAR_5, const char *VAR_6)
{
  asection * VAR_7;
  bfd_size_type VAR_8;
  bfd_byte * VAR_9;
  char * VAR_10;
  char * VAR_11;




  VAR_7 = FUNC_5 (VAR_5, VAR_6);

  if (VAR_7 == ((void*)0))
    return VAR_2;

  VAR_8 = VAR_7->size;
  if (VAR_8 == 0)
    return VAR_0;

  if (!FUNC_6 (VAR_5, VAR_7, &VAR_9))
    goto FAIL;


  if (! FUNC_2 (VAR_5, VAR_9, VAR_8, VAR_1, & VAR_10))
    goto FAIL;


  switch (FUNC_4 (VAR_5))
    {
    default:
    case 128: VAR_11 = "unknown"; break;
    case 141: VAR_11 = "armv2"; break;
    case 140: VAR_11 = "armv2a"; break;
    case 139: VAR_11 = "armv3"; break;
    case 138: VAR_11 = "armv3M"; break;
    case 137: VAR_11 = "armv4"; break;
    case 136: VAR_11 = "armv4t"; break;
    case 135: VAR_11 = "armv5"; break;
    case 134: VAR_11 = "armv5t"; break;
    case 133: VAR_11 = "armv5te"; break;
    case 132: VAR_11 = "XScale"; break;
    case 131: VAR_11 = "ep9312"; break;
    case 130: VAR_11 = "iWMMXt"; break;
    case 129: VAR_11 = "iWMMXt2"; break;
    }

  if (FUNC_10 (VAR_10, VAR_11) != 0)
    {
      FUNC_11 ((char *) VAR_9 + (FUNC_9 (VAR_3, VAR_4)
     + ((FUNC_12 (VAR_1) + 3) & ~3)),
       VAR_11);

      if (! FUNC_7 (VAR_5, VAR_7, VAR_9,
          (file_ptr) 0, VAR_8))
 {
   FUNC_1)
     (FUNC_0("warning: unable to update contents of %s section in %s"),
      VAR_6, FUNC_3 (VAR_5));
   goto FAIL;
 }
    }

  FUNC_8 (VAR_9);
  return VAR_2;

 FAIL:
  if (VAR_9 != ((void*)0))
    FUNC_8 (VAR_9);
  return VAR_0;
}
