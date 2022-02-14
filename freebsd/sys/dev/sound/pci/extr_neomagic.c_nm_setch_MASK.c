
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int spd; int fmt; int dir; struct sc_info* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,scalar_t__,int,int) ;
 int* VAR_8 ;

__attribute__((used)) static int
FUNC_3(struct sc_chinfo *VAR_9)
{
 struct sc_info *VAR_10 = VAR_9->parent;
 u_int32_t VAR_11;
 u_int8_t VAR_12;

 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  if (VAR_9->spd < (VAR_8[VAR_12] + VAR_8[VAR_12 + 1]) / 2)
   break;

 if (VAR_12 == 8) return 1;

 VAR_9->spd = VAR_8[VAR_12];
 FUNC_1(VAR_10, VAR_9->dir, VAR_12);

 VAR_12 <<= 4;
 VAR_12 &= VAR_3;
 if (VAR_9->fmt & VAR_0) VAR_12 |= VAR_2;
 if (FUNC_0(VAR_9->fmt) > 1) VAR_12 |= VAR_5;

 VAR_11 = (VAR_9->dir == VAR_7)? VAR_1 : VAR_6;
 FUNC_2(VAR_10, VAR_11 + VAR_4, VAR_12, 1);
 return 0;
}
