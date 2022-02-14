
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mapped ;
typedef int TERMTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_2 ;
 int FUNC_2 (char*,int ,int) ;

void
FUNC_3(TERMTYPE *VAR_3)
{
    if (FUNC_1(VAR_2)) {
 size_t VAR_4, VAR_5;
 char VAR_6[256];
 char VAR_7 = 0;
 unsigned VAR_8;
 unsigned VAR_9;
 bool VAR_10 = VAR_0;

 for (VAR_4 = 0, VAR_8 = 0; VAR_2[VAR_4] != 0; VAR_4++) {
     VAR_9 = FUNC_0(VAR_2[VAR_4]);
     if (VAR_8 >= VAR_9) {
  VAR_10 = VAR_1;
  break;
     }
     VAR_8 = VAR_9;
     if (VAR_2[VAR_4 + 1])
  VAR_4++;
 }
 if (VAR_10) {
     FUNC_2(VAR_6, 0, sizeof(VAR_6));
     for (VAR_4 = 0; VAR_2[VAR_4] != 0; VAR_4++) {
  VAR_8 = FUNC_0(VAR_2[VAR_4]);
  if ((VAR_9 = (unsigned char) VAR_2[VAR_4 + 1]) != 0) {
      VAR_6[VAR_8] = (char) VAR_9;
      VAR_4++;
  } else {
      VAR_7 = (char) VAR_8;
  }
     }
     for (VAR_4 = VAR_5 = 0; VAR_4 < sizeof(VAR_6); VAR_4++) {
  if (VAR_6[VAR_4]) {
      VAR_2[VAR_5++] = (char) VAR_4;
      VAR_2[VAR_5++] = VAR_6[VAR_4];
  }
     }
     if (VAR_7)
  VAR_2[VAR_5++] = VAR_7;
     VAR_2[VAR_5] = 0;
 }
    }
}
