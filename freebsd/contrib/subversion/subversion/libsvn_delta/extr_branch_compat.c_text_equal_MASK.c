
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int text; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(svn_element__payload_t *VAR_2,
           svn_element__payload_t *VAR_3)
{
  if (!VAR_2 || !VAR_3
      || VAR_2->kind != VAR_1
      || VAR_3->kind != VAR_1)
    {
      return VAR_0;
    }

  return FUNC_0(VAR_2->text,
                               VAR_3->text);
}
