
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct mbuf* FUNC_2 (struct mbuf*,scalar_t__*,int) ;

__attribute__((used)) static struct mbuf *
FUNC_3(struct mbuf *VAR_0, uint16_t VAR_1, int VAR_2)
{
 if (VAR_2 && FUNC_0(VAR_1)) {
  uint8_t VAR_3 = (uint8_t)VAR_1;

  return FUNC_2(VAR_0, &VAR_3, 1);
 } else {
  uint16_t VAR_4 = FUNC_1((uint16_t)VAR_1);

  return FUNC_2(VAR_0, &VAR_4, 2);
 }
}
