
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_4__ {scalar_t__ sequence_number; } ;
struct TYPE_5__ {TYPE_1__ access; } ;
typedef TYPE_2__ limited_rights_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(const limited_rights_t *VAR_1)
{
  return VAR_1->access.sequence_number != VAR_0;
}
