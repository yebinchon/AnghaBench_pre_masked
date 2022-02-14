
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_7__ {scalar_t__ parsing_groups; int in_groups; } ;
typedef TYPE_2__ ctor_baton_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__* const,TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_4, svn_stringbuf_t *VAR_5)
{
  ctor_baton_t *const VAR_6 = VAR_4;

  if (VAR_6->parsing_groups)
    FUNC_0(FUNC_2(VAR_6, VAR_5));

  if (0 == FUNC_3(VAR_5->data, VAR_3))
    {
      VAR_6->in_groups = VAR_2;
      return VAR_1;
    }

  return FUNC_4(
      VAR_0, ((void*)0),
      (VAR_6->parsing_groups
       ? FUNC_1("Section is not valid in the global group file: [%s]")
       : FUNC_1("Section is not valid in the authz file: [%s]")),
      VAR_5->data);
}
