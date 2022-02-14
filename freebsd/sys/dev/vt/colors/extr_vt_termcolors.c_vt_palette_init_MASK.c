
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tunable ;
typedef int rgb ;
struct TYPE_2__ {unsigned char r; unsigned char g; unsigned char b; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (char*,unsigned char*,unsigned char*,unsigned char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_2;
 char VAR_3[32];
 char VAR_4[32];
 unsigned char VAR_5, VAR_6, VAR_7;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_4, sizeof(VAR_4),
      "kern.vt.color.%d.rgb", VAR_2);
  if (FUNC_0(VAR_4, VAR_3, sizeof(VAR_3))) {
   if (FUNC_2(VAR_3, &VAR_5, &VAR_6, &VAR_7) == 0) {

    VAR_1[VAR_2].r = VAR_5*100/255;
    VAR_1[VAR_2].g = VAR_6*100/255;
    VAR_1[VAR_2].b = VAR_7*100/255;
   }
  }
 }
}
