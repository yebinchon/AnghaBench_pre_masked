
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int parser_pool; int parsed_rules; TYPE_2__* rule_string_buffer; } ;
typedef TYPE_3__ ctor_baton_t ;
struct TYPE_15__ {int len; TYPE_5__* path; int repos; } ;
typedef TYPE_4__ authz_rule_t ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_16__ {char kind; TYPE_1__ pattern; } ;
typedef TYPE_5__ authz_rule_segment_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ,int ) ;
 int * FUNC_5 (int ,int *,int ,char const*,char const*) ;
 int FUNC_6 (TYPE_2__* const,char) ;
 int FUNC_7 (TYPE_2__* const,int ,int ) ;
 int FUNC_8 (TYPE_2__* const,int ) ;
 int FUNC_9 (TYPE_2__* const) ;

__attribute__((used)) static svn_error_t *
FUNC_10(ctor_baton_t *VAR_2,
                  const authz_rule_t *VAR_3,
                  const char *VAR_4)
{
  svn_stringbuf_t *const VAR_5 = VAR_2->rule_string_buffer;
  const char *VAR_6;
  int VAR_7;


  FUNC_9(VAR_5);
  FUNC_8(VAR_5, VAR_3->repos);
  FUNC_6(VAR_5, '\n');

  for (VAR_7 = 0; VAR_7 < VAR_3->len; ++VAR_7)
    {
      authz_rule_segment_t *const VAR_8 = &VAR_3->path[VAR_7];
      FUNC_6(VAR_5, '@' + VAR_8->kind);
      FUNC_7(VAR_5, VAR_8->pattern.data, VAR_8->pattern.len);
      FUNC_6(VAR_5, '\n');
    }


  VAR_6 = FUNC_1(VAR_2->parsed_rules, VAR_5->data, VAR_5->len);
  if (VAR_6)
    return FUNC_5(
        VAR_0, ((void*)0),
        FUNC_0("Section [%s] describes the same rule as section [%s]"),
        VAR_4, VAR_6);


  FUNC_2(VAR_2->parsed_rules,
               FUNC_4(VAR_2->parser_pool, VAR_5->data, VAR_5->len),
               VAR_5->len,
               FUNC_3(VAR_2->parser_pool, VAR_4));

  return VAR_1;
}
