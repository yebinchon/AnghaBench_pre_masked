
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ section; int sections; int parser_pool; scalar_t__ parsing_groups; int current_acl; } ;
typedef TYPE_2__ ctor_baton_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(ctor_baton_t *VAR_3, svn_stringbuf_t *VAR_4)
{
  FUNC_0(!VAR_3->current_acl && !VAR_3->section);
  if (FUNC_2(VAR_3->sections, VAR_4->data, VAR_4->len))
    {
      if (VAR_3->parsing_groups)
        return FUNC_4(
            VAR_0, ((void*)0),
            FUNC_1("Section appears more than once"
              " in the global groups file: [%s]"),
            VAR_4->data);
      else
        return FUNC_4(
            VAR_0, ((void*)0),
            FUNC_1("Section appears more than once"
              " in the authz file: [%s]"),
            VAR_4->data);
    }

  VAR_3->section = FUNC_3(VAR_3->parser_pool, VAR_4->data, VAR_4->len);
  FUNC_5(VAR_3->sections, VAR_3->section, VAR_2);
  return VAR_1;
}
