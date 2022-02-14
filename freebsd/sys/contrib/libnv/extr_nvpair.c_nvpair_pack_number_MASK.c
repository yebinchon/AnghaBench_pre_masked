
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ nvp_type; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,scalar_t__*,int) ;

unsigned char *
FUNC_3(const nvpair_t *VAR_1, unsigned char *VAR_2, size_t *VAR_3)
{
 uint64_t VAR_4;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);

 VAR_4 = (uint64_t)VAR_1->nvp_data;

 FUNC_1(*VAR_3 >= sizeof(VAR_4));
 FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4));
 VAR_2 += sizeof(VAR_4);
 *VAR_3 -= sizeof(VAR_4);

 return (VAR_2);
}
