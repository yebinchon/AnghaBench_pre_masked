
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* svn_boolean_t ;
struct translation_baton {char const* eol_str; void** translated_eol; void** interesting; int nl_translation_skippable; scalar_t__ src_format_len; scalar_t__ keyword_off; scalar_t__ newline_off; void* expand; int * keywords; void* repair; int eol_str_len; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct translation_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (void**,int ,int) ;
 int FUNC_3 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static struct translation_baton *
FUNC_4(const char *VAR_3,
                         svn_boolean_t *VAR_4,
                         svn_boolean_t VAR_5,
                         apr_hash_t *VAR_6,
                         svn_boolean_t VAR_7,
                         apr_pool_t *VAR_8)
{
  struct translation_baton *VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9));


  if (VAR_6 && (FUNC_0(VAR_6) == 0))
    VAR_6 = ((void*)0);

  VAR_9->eol_str = VAR_3;
  VAR_9->eol_str_len = VAR_3 ? FUNC_3(VAR_3) : 0;
  VAR_9->translated_eol = VAR_4;
  VAR_9->repair = VAR_5;
  VAR_9->keywords = VAR_6;
  VAR_9->expand = VAR_7;
  VAR_9->newline_off = 0;
  VAR_9->keyword_off = 0;
  VAR_9->src_format_len = 0;
  VAR_9->nl_translation_skippable = VAR_2;



  FUNC_2(VAR_9->interesting, VAR_0, sizeof(VAR_9->interesting));
  if (VAR_6)
    VAR_9->interesting['$'] = VAR_1;
  if (VAR_3)
    {
      VAR_9->interesting['\r'] = VAR_1;
      VAR_9->interesting['\n'] = VAR_1;
    }

  return VAR_9;
}
