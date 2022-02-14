
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {scalar_t__ mlen; char* must; int iflags; int * strip; } ;
struct parse {scalar_t__ error; } ;
typedef scalar_t__ sopno ;
typedef int sop ;




 int const VAR_0 ;

 int const VAR_1 ;
 int const FUNC_0 (int ) ;

 scalar_t__ FUNC_1 (int ) ;


 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (size_t) ;

__attribute__((used)) static void
FUNC_4(struct parse *VAR_5, struct re_guts *VAR_6)
{
 sop *VAR_7;
 sop *VAR_8 = 0;
 sop *VAR_9 = 0;
 sopno VAR_10;
 sop VAR_11;
 char *VAR_12;
 sopno VAR_13;


 if (VAR_5->error != 0)
  return;


 VAR_10 = 0;
 VAR_7 = VAR_6->strip + 1;
 do {
  VAR_11 = *VAR_7++;
  switch (FUNC_0(VAR_11)) {
  case 133:
   if (VAR_10 == 0)
    VAR_9 = VAR_7 - 1;
   VAR_10++;
   break;
  case 130:
  case 131:
  case 128:
   break;
  case 129:
  case 132:
   VAR_7--;
   do {
    VAR_7 += FUNC_1(VAR_11);
    VAR_11 = *VAR_7;

    if (FUNC_0(VAR_11) != VAR_3 && FUNC_0(VAR_11) != VAR_2 &&
       FUNC_0(VAR_11) != VAR_1) {
     VAR_6->iflags |= VAR_4;
     return;
    }
   } while (FUNC_0(VAR_11) != VAR_3 && FUNC_0(VAR_11) != VAR_2);

  default:
   if (VAR_10 > VAR_6->mlen) {
    VAR_8 = VAR_9;
    VAR_6->mlen = VAR_10;
   }
   VAR_10 = 0;
   break;
  }
 } while (FUNC_0(VAR_11) != VAR_0);

 if (VAR_6->mlen == 0)
  return;


 VAR_6->must = FUNC_3((size_t)VAR_6->mlen + 1);
 if (VAR_6->must == ((void*)0)) {
  VAR_6->mlen = 0;
  return;
 }
 VAR_12 = VAR_6->must;
 VAR_7 = VAR_8;
 for (VAR_13 = VAR_6->mlen; VAR_13 > 0; VAR_13--) {
  while (FUNC_0(VAR_11 = *VAR_7++) != 133)
   continue;
  FUNC_2(VAR_12 < VAR_6->must + VAR_6->mlen);
  *VAR_12++ = (char)FUNC_1(VAR_11);
 }
 FUNC_2(VAR_12 == VAR_6->must + VAR_6->mlen);
 *VAR_12++ = '\0';
}
