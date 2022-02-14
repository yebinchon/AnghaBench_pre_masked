
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int revprops; } ;
typedef TYPE_1__ packed_revprops_t ;
typedef int apr_size_t ;
struct TYPE_5__ {int len; } ;


 TYPE_3__ FUNC_0 (int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static apr_size_t
FUNC_1(packed_revprops_t *VAR_1,
          int VAR_2)
{
  return FUNC_0(VAR_1->revprops, VAR_2, VAR_0).len;
}
