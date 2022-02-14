
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct TYPE_21__ {char const* data; int len; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_18__ {int const size; TYPE_5__* data; } ;
struct TYPE_22__ {TYPE_12__ rule_path_buffer; TYPE_1__* authz; TYPE_2__* rule_string_buffer; } ;
typedef TYPE_3__ ctor_baton_t ;
struct TYPE_23__ {int len; int * path; } ;
typedef TYPE_4__ authz_rule_t ;
struct TYPE_19__ {scalar_t__ len; int data; } ;
struct TYPE_24__ {scalar_t__ kind; TYPE_17__ pattern; } ;
typedef TYPE_5__ authz_rule_segment_t ;
typedef int apr_size_t ;
struct TYPE_20__ {int pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * FUNC_3 (int ,int const) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_3__*,TYPE_17__*,char const*,int) ;
 int VAR_8 ;
 char* FUNC_5 (char const*,char,int) ;
 int FUNC_6 (int *,TYPE_5__*,int const) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int ,int *,int ) ;
 int * FUNC_9 (int ,int ,int ,char const*,char const*) ;
 int FUNC_10 (TYPE_12__*,int) ;
 int FUNC_11 (TYPE_2__* const,char) ;
 int FUNC_12 (TYPE_2__* const,char const*,int) ;
 int FUNC_13 (TYPE_2__* const,int) ;
 int FUNC_14 (TYPE_2__* const,int) ;
 int FUNC_15 (TYPE_2__* const) ;
 int FUNC_16 (TYPE_2__* const) ;

__attribute__((used)) static svn_error_t *
FUNC_17(authz_rule_t *VAR_9,
                ctor_baton_t *VAR_10,
                svn_boolean_t VAR_11,
                const char *VAR_12,
                apr_size_t VAR_13,
                const char *VAR_14)
{
  svn_stringbuf_t *const VAR_15 = VAR_10->rule_string_buffer;
  const char *const VAR_16 = VAR_12 + VAR_13;
  authz_rule_segment_t *VAR_17;
  const char *VAR_18;
  const char *VAR_19;
  int VAR_20;

  FUNC_0(*VAR_12 == '/');

  VAR_20 = 0;
  for (VAR_18 = VAR_12; VAR_18 != VAR_16; VAR_18 = VAR_19)
    {
      apr_size_t VAR_21;


      VAR_19 = FUNC_5(++VAR_18, '/', VAR_13 - 1);
      if (!VAR_19)
        VAR_19 = VAR_16;

      VAR_21 = VAR_19 - VAR_18;
      VAR_13 -= VAR_21 + 1;

      if (VAR_21 == 0)
        {
          if (VAR_20 == 0)
            {

              VAR_9->len = 0;
              VAR_9->path = ((void*)0);
              return VAR_1;
            }


          return FUNC_9(
              VAR_0,
              FUNC_8(VAR_0, ((void*)0),
                               FUNC_1("Found empty name in authz rule path")),
              FUNC_1("Non-canonical path '%s' in authz rule [%s]"),
              VAR_12, VAR_14);
        }


      if (*VAR_18 == '.'
          && (VAR_21 == 1
              || (VAR_21 == 2 && VAR_18[1] == '.')))
        return FUNC_9(
            VAR_0,
            (VAR_19 == VAR_18 + 1
             ? FUNC_8(VAR_0, ((void*)0),
                                FUNC_1("Found '.' in authz rule path"))
             : FUNC_8(VAR_0, ((void*)0),
                                FUNC_1("Found '..' in authz rule path"))),
            FUNC_1("Non-canonical path '%s' in authz rule [%s]"),
            VAR_12, VAR_14);


      ++VAR_20;
      FUNC_10(&VAR_10->rule_path_buffer, VAR_20 * sizeof(*VAR_17));
      VAR_17 = VAR_10->rule_path_buffer.data;
      VAR_17 += (VAR_20 - 1);

      if (!VAR_11)
        {


          VAR_17->kind = VAR_5;
          FUNC_4(VAR_10, &VAR_17->pattern, VAR_18, VAR_21);
          continue;
        }


      FUNC_15(VAR_15);
      FUNC_12(VAR_15, VAR_18, VAR_21);

      if (0 == FUNC_2(VAR_15->data))
        {

          VAR_17->kind = VAR_5;
          FUNC_16(VAR_15);
          FUNC_4(VAR_10, &VAR_17->pattern, VAR_15->data, VAR_15->len);
          continue;
        }

      if (*VAR_15->data == '*')
        {
          if (VAR_15->len == 1
              || (VAR_15->len == 2 && VAR_15->data[1] == '*'))
            {



              authz_rule_segment_t *const VAR_22 =
                (VAR_20 > 1 ? VAR_17 - 1 : ((void*)0));

              if (VAR_21 == 1)
                {

                  if (VAR_22 && VAR_22->kind == VAR_2)
                    {
                      VAR_22->kind = VAR_3;
                      VAR_17->kind = VAR_2;
                    }
                  else
                    VAR_17->kind = VAR_3;
                }
              else
                {

                  if (VAR_22 && VAR_22->kind == VAR_2)
                    {

                      --VAR_20;
                      continue;
                    }
                  else
                    VAR_17->kind = VAR_2;
                }

              VAR_17->pattern.data = VAR_8;
              VAR_17->pattern.len = 0;
              continue;
            }


          if (0 == FUNC_2(VAR_15->data + 1))
            {
              FUNC_14(VAR_15, 1);
              VAR_17->kind = VAR_7;
              FUNC_16(VAR_15);
              FUNC_7(VAR_15->data, VAR_15->len);
              FUNC_4(VAR_10, &VAR_17->pattern,
                             VAR_15->data, VAR_15->len);
              continue;
            }
        }

      if (VAR_15->data[VAR_15->len - 1] == '*')
        {



          if (VAR_15->data[VAR_15->len - 2] != '\\')
            {

              FUNC_13(VAR_15, 1);
              if (0 == FUNC_2(VAR_15->data))
                {
                  VAR_17->kind = VAR_6;
                  FUNC_16(VAR_15);
                  FUNC_4(VAR_10, &VAR_17->pattern,
                                 VAR_15->data, VAR_15->len);
                  continue;
                }


              FUNC_11(VAR_15, '*');
            }
        }


      VAR_17->kind = VAR_4;
      FUNC_4(VAR_10, &VAR_17->pattern, VAR_15->data, VAR_15->len);
    }

  FUNC_0(VAR_20 > 0);


  {
    const apr_size_t VAR_23 = VAR_20 * sizeof(*VAR_17);
    FUNC_0(VAR_23 <= VAR_10->rule_path_buffer.size);

    VAR_9->len = VAR_20;
    VAR_9->path = FUNC_3(VAR_10->authz->pool, VAR_23);
    FUNC_6(VAR_9->path, VAR_10->rule_path_buffer.data, VAR_23);
  }

  return VAR_1;
}
