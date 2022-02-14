
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** encPtr; } ;
typedef TYPE_1__ INIT_ENCODING ;
typedef int ENCODING ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;



 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int const*,int,char const*,char const*,char const**) ;

__attribute__((used)) static int
FUNC_2(const ENCODING * const *VAR_6,
         const INIT_ENCODING *VAR_7,
         int VAR_8,
         const char *VAR_9,
         const char *VAR_10,
         const char **VAR_11)
{
  const ENCODING **VAR_12;

  if (VAR_9 >= VAR_10)
    return VAR_4;
  VAR_12 = VAR_7->encPtr;
  if (VAR_9 + 1 == VAR_10) {



    if (VAR_8 != VAR_2)
      return VAR_5;



    switch (FUNC_0(VAR_7)) {
    case 128:
    case 129:
    case 130:
      return VAR_5;
    }
    switch ((unsigned char)*VAR_9) {
    case 0xFE:
    case 0xFF:
    case 0xEF:
      if (FUNC_0(VAR_7) == VAR_0
          && VAR_8 == VAR_2)
        break;

    case 0x00:
    case 0x3C:
      return VAR_5;
    }
  }
  else {
    switch (((unsigned char)VAR_9[0] << 8) | (unsigned char)VAR_9[1]) {
    case 0xFEFF:
      if (FUNC_0(VAR_7) == VAR_0
          && VAR_8 == VAR_2)
        break;
      *VAR_11 = VAR_9 + 2;
      *VAR_12 = VAR_6[130];
      return VAR_3;

    case 0x3C00:
      if ((FUNC_0(VAR_7) == 130
           || FUNC_0(VAR_7) == 128)
          && VAR_8 == VAR_2)
        break;
      *VAR_12 = VAR_6[129];
      return FUNC_1(*VAR_12, VAR_8, VAR_9, VAR_10, VAR_11);
    case 0xFFFE:
      if (FUNC_0(VAR_7) == VAR_0
          && VAR_8 == VAR_2)
        break;
      *VAR_11 = VAR_9 + 2;
      *VAR_12 = VAR_6[129];
      return VAR_3;
    case 0xEFBB:







      if (VAR_8 == VAR_2) {
        int VAR_13 = FUNC_0(VAR_7);
        if (VAR_13 == VAR_0 || VAR_13 == 130
            || VAR_13 == 129 || VAR_13 == 128)
          break;
      }
      if (VAR_9 + 2 == VAR_10)
        return VAR_5;
      if ((unsigned char)VAR_9[2] == 0xBF) {
        *VAR_11 = VAR_9 + 3;
        *VAR_12 = VAR_6[VAR_1];
        return VAR_3;
      }
      break;
    default:
      if (VAR_9[0] == '\0') {






        if (VAR_8 == VAR_2 && FUNC_0(VAR_7) == 129)
          break;
        *VAR_12 = VAR_6[130];
        return FUNC_1(*VAR_12, VAR_8, VAR_9, VAR_10, VAR_11);
      }
      else if (VAR_9[1] == '\0') {
        if (VAR_8 == VAR_2)
          break;
        *VAR_12 = VAR_6[129];
        return FUNC_1(*VAR_12, VAR_8, VAR_9, VAR_10, VAR_11);
      }
      break;
    }
  }
  *VAR_12 = VAR_6[FUNC_0(VAR_7)];
  return FUNC_1(*VAR_12, VAR_8, VAR_9, VAR_10, VAR_11);
}
