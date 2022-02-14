
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct vtdmap {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vtdmap*) ;
 int FUNC_3 (struct vtdmap*) ;
 struct vtdmap** VAR_2 ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, uint16_t VAR_4)
{
 int VAR_5, VAR_6;
 uint64_t *VAR_7;
 struct vtdmap *VAR_8;
 uint8_t VAR_9;

 VAR_9 = FUNC_0(VAR_4);
 VAR_7 = VAR_0[VAR_9];
 VAR_6 = FUNC_1(VAR_4);




 VAR_7[VAR_6] = 0;
 VAR_7[VAR_6 + 1] = 0;







 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_8 = VAR_2[VAR_5];
  FUNC_2(VAR_8);
  FUNC_3(VAR_8);
 }
}
