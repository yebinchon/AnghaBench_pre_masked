
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {unsigned int vl; scalar_t__ weight; } ;
typedef TYPE_1__ ib_vl_arb_element_t ;


 int FUNC_0 (char const*,char,unsigned int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, ib_vl_arb_element_t * VAR_1)
{
 unsigned VAR_2;
 const char *VAR_3 = VAR_0;
 VAR_3 += FUNC_0(VAR_3, ':', &VAR_2);
 VAR_1->vl = VAR_2 % 15;
 VAR_3 += FUNC_0(VAR_3, ',', &VAR_2);
 VAR_1->weight = (uint8_t) VAR_2;
 return (int)(VAR_3 - VAR_0);
}
