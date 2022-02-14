
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int minBytesPerChar; } ;
typedef TYPE_1__ ENCODING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const ENCODING *VAR_12,
                     const char *VAR_13,
                     const char *VAR_14,
                     const char **VAR_15,
                     const char **VAR_16,
                     const char **VAR_17,
                     const char **VAR_18)
{
  int VAR_19;
  char VAR_20;
  if (VAR_13 == VAR_14) {
    *VAR_15 = ((void*)0);
    return 1;
  }
  if (!FUNC_0(FUNC_1(VAR_12, VAR_13, VAR_14))) {
    *VAR_18 = VAR_13;
    return 0;
  }
  do {
    VAR_13 += VAR_12->minBytesPerChar;
  } while (FUNC_0(FUNC_1(VAR_12, VAR_13, VAR_14)));
  if (VAR_13 == VAR_14) {
    *VAR_15 = ((void*)0);
    return 1;
  }
  *VAR_15 = VAR_13;
  for (;;) {
    VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14);
    if (VAR_19 == -1) {
      *VAR_18 = VAR_13;
      return 0;
    }
    if (VAR_19 == VAR_4) {
      *VAR_16 = VAR_13;
      break;
    }
    if (FUNC_0(VAR_19)) {
      *VAR_16 = VAR_13;
      do {
        VAR_13 += VAR_12->minBytesPerChar;
      } while (FUNC_0(VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14)));
      if (VAR_19 != VAR_4) {
        *VAR_18 = VAR_13;
        return 0;
      }
      break;
    }
    VAR_13 += VAR_12->minBytesPerChar;
  }
  if (VAR_13 == *VAR_15) {
    *VAR_18 = VAR_13;
    return 0;
  }
  VAR_13 += VAR_12->minBytesPerChar;
  VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14);
  while (FUNC_0(VAR_19)) {
    VAR_13 += VAR_12->minBytesPerChar;
    VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14);
  }
  if (VAR_19 != VAR_7 && VAR_19 != VAR_3) {
    *VAR_18 = VAR_13;
    return 0;
  }
  VAR_20 = (char)VAR_19;
  VAR_13 += VAR_12->minBytesPerChar;
  *VAR_17 = VAR_13;
  for (;; VAR_13 += VAR_12->minBytesPerChar) {
    VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14);
    if (VAR_19 == VAR_20)
      break;
    if (!(VAR_10 <= VAR_19 && VAR_19 <= VAR_11)
        && !(VAR_2 <= VAR_19 && VAR_19 <= VAR_9)
        && !(VAR_0 <= VAR_19 && VAR_19 <= VAR_1)
        && VAR_19 != VAR_6
        && VAR_19 != VAR_5
        && VAR_19 != VAR_8) {
      *VAR_18 = VAR_13;
      return 0;
    }
  }
  *VAR_18 = VAR_13 + VAR_12->minBytesPerChar;
  return 1;
}
