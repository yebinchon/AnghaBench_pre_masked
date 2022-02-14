
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(uint32_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
 uint32_t VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4, VAR_2, VAR_3);
 if (VAR_5 == 3 && FUNC_0(VAR_4)) {
  uint32_t VAR_6 = 0;
  if (VAR_3 - 3 < 3) {

   goto invalid_sequence;
  }
  VAR_5 = FUNC_2(&VAR_6, VAR_2+3, VAR_3-3);
  if (VAR_5 != 3 || !FUNC_1(VAR_6)) {

   goto invalid_sequence;
  }
  VAR_4 = FUNC_3(VAR_4, VAR_6);
  VAR_5 = 6;
 } else if (VAR_5 == 3 && FUNC_1(VAR_4)) {

  goto invalid_sequence;
 }
 *VAR_1 = VAR_4;
 return (VAR_5);
invalid_sequence:
 *VAR_1 = VAR_0;
 if (VAR_5 > 0)
  VAR_5 *= -1;
 return (VAR_5);
}
