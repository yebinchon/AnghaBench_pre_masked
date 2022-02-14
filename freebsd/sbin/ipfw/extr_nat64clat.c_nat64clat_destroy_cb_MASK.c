
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ set; int name; } ;
typedef TYPE_1__ ipfw_nat64clat_cfg ;
struct TYPE_5__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(ipfw_nat64clat_cfg *VAR_2, const char *VAR_3, uint8_t VAR_4)
{

 if (VAR_1.use_set != 0 && VAR_2->set != VAR_4)
  return (VAR_0);

 FUNC_0(VAR_2->name, VAR_2->set);
 return (0);
}
