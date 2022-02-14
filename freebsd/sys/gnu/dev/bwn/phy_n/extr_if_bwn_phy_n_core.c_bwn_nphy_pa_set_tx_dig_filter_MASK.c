
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int const) ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_0, uint16_t VAR_1,
       const int16_t *VAR_2)
{
 int VAR_3;

 VAR_1 = FUNC_0(VAR_1);

 for (VAR_3 = 0; VAR_3 < 15; VAR_3++, VAR_1++)
  FUNC_1(VAR_0, VAR_1, VAR_2[VAR_3]);
}
