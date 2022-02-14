
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parsed_acl_t ;
struct TYPE_5__ {int * parser_pool; int rule_string_buffer; int rule_path_buffer; int * current_acl; int parsed_acls; void* parsed_aliases; void* parsed_groups; void* parsed_rules; void* in_aliases; void* in_groups; void* parsing_groups; int * section; void* sections; void* strings; TYPE_2__* authz; } ;
typedef TYPE_1__ ctor_baton_t ;
struct TYPE_6__ {int * pool; void* user_rights; int authn_rights; int anon_rights; } ;
typedef TYPE_2__ authz_full_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int * const,int,int) ;
 void* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_1__* const) ;
 void* FUNC_4 (int * const) ;
 int FUNC_5 (int *,int ,int * const) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int * const) ;

__attribute__((used)) static ctor_baton_t *
FUNC_8(apr_pool_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  apr_pool_t *const VAR_5 = FUNC_6(VAR_4);
  ctor_baton_t *const VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));

  authz_full_t *const VAR_7 = FUNC_1(VAR_3, sizeof(*VAR_7));
  FUNC_2(&VAR_7->anon_rights, VAR_1, VAR_3);
  FUNC_2(&VAR_7->authn_rights, VAR_2, VAR_3);
  VAR_7->user_rights = FUNC_4(VAR_3);
  VAR_7->pool = VAR_3;

  VAR_6->authz = VAR_7;
  VAR_6->strings = FUNC_4(VAR_5);

  VAR_6->sections = FUNC_4(VAR_5);
  VAR_6->section = ((void*)0);
  VAR_6->parsing_groups = VAR_0;
  VAR_6->in_groups = VAR_0;
  VAR_6->in_aliases = VAR_0;

  VAR_6->parsed_rules = FUNC_4(VAR_5);
  VAR_6->parsed_groups = FUNC_4(VAR_5);
  VAR_6->parsed_aliases = FUNC_4(VAR_5);
  VAR_6->parsed_acls = FUNC_0(VAR_5, 64, sizeof(parsed_acl_t));
  VAR_6->current_acl = ((void*)0);

  FUNC_5(&VAR_6->rule_path_buffer, 0, VAR_5);
  VAR_6->rule_string_buffer = FUNC_7(VAR_5);

  VAR_6->parser_pool = VAR_5;

  FUNC_3(VAR_6);

  return VAR_6;
}
