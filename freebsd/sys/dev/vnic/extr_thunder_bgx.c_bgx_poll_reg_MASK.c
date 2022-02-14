
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct bgx {int dummy; } ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct bgx*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct bgx *VAR_1, uint8_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    boolean_t VAR_5)
{
 int VAR_6 = 10;
 uint64_t VAR_7;

 while (VAR_6) {
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (VAR_5 && !(VAR_7 & VAR_4))
   return (0);
  if (!VAR_5 && (VAR_7 & VAR_4))
   return (0);

  FUNC_0(100);
  VAR_6--;
 }
 return (VAR_0);
}
