
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bgx {TYPE_1__* lmac; } ;
struct TYPE_2__ {int const* mac; } ;


 int VAR_0 ;
 struct bgx** VAR_1 ;

const uint8_t
*FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
 struct bgx *VAR_5 = VAR_1[(VAR_2 * VAR_0) + VAR_3];

 if (VAR_5 != ((void*)0))
  return (VAR_5->lmac[VAR_4].mac);

 return (((void*)0));
}
