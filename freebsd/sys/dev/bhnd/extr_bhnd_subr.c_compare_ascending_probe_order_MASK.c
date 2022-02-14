
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 device_t VAR_2, VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = (*(const device_t *) VAR_0);
 VAR_3 = (*(const device_t *) VAR_1);

 VAR_4 = FUNC_0(FUNC_1(VAR_2), VAR_2);
 VAR_5 = FUNC_0(FUNC_1(VAR_3), VAR_3);

 if (VAR_4 < VAR_5) {
  return (-1);
 } else if (VAR_4 > VAR_5) {
  return (1);
 } else {
  return (0);
 }
}
