
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int* strip; scalar_t__ mlen; int * must; int iflags; int * stripdata; } ;
struct parse {scalar_t__ error; } ;
typedef scalar_t__ sopno ;
typedef int sop ;
typedef int RCHAR_T ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (size_t) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_5, struct re_guts *VAR_6)
{
 sop *VAR_7;
 RCHAR_T *VAR_8;
 sop *VAR_9 = 0;
 RCHAR_T *VAR_10 = ((void*)0);
 sop *VAR_11 = 0;
 RCHAR_T *VAR_12 = ((void*)0);
 sopno VAR_13;
 sop VAR_14;
 RCHAR_T VAR_15;
 RCHAR_T *VAR_16;
 sopno VAR_17;


 if (VAR_5->error != 0)
  return;


 VAR_13 = 0;
 VAR_7 = VAR_6->strip + 1;
 VAR_8 = VAR_6->stripdata + 1;
 do {
  VAR_14 = *VAR_7++;
  VAR_15 = *VAR_8++;
  switch (VAR_14) {
  case 133:
   if (VAR_13 == 0) {
    VAR_11 = VAR_7 - 1;
    VAR_12 = VAR_8 - 1;
   }
   VAR_13++;
   break;
  case 130:
  case 131:
  case 128:
   break;
  case 129:
  case 132:
   VAR_7--;
   VAR_8--;
   do {
    VAR_7 += VAR_15;
    VAR_8 += VAR_15;
    VAR_14 = *VAR_7;
    VAR_15 = *VAR_8;

    if (VAR_14 != VAR_4 && VAR_14 != VAR_3 && VAR_14 != VAR_2) {
     VAR_6->iflags |= VAR_0;
     return;
    }
   } while (VAR_14 != VAR_4 && VAR_14 != VAR_3);

  default:
   if (VAR_13 > VAR_6->mlen) {
    VAR_9 = VAR_11;
    VAR_10 = VAR_12;
    VAR_6->mlen = VAR_13;
   }
   VAR_13 = 0;
   break;
  }
 } while (VAR_14 != VAR_1);

 if (VAR_6->mlen == 0)
  return;


 VAR_6->must = FUNC_1(((size_t)VAR_6->mlen + 1) * sizeof(RCHAR_T));
 if (VAR_6->must == ((void*)0)) {
  VAR_6->mlen = 0;
  return;
 }
 VAR_16 = VAR_6->must;
 VAR_7 = VAR_9;
 VAR_8 = VAR_10;
 for (VAR_17 = VAR_6->mlen; VAR_17 > 0; VAR_17--) {
  for (;;) {
   VAR_14 = *VAR_7++;
   VAR_15 = *VAR_8++;
   if (VAR_14 == 133)
    break;
  }
  FUNC_0(VAR_16 < VAR_6->must + VAR_6->mlen);
  *VAR_16++ = VAR_15;
 }
 FUNC_0(VAR_16 == VAR_6->must + VAR_6->mlen);
 *VAR_16++ = '\0';
}
