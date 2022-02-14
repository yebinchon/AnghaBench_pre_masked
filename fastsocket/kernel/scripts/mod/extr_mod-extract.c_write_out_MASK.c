
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (void const*,int,size_t,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(const void *VAR_3, size_t VAR_4)
{
 const uint8_t *VAR_5 = VAR_3;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_0 += VAR_5[VAR_6];
  VAR_2 += VAR_5[VAR_6];
 }

 if (FUNC_1(VAR_3, 1, VAR_4, VAR_1) != VAR_4) {
  FUNC_2("write");
  FUNC_0(1);
 }
}
