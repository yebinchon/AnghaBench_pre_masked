
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int uint64_t ;
struct TYPE_5__ {int lr_length; int lr_offset; } ;
typedef TYPE_2__ lr_truncate_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, void *VAR_2, boolean_t VAR_3)
{
 zvol_state_t *VAR_4 = VAR_1;
 lr_truncate_t *VAR_5 = VAR_2;
 uint64_t VAR_6, VAR_7;

 if (VAR_3)
  FUNC_0(VAR_5, sizeof (*VAR_5));

 VAR_6 = VAR_5->lr_offset;
 VAR_7 = VAR_5->lr_length;

 return (FUNC_1(VAR_4->zv_objset, VAR_0, VAR_6, VAR_7));
}
