
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int od_name; scalar_t__ od_gen; scalar_t__ od_blocksize; int od_type; void* od_crgen; void* od_crdnodesize; void* od_crblocksize; int od_crtype; scalar_t__ od_object; int od_dir; } ;
typedef TYPE_1__ ztest_od_t ;
typedef void* uint64_t ;
typedef int int64_t ;
typedef int dmu_object_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,char*,int ,void*) ;
 void* FUNC_1 () ;
 void* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(ztest_od_t *VAR_2, uint64_t VAR_3, char *VAR_4, uint64_t VAR_5,
    dmu_object_type_t VAR_6, uint64_t VAR_7, uint64_t VAR_8,
    uint64_t VAR_9)
{
 VAR_2->od_dir = VAR_1;
 VAR_2->od_object = 0;

 VAR_2->od_crtype = VAR_6;
 VAR_2->od_crblocksize = VAR_7 ? VAR_7 : FUNC_1();
 VAR_2->od_crdnodesize = VAR_8 ? VAR_8 : FUNC_2();
 VAR_2->od_crgen = VAR_9;

 VAR_2->od_type = VAR_0;
 VAR_2->od_blocksize = 0;
 VAR_2->od_gen = 0;

 (void) FUNC_0(VAR_2->od_name, sizeof (VAR_2->od_name), "%s(%lld)[%llu]",
     VAR_4, (int64_t)VAR_3, VAR_5);
}
