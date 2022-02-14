
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int range; } ;
struct eap_pwd_data {TYPE_1__ allowed_groups; } ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(struct eap_pwd_data *VAR_0, u16 VAR_1)
{
 if (!VAR_0->allowed_groups.range) {


  return VAR_1 == 19 || VAR_1 == 20 || VAR_1 == 21;
 }

 return FUNC_0(&VAR_0->allowed_groups, VAR_1);
}
