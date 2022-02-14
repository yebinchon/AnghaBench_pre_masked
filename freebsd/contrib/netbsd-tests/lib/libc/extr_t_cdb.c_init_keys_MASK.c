
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_2 (scalar_t__*,size_t,int,int ) ;

__attribute__((used)) static void
FUNC_3(size_t VAR_3)
{
 uint32_t VAR_4[VAR_0];
 size_t VAR_5;

 FUNC_1(VAR_3 <= VAR_0);

 if (VAR_3 == 0)
  return;

 do {
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
   VAR_4[VAR_5] = VAR_2[VAR_5] = FUNC_0();

  FUNC_2(VAR_4, VAR_3, sizeof(*VAR_4), VAR_1);
  for (VAR_5 = 1; VAR_5 < VAR_3; ++VAR_5) {
   if (VAR_4[VAR_5 - 1] == VAR_4[VAR_5])
    break;
  }
 } while (VAR_5 != VAR_3);
}
