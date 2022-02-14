
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nvp_type; size_t nvp_datasize; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;

unsigned char *
FUNC_3(const nvpair_t *VAR_1, unsigned char *VAR_2, size_t *VAR_3)
{

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvp_type == VAR_0);

 FUNC_1(*VAR_3 >= VAR_1->nvp_datasize);
 FUNC_2(VAR_2, (const void *)(intptr_t)VAR_1->nvp_data, VAR_1->nvp_datasize);
 VAR_2 += VAR_1->nvp_datasize;
 *VAR_3 -= VAR_1->nvp_datasize;

 return (VAR_2);
}
