
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ stmt_vec_info ;
typedef TYPE_2__* stmt_ann_t ;
struct TYPE_4__ {char* aux; } ;
struct TYPE_5__ {TYPE_1__ common; } ;



__attribute__((used)) static inline void
FUNC_0 (stmt_ann_t VAR_0, stmt_vec_info VAR_1)
{
  if (VAR_0)
    VAR_0->common.aux = (char *) VAR_1;
}
