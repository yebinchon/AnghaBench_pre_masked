
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sysevent_id_t ;
typedef int nvlist_t ;
typedef int evchan_t ;
struct TYPE_4__ {int ui64; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {TYPE_2__ erpt_dropped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int *,int *,int ) ;
 TYPE_3__ VAR_12 ;
 int FUNC_2 (int *,size_t*,int ) ;
 scalar_t__ FUNC_3 (int ,int **,int) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int ,int *,int) ;
 int FUNC_5 (int *) ;

void
FUNC_6(nvlist_t *VAR_13, int VAR_14)
{
 size_t VAR_15 = 0;
 evchan_t *VAR_16;
 sysevent_id_t VAR_17;

 (void) FUNC_2(VAR_13, &VAR_15, VAR_10);
 if (VAR_15 > VAR_3 || VAR_15 == 0) {
  FUNC_0(&VAR_12.erpt_dropped.value.ui64);
  return;
 }
 (void) FUNC_1(((void*)0), VAR_11, VAR_1,
     VAR_4, VAR_13, &VAR_17, VAR_0);

}
