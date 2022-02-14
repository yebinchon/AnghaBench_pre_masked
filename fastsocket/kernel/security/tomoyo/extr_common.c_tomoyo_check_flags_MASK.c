
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct tomoyo_domain_info {size_t profile; } ;
struct TYPE_2__ {unsigned int* value; } ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;

unsigned int FUNC_2(const struct tomoyo_domain_info *VAR_4,
    const u8 VAR_5)
{
 const u8 VAR_6 = VAR_4->profile;

 if (FUNC_0(FUNC_1()))
  return 0;
 return VAR_2 && VAR_5 < VAR_0

  && VAR_6 < VAR_1

  && VAR_3[VAR_6] ?
  VAR_3[VAR_6]->value[VAR_5] : 0;
}
