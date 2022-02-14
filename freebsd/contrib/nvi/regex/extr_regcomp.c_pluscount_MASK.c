
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int* strip; int iflags; } ;
struct parse {scalar_t__ error; } ;
typedef scalar_t__ sopno ;
typedef int sop ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static sopno
FUNC_0(struct parse *VAR_2, struct re_guts *VAR_3)
{
 sop *VAR_4;
 sop VAR_5;
 sopno VAR_6 = 0;
 sopno VAR_7 = 0;

 if (VAR_2->error != 0)
  return(0);

 VAR_4 = VAR_3->strip + 1;
 do {
  VAR_5 = *VAR_4++;
  switch (VAR_5) {
  case 129:
   VAR_6++;
   break;
  case 128:
   if (VAR_6 > VAR_7)
    VAR_7 = VAR_6;
   VAR_6--;
   break;
  }
 } while (VAR_5 != VAR_1);
 if (VAR_6 != 0)
  VAR_3->iflags |= VAR_0;
 return(VAR_7);
}
