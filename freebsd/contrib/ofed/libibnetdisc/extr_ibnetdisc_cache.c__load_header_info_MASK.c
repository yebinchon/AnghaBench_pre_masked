
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {TYPE_2__* f_int; int from_node_guid; } ;
typedef TYPE_3__ ibnd_fabric_cache_t ;
struct TYPE_5__ {scalar_t__ maxhops_discovered; } ;
struct TYPE_6__ {TYPE_1__ fabric; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,...) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int,int *,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_4, ibnd_fabric_cache_t * VAR_5,
        unsigned int *VAR_6, unsigned int *VAR_7)
{
 uint8_t VAR_8[VAR_0];
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = 0;
 size_t VAR_11 = 0;
 uint32_t VAR_12;

 if (FUNC_3(VAR_4, VAR_8, VAR_1) < 0)
  return -1;

 VAR_11 += FUNC_1(VAR_8 + VAR_11, &VAR_9);

 if (VAR_9 != VAR_2) {
  FUNC_0("invalid fabric cache file\n");
  return -1;
 }

 VAR_11 += FUNC_1(VAR_8 + VAR_11, &VAR_10);

 if (VAR_10 != VAR_3) {
  FUNC_0("invalid fabric cache version\n");
  return -1;
 }

 VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_6);
 VAR_11 += FUNC_1(VAR_8 + VAR_11, VAR_7);

 VAR_11 += FUNC_2(VAR_8 + VAR_11, &VAR_5->from_node_guid);
 VAR_11 += FUNC_1(VAR_8 + VAR_11, &VAR_12);
 VAR_5->f_int->fabric.maxhops_discovered = VAR_12;

 return 0;
}
