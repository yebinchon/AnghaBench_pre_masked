
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int b2 ;
typedef int b1 ;
struct TYPE_2__ {char* name; char* alias1; char* alias2; int afmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char const*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

uint32_t
FUNC_6(const char *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 char VAR_7[8];
 char VAR_8[8];

 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 FUNC_1(VAR_8, 0, sizeof(VAR_8));

 VAR_6 = FUNC_2(VAR_3, "%5[^:]:%6s", VAR_7, VAR_8);

 if (VAR_6 == 1) {
  if (FUNC_5(VAR_3) != FUNC_5(VAR_7))
   return (0);
  FUNC_4(VAR_8, "2.0", sizeof(VAR_8));
 } else if (VAR_6 == 2) {
  if (FUNC_5(VAR_3) != (FUNC_5(VAR_7) + 1 + FUNC_5(VAR_8)))
   return (0);
 } else
  return (0);

 VAR_6 = FUNC_2(VAR_8, "%d.%d", &VAR_5, &VAR_4);

 if (VAR_6 == 0) {
  if (FUNC_3(VAR_8, "mono") == 0) {
   VAR_5 = 1;
   VAR_4 = 0;
  } else if (FUNC_3(VAR_8, "stereo") == 0) {
   VAR_5 = 2;
   VAR_4 = 0;
  } else if (FUNC_3(VAR_8, "quad") == 0) {
   VAR_5 = 4;
   VAR_4 = 0;
  } else
   return (0);
 } else if (VAR_6 == 1) {
  if (VAR_5 < 1 || VAR_5 > VAR_0)
   return (0);
  VAR_4 = 0;
 } else if (VAR_6 == 2) {
  if (VAR_4 < 0 || VAR_4 > VAR_1)
   return (0);
  if (VAR_5 < 1 || (VAR_5 + VAR_4) > VAR_0)
   return (0);
 } else
  return (0);

 for (VAR_6 = 0; VAR_2[VAR_6].name != ((void*)0); VAR_6++) {
  if (FUNC_3(VAR_2[VAR_6].name, VAR_7) != 0) {
   if (VAR_2[VAR_6].alias1 == ((void*)0))
    continue;
   if (FUNC_3(VAR_2[VAR_6].alias1, VAR_7) != 0) {
    if (VAR_2[VAR_6].alias2 == ((void*)0))
     continue;
    if (FUNC_3(VAR_2[VAR_6].alias2, VAR_7) != 0)
     continue;
   }
  }

  return (FUNC_0(VAR_2[VAR_6].afmt, VAR_5 + VAR_4, VAR_4));
 }

 return (0);
}
