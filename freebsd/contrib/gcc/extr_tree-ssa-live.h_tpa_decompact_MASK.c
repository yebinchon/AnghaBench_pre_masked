
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* tpa_p ;
struct TYPE_3__ {int uncompressed_num; int num_trees; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(tpa_p VAR_0)
{
  FUNC_0 (VAR_0->uncompressed_num != -1);
  VAR_0->num_trees = VAR_0->uncompressed_num;
}
