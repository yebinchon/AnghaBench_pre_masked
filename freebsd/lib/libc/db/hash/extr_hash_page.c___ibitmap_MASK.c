
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_3__ {int BSIZE; int** mapp; scalar_t__* BITMAPS; int nmaps; } ;
typedef TYPE_1__ HTAB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;

int
FUNC_3(HTAB *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 u_int32_t *VAR_8;
 int VAR_9, VAR_10;

 if ((VAR_8 = (u_int32_t *)FUNC_1(VAR_4->BSIZE)) == ((void*)0))
  return (1);
 VAR_4->nmaps++;
 VAR_10 = ((VAR_6 - 1) >> VAR_2) + 1;
 VAR_9 = VAR_10 << VAR_3;
 (void)FUNC_2((char *)VAR_8, 0, VAR_9);
 (void)FUNC_2(((char *)VAR_8) + VAR_9, 0xFF,
     VAR_4->BSIZE - VAR_9);
 VAR_8[VAR_10 - 1] = VAR_0 << (VAR_6 & VAR_1);
 FUNC_0(VAR_8, 0);
 VAR_4->BITMAPS[VAR_7] = (u_int16_t)VAR_5;
 VAR_4->mapp[VAR_7] = VAR_8;
 return (0);
}
