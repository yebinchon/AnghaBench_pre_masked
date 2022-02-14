
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bgx {TYPE_1__* lmac; } ;
struct TYPE_2__ {int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bgx** VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;

void
FUNC_1(int VAR_3, int VAR_4, int VAR_5, const uint8_t *VAR_6)
{
 struct bgx *VAR_7 = VAR_2[(VAR_3 * VAR_1) + VAR_4];

 if (VAR_7 == ((void*)0))
  return;

 FUNC_0(VAR_7->lmac[VAR_5].mac, VAR_6, VAR_0);
}
