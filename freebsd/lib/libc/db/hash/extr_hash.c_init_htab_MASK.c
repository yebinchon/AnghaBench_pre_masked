
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int FFACTOR; int* SPARES; int OVFL_POINT; int LAST_FREED; int MAX_BUCKET; int LOW_MASK; int HIGH_MASK; int HDRPAGES; int BSHIFT; int SGSIZE; int DSIZE; } ;
typedef TYPE_1__ HTAB ;
typedef int HASHHDR ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5(HTAB *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;






 VAR_2 = (VAR_2 - 1) / VAR_1->FFACTOR + 1;

 VAR_5 = FUNC_3(FUNC_0(VAR_2, 2));
 VAR_3 = 1 << VAR_5;

 VAR_1->SPARES[VAR_5] = VAR_5 + 1;
 VAR_1->SPARES[VAR_5 + 1] = VAR_5 + 1;
 VAR_1->OVFL_POINT = VAR_5;
 VAR_1->LAST_FREED = 2;


 if (FUNC_2(VAR_1, FUNC_1(VAR_5, 1), VAR_5 + 1, 0))
  return (-1);

 VAR_1->MAX_BUCKET = VAR_1->LOW_MASK = VAR_3 - 1;
 VAR_1->HIGH_MASK = (VAR_3 << 1) - 1;
 VAR_1->HDRPAGES = ((FUNC_0(sizeof(HASHHDR), VAR_0) - 1) >>
     VAR_1->BSHIFT) + 1;

 VAR_4 = (VAR_3 - 1) / VAR_1->SGSIZE + 1;
 VAR_4 = 1 << FUNC_3(VAR_4);

 if (VAR_4 > VAR_1->DSIZE)
  VAR_1->DSIZE = VAR_4;
 return (FUNC_4(VAR_1, VAR_4));
}
