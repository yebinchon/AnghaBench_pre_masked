
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int len; } ;
typedef char Char ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,char*,size_t) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(Char *VAR_10, Char *VAR_11)
{
    CStr VAR_12, *VAR_13;
    Char *VAR_14, *VAR_15, *VAR_16;
    int VAR_17 = VAR_11 - VAR_10, VAR_18, VAR_19, VAR_20;


    if (VAR_2 > 0 && (VAR_14 = FUNC_2(VAR_7)) != VAR_4) {
 VAR_9 = (VAR_0 - 1 + VAR_2) % VAR_2;
 if (FUNC_1(VAR_14, VAR_6)) {
     VAR_19 = VAR_9;
     for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  if (FUNC_0(VAR_1[VAR_19].buf, VAR_10, (size_t) VAR_17) == 0 &&
      VAR_1[VAR_19].buf[VAR_17] == '\0') {
      VAR_12 = VAR_1[VAR_19];
      for ( ; VAR_18 > 0; VAR_18--) {
   VAR_20 = VAR_19;
   VAR_19 = (VAR_19 + 1) % VAR_2;
   VAR_1[VAR_20] = VAR_1[VAR_19];
      }
      VAR_1[VAR_19] = VAR_12;
      return;
  }
  VAR_19 = (VAR_19 - 1 + VAR_2) % VAR_2;
     }
 } else if (FUNC_1(VAR_14, VAR_5)) {
     for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
  if (FUNC_0(VAR_1[VAR_18].buf, VAR_10, (size_t) VAR_17) == 0 &&
      VAR_1[VAR_18].buf[VAR_17] == '\0')
      return;
 } else if (FUNC_1(VAR_14, VAR_8)) {
     VAR_19 = VAR_9;
     if (FUNC_0(VAR_1[VAR_19].buf, VAR_10, (size_t) VAR_17) == 0 &&
  VAR_1[VAR_19].buf[VAR_17] == '\0')
  return;
 }
    }


    VAR_17++;
    VAR_9 = VAR_0;
    if (VAR_2 < VAR_3)
 VAR_2++;
    VAR_13 = &VAR_1[VAR_0];
    VAR_0 = (VAR_0 + 1) % VAR_3;
    if (VAR_13->len < VAR_17) {
 VAR_13->buf = FUNC_3(VAR_13->buf, VAR_17 * sizeof(Char));
 VAR_13->len = VAR_17;
    }
    VAR_15 = VAR_10;
    VAR_16 = VAR_13->buf;
    while (VAR_15 < VAR_11)
 *VAR_16++ = *VAR_15++;
    *VAR_16 = '\0';
}
