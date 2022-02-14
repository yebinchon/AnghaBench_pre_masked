
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int va_flags; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,int*) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_3, int VAR_4)
{
 static int VAR_5 = 0;
 u_char VAR_6[256*3];
 int VAR_7;

 if (VAR_4) {
  if (FUNC_0(VAR_3->va_flags)) {
   if (VAR_5 <= 0)
    FUNC_3(VAR_3, VAR_2);
   if (VAR_5 < 256) {
    VAR_6[0] = VAR_6[1] = VAR_6[2] = 0;
    for (VAR_7 = 3; VAR_7 < 256*3; VAR_7++) {
     if (VAR_2[VAR_7] - VAR_5 > 60)
      VAR_6[VAR_7] = VAR_2[VAR_7] - VAR_5;
     else
      VAR_6[VAR_7] = 60;
    }
    FUNC_2(VAR_3, VAR_6);
    VAR_5++;
   }
  } else {
       FUNC_1(VAR_3, VAR_0);
  }
 } else {
  if (FUNC_0(VAR_3->va_flags)) {
   FUNC_2(VAR_3, VAR_2);
   VAR_5 = 0;
  } else {
       FUNC_1(VAR_3, VAR_1);
  }
 }
 return 0;
}
