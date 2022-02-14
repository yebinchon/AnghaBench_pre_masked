
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(int VAR_1, int VAR_2, int VAR_3)
{
 uint64_t VAR_4 = FUNC_1(VAR_1);
 uint64_t VAR_5 = FUNC_2(VAR_1);
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_4, VAR_0);


 if((VAR_2 % 4) == 0) {
  VAR_8 = VAR_2 << 2;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_0(VAR_5, VAR_6, VAR_8, VAR_3);
 }
}
