
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*,int) ;
 int FUNC_2 (int *,int,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(uint8_t* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint8_t** VAR_3, size_t* VAR_4)
{
 int VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = VAR_6 - VAR_5 -1;
 FUNC_3(FUNC_2(VAR_1, VAR_6, VAR_0, VAR_5));
 *VAR_3 = VAR_1;
 *VAR_4 = VAR_2;
 if(VAR_7>0)
  FUNC_1(VAR_3, VAR_4, VAR_7);
}
