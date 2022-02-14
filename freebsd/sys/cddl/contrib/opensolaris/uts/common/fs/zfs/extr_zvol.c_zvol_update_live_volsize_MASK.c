
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long long zv_volsize; int zv_flags; int zv_minor; int zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
typedef unsigned long long uint64_t ;
typedef int sysevent_id_t ;
typedef int nvlist_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_3 (int ,int ,int ,int ,int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,char*,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,unsigned long long) ;
 int FUNC_13 (int ,unsigned long long) ;

__attribute__((used)) static int
FUNC_14(zvol_state_t *VAR_12, uint64_t VAR_13)
{
 uint64_t VAR_14 = 0ULL;
 int VAR_15 = 0;

 FUNC_0(FUNC_1(&VAR_11));
 VAR_14 = VAR_12->zv_volsize;
 FUNC_12(VAR_12, VAR_13);
 return (VAR_15);
}
