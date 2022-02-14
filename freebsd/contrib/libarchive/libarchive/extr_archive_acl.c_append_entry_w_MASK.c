
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_4__ {int perm; int wc; } ;
struct TYPE_3__ {int perm; int wc; } ;







 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (char**,int) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(wchar_t **VAR_8, const wchar_t *VAR_9, int VAR_10,
    int VAR_11, int VAR_12, const wchar_t *VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16;

 if (VAR_9 != ((void*)0)) {
  FUNC_1(*VAR_8, VAR_9);
  *VAR_8 += FUNC_2(*VAR_8);
 }
 switch (VAR_11) {
 case 128:
  VAR_13 = ((void*)0);
  VAR_15 = -1;
  if ((VAR_10 & VAR_2) != 0) {
   FUNC_1(*VAR_8, L"owner@");
   break;
  }

 case 129:
  FUNC_1(*VAR_8, L"user");
  break;
 case 136:
  VAR_13 = ((void*)0);
  VAR_15 = -1;
  if ((VAR_10 & VAR_2) != 0) {
   FUNC_1(*VAR_8, L"group@");
   break;
  }

 case 137:
  FUNC_1(*VAR_8, L"group");
  break;
 case 135:
  FUNC_1(*VAR_8, L"mask");
  VAR_13 = ((void*)0);
  VAR_15 = -1;
  break;
 case 134:
  FUNC_1(*VAR_8, L"other");
  VAR_13 = ((void*)0);
  VAR_15 = -1;
  break;
 case 138:
  FUNC_1(*VAR_8, L"everyone@");
  VAR_13 = ((void*)0);
  VAR_15 = -1;
  break;
 }
 *VAR_8 += FUNC_2(*VAR_8);
 *(*VAR_8)++ = L':';
 if (((VAR_10 & VAR_3) != 0) ||
     VAR_11 == 129 ||
     VAR_11 == 137) {
  if (VAR_13 != ((void*)0)) {
   FUNC_1(*VAR_8, VAR_13);
   *VAR_8 += FUNC_2(*VAR_8);
  } else if (VAR_11 == 129
      || VAR_11 == 137) {
   FUNC_0(VAR_8, VAR_15);
   if ((VAR_10 & VAR_2) == 0)
    VAR_15 = -1;
  }

  if (((VAR_12 & VAR_1) == 0)
      || (VAR_11 != 134
      && VAR_11 != 135))
   *(*VAR_8)++ = L':';
 }
 if ((VAR_10 & VAR_3) != 0) {

  *(*VAR_8)++ = (VAR_14 & 0444) ? L'r' : L'-';
  *(*VAR_8)++ = (VAR_14 & 0222) ? L'w' : L'-';
  *(*VAR_8)++ = (VAR_14 & 0111) ? L'x' : L'-';
 } else {

  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
   if (VAR_14 & VAR_6[VAR_16].perm)
    *(*VAR_8)++ = VAR_6[VAR_16].wc;
   else if ((VAR_12 & VAR_0) == 0)
    *(*VAR_8)++ = L'-';
  }
  *(*VAR_8)++ = L':';
  for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
   if (VAR_14 & VAR_4[VAR_16].perm)
    *(*VAR_8)++ = VAR_4[VAR_16].wc;
   else if ((VAR_12 & VAR_0) == 0)
    *(*VAR_8)++ = L'-';
  }
  *(*VAR_8)++ = L':';
  switch (VAR_10) {
  case 132:
   FUNC_1(*VAR_8, L"allow");
   break;
  case 130:
   FUNC_1(*VAR_8, L"deny");
   break;
  case 131:
   FUNC_1(*VAR_8, L"audit");
   break;
  case 133:
   FUNC_1(*VAR_8, L"alarm");
   break;
  default:
   break;
  }
  *VAR_8 += FUNC_2(*VAR_8);
 }
 if (VAR_15 != -1) {
  *(*VAR_8)++ = L':';
  FUNC_0(VAR_8, VAR_15);
 }
}
