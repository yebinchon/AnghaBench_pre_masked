
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int type; int blocks; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,int *) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
    FILE *VAR_10;
    char VAR_11[200];
    int VAR_12;

    int VAR_13 = FUNC_9("fdisk -l 2>/dev/null 1>/tmp/fdisk.output");
    if ((VAR_13 >> 8) != 0) {
 FUNC_1("fdisk didn't run");
    }
    if ((VAR_10 = FUNC_3("/tmp/fdisk.output", "r")) == ((void*)0))



 FUNC_1("cannot read fdisk output");

    while (VAR_7 <= VAR_2
    && (VAR_12 = FUNC_4(VAR_11, 200, VAR_10)) >= 0) {
 if (FUNC_7(VAR_11, "/dev/", 5) == 0) {
     int VAR_14 = 0;
     char *VAR_15 = VAR_11 + 5;
     char *VAR_16 = VAR_9[VAR_7].name;
     FUNC_6(VAR_16, "/dev/");
     VAR_16 += 5;
     while (VAR_14 < VAR_1 && *VAR_15 != '\0'
     && !FUNC_5((unsigned char) *VAR_15)) {
  *VAR_16++ = *VAR_15++;
  VAR_14++;
     }
     *VAR_16 = '\0';

     VAR_16 = VAR_11 + 37;
     while (FUNC_5((unsigned char) *VAR_16))
  VAR_16++;
     VAR_9[VAR_7].blocks = FUNC_0(VAR_16);
     if (FUNC_8(VAR_11, "Linux native")) {
  VAR_9[VAR_7].type = VAR_0;
  VAR_7++;
  VAR_5++;
     } else if (FUNC_8(VAR_11, "Linux swap")) {
  VAR_9[VAR_7].type = VAR_4;
  VAR_7++;
  VAR_8++;
     } else if (FUNC_8(VAR_11, "DOS")) {
  VAR_9[VAR_7].type = VAR_3;
  VAR_7++;
  VAR_6++;
     }
 }
    }
    FUNC_2(VAR_10);

    FUNC_10("/tmp/fdisk.output");

}
