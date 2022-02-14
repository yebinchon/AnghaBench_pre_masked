
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_2__ {scalar_t__ text_only; scalar_t__ text_width; scalar_t__ text_height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_1 (int *,int *,char const*,int,int,int*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void
FUNC_4(WINDOW *VAR_3,
      const char *VAR_4,
      int VAR_5,
      int VAR_6,
      int *VAR_7, int *VAR_8)
{
    chtype VAR_9 = VAR_0;
    int VAR_10 = (2 * VAR_1);
    int VAR_11 = VAR_1;
    int VAR_12 = 2;
    int VAR_13 = (2 * VAR_1);
    int VAR_14 = VAR_6;
    int VAR_15 = VAR_5;
    int VAR_16 = 0, VAR_17 = 0;

    VAR_2.text_height = 0;
    VAR_2.text_width = 0;
    if (VAR_2.text_only || VAR_3) {
 VAR_14 -= (2 * VAR_1);
 VAR_15 -= (2 * VAR_1);
    }
    if (VAR_4 == 0)
 VAR_4 = "";

    if (VAR_3 != 0)
 FUNC_2(VAR_3, VAR_16, VAR_17);
    while (VAR_11 <= VAR_15 && *VAR_4) {
 VAR_10 = VAR_13;

 if (*VAR_4 == '\n') {
     while (*VAR_4 == '\n' && VAR_11 < VAR_15) {
  if (*(VAR_4 + 1) != '\0') {
      ++VAR_11;
      if (VAR_3 != 0)
   (void) FUNC_3(VAR_3, VAR_11, VAR_13);
  }
  VAR_4++;
     }
 } else if (VAR_3 != 0)
     (void) FUNC_3(VAR_3, VAR_11, VAR_13);

 if (*VAR_4) {
     VAR_4 = FUNC_1(VAR_3, &VAR_9, VAR_4, VAR_13, VAR_14, &VAR_10);
     if (VAR_3 != 0)
  FUNC_2(VAR_3, VAR_16, VAR_17);
 }
 if (*VAR_4) {
     ++VAR_11;
     if (VAR_3 != 0)
  (void) FUNC_3(VAR_3, VAR_11, VAR_13);
 }
 VAR_12 = FUNC_0(VAR_12, VAR_10);
    }

    if (VAR_3 != 0)
 (void) FUNC_3(VAR_3, VAR_16, VAR_17);


    if (VAR_7 != 0)
 *VAR_7 = VAR_11;
    if (VAR_8 != 0)
 *VAR_8 = VAR_12;
}
