
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int *,size_t) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,int *,size_t) ;
 size_t FUNC_5 (size_t,size_t) ;
 int * FUNC_6 (size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_7(uint8_t *VAR_2, size_t VAR_3, const uint8_t *VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 uint8_t *VAR_7;
 size_t VAR_8;
 uint8_t *VAR_9;

 VAR_6 = FUNC_5(VAR_5, VAR_3);
 VAR_7 = FUNC_6(VAR_6, VAR_0, VAR_1);

 FUNC_0(VAR_4, VAR_7, VAR_5);
 for (VAR_8 = VAR_5, VAR_9 = VAR_7; VAR_8 < VAR_6; VAR_8 += VAR_5, VAR_9 += VAR_5) {
  FUNC_4(VAR_9 + VAR_5, VAR_9, VAR_5);
 }
 FUNC_1(VAR_2, VAR_3);
 for (VAR_8 = 0, VAR_9 = VAR_7; VAR_8 < VAR_6; VAR_8 += VAR_3, VAR_9 += VAR_3) {
  FUNC_3(VAR_2, VAR_9, VAR_3);
 }
 FUNC_2(VAR_7, VAR_0);
}
