
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int Low; int Range; int Bottom; int Code; TYPE_1__* Stream; } ;
struct TYPE_4__ {int (* Read ) (void*) ;} ;
typedef TYPE_2__ CPpmd7z_RangeDec ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(CPpmd7z_RangeDec *VAR_1)
{
  while (1)
  {
    if((VAR_1->Low ^ (VAR_1->Low + VAR_1->Range)) >= VAR_0)
    {
      if(VAR_1->Range >= VAR_1->Bottom)
        break;
      else
        VAR_1->Range = ((uint32_t)(-(int32_t)VAR_1->Low)) & (VAR_1->Bottom - 1);
    }
    VAR_1->Code = (VAR_1->Code << 8) | VAR_1->Stream->Read((void *)VAR_1->Stream);
    VAR_1->Range <<= 8;
    VAR_1->Low <<= 8;
  }
}
