
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int* index; } ;
typedef TYPE_1__ BMP_INFO ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(BMP_INFO *VAR_0, int VAR_1)
{
    int VAR_2;
    u_char VAR_3;
    int VAR_4,VAR_5;

    VAR_4 = 0;
    VAR_5 = VAR_1;


    for (;;) {




 if (*VAR_0->index) {
     for (VAR_2 = 0; VAR_2 < *VAR_0->index; VAR_2++, VAR_4++) {
  if (VAR_2 & 1) {
      FUNC_0(VAR_0, VAR_4, VAR_5, *(VAR_0->index+1) & 0x0f);
  } else {
      FUNC_0(VAR_0, VAR_4, VAR_5, (*(VAR_0->index+1) >>4) & 0x0f);
  }
     }
     VAR_0->index += 2;




 } else {
     switch (*(VAR_0->index+1)) {
     case 0:
  VAR_0->index += 2;
  return;
     case 1:
  VAR_0->index = ((void*)0);
  return;
     case 2:
  VAR_4 += *(VAR_0->index + 2);
  VAR_5 += *(VAR_0->index + 3);
  VAR_0->index += 4;
  break;
     default:
  for (VAR_2 = 0; VAR_2 < *(VAR_0->index + 1); VAR_2++, VAR_4++) {
      VAR_3 = *(VAR_0->index + 2 + (VAR_2 / 2));
      if (VAR_2 & 1) {
   VAR_3 &= 0xf;
      } else {
   VAR_3 = (VAR_3 >> 4);
      }
      FUNC_0(VAR_0, VAR_4, VAR_5, VAR_3);
  }

  VAR_0->index += 2 + ((VAR_2 + 3) / 4) * 2;
  break;
     }
 }
    }
}
