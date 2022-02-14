
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* cr_rights; } ;
typedef TYPE_1__ const cap_rights_t ;


 unsigned int FUNC_0 (TYPE_1__ const*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__ const*) ;

cap_rights_t *
FUNC_4(cap_rights_t *VAR_3, const cap_rights_t *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 FUNC_2(FUNC_1(VAR_3) == VAR_2);
 FUNC_2(FUNC_1(VAR_4) == VAR_2);
 FUNC_2(FUNC_1(VAR_3) == FUNC_1(VAR_4));
 FUNC_2(FUNC_3(VAR_4));
 FUNC_2(FUNC_3(VAR_3));

 VAR_6 = FUNC_0(VAR_3);
 FUNC_2(VAR_6 >= VAR_1 && VAR_6 <= VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_3->cr_rights[VAR_5] &=
      ~(VAR_4->cr_rights[VAR_5] & 0x01FFFFFFFFFFFFFFULL);
 }

 FUNC_2(FUNC_3(VAR_4));
 FUNC_2(FUNC_3(VAR_3));

 return (VAR_3);
}
