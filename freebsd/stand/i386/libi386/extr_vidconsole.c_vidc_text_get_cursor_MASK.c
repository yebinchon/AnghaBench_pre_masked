
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int teken_unit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(teken_unit_t *VAR_4, teken_unit_t *VAR_5)
{
 uint16_t VAR_6;

 VAR_6 = (FUNC_0(VAR_3, VAR_1) << 8) +
     FUNC_0(VAR_3, VAR_2);

 *VAR_4 = VAR_6 / VAR_0;
 *VAR_5 = VAR_6 % VAR_0;
}
