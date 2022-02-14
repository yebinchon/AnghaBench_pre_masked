
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uch ;
struct re_guts {int ncsets; int csetsize; scalar_t__* setbits; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct re_guts *VAR_1, int VAR_2)
{
 uch *VAR_3;
 int VAR_4;
 int VAR_5 = (VAR_1->ncsets+(VAR_0-1)) / VAR_0;
 unsigned VAR_6 = (uch)VAR_2;

 for (VAR_4 = 0, VAR_3 = VAR_1->setbits; VAR_4 < VAR_5; VAR_4++, VAR_3 += VAR_1->csetsize)
  if (VAR_3[VAR_6] != 0)
   return(1);
 return(0);
}
