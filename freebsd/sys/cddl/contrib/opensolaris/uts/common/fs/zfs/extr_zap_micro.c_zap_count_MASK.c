
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zap_num_entries; } ;
struct TYPE_7__ {TYPE_1__ zap_m; int zap_ismicro; } ;
typedef TYPE_2__ zap_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,int ,int *,int ,int ,int ,int ,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ) ;

int
FUNC_3(objset_t *VAR_4, uint64_t VAR_5, uint64_t *VAR_6)
{
 zap_t *VAR_7;

 int VAR_8 =
     FUNC_1(VAR_4, VAR_5, ((void*)0), VAR_2, VAR_3, VAR_0, VAR_1, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);
 if (!VAR_7->zap_ismicro) {
  VAR_8 = FUNC_0(VAR_7, VAR_6);
 } else {
  *VAR_6 = VAR_7->zap_m.zap_num_entries;
 }
 FUNC_2(VAR_7, VAR_1);
 return (VAR_8);
}
