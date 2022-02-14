
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct lmac {struct bgx* bgx; } ;
struct bgx {scalar_t__ lmac_count; size_t bgx_id; int reg_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgx*,scalar_t__) ;
 int ** VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct lmac* FUNC_2 (int ) ;
 int FUNC_3 (struct bgx*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct lmac *VAR_4;
 struct bgx *VAR_5;
 uint8_t VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = VAR_4->bgx;

 for (VAR_6 = 0; VAR_6 < VAR_5->lmac_count; VAR_6++)
  FUNC_0(VAR_5, VAR_6);

 VAR_2[VAR_5->bgx_id] = ((void*)0);
 FUNC_1(VAR_3, VAR_1,
     FUNC_5(VAR_5->reg_base), VAR_5->reg_base);
 FUNC_3(VAR_5, VAR_0);
 FUNC_4(VAR_3);

 return (0);
}
