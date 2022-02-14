
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lmac {scalar_t__ is_sgmii; } ;
struct bgx {struct lmac* lmac; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bgx*,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int ) ;
 struct bgx** VAR_5 ;

void
FUNC_2(int VAR_6, int VAR_7,
    int VAR_8, boolean_t VAR_9)
{
 struct bgx *VAR_10;
 struct lmac *VAR_11;
 uint64_t VAR_12;

 VAR_10 = VAR_5[(VAR_6 * VAR_2) + VAR_7];
 if (VAR_10 == ((void*)0))
  return;

 VAR_11 = &VAR_10->lmac[VAR_8];
 if (VAR_11->is_sgmii) {
  VAR_12 = FUNC_0(VAR_10, VAR_8, VAR_0);
  if (VAR_9)
   VAR_12 |= VAR_3;
  else
   VAR_12 &= ~VAR_3;
  FUNC_1(VAR_10, VAR_8, VAR_0, VAR_12);
 } else {
  VAR_12 = FUNC_0(VAR_10, VAR_8, VAR_1);
  if (VAR_9)
   VAR_12 |= VAR_4;
  else
   VAR_12 &= ~VAR_4;
  FUNC_1(VAR_10, VAR_8, VAR_1, VAR_12);
 }
}
