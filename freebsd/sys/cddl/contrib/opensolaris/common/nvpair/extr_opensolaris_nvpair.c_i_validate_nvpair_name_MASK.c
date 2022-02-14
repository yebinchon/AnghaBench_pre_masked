
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nvp_name_sz; scalar_t__ nvp_size; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(nvpair_t *VAR_1)
{
 if ((VAR_1->nvp_name_sz <= 0) ||
     (VAR_1->nvp_size < FUNC_1(VAR_1->nvp_name_sz, 0)))
  return (VAR_0);


 if (FUNC_0(VAR_1)[VAR_1->nvp_name_sz - 1] != '\0')
  return (VAR_0);

 return (FUNC_2(FUNC_0(VAR_1)) == VAR_1->nvp_name_sz - 1 ? 0 : VAR_0);
}
