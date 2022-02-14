
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_9__ {int out; } ;
typedef TYPE_2__ apr_proc_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 char const* FUNC_1 (int *,char*,char const*,char*,char const*,char*,...) ;
 char* FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (int **,int ,int ,int ,int *) ;
 int * FUNC_7 (TYPE_2__*,int *,char const* const,char const* const*,int *,scalar_t__,scalar_t__,int *,int ,int *,scalar_t__,int *,int *) ;
 int * FUNC_8 (TYPE_2__*,char*,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ,int *) ;
 int * FUNC_11 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;

__attribute__((used)) static const char *
FUNC_12(apr_pool_t *VAR_7)
{
  static const char *const VAR_8[3] =
    {
      "/usr/bin/lsb_release",
      "--all",
      ((void*)0)
    };

  const char *VAR_9 = ((void*)0);
  const char *VAR_10 = ((void*)0);
  const char *VAR_11 = ((void*)0);
  const char *VAR_12 = ((void*)0);

  apr_proc_t VAR_13;
  svn_stream_t *VAR_14;
  svn_error_t *VAR_15;


  {
    apr_file_t *VAR_16;
    apr_file_t *VAR_17;

    VAR_15 = FUNC_6(&VAR_16, VAR_5,
                           VAR_1, VAR_0, VAR_7);
    if (!VAR_15)
      VAR_15 = FUNC_6(&VAR_17, VAR_5,
                             VAR_2, VAR_0, VAR_7);
    if (!VAR_15)
      VAR_15 = FUNC_7(&VAR_13, ((void*)0), VAR_8[0], VAR_8, ((void*)0), VAR_3,
                              VAR_3, VAR_16,
                              VAR_6, ((void*)0),
                              VAR_3, VAR_17,
                              VAR_7);
    if (VAR_15)
      {
        FUNC_4(VAR_15);
        return ((void*)0);
      }
  }


  VAR_14 = FUNC_10(VAR_13.out, VAR_6, VAR_7);
  if (VAR_14)
    {
      for (;;)
        {
          svn_boolean_t VAR_18 = VAR_3;
          svn_stringbuf_t *VAR_19;
          const char *VAR_20;

          VAR_15 = FUNC_11(VAR_14, &VAR_19, "\n", &VAR_18, VAR_7);
          if (VAR_15 || VAR_18)
            break;

          VAR_20 = FUNC_2(VAR_19, ':');
          if (!VAR_20)
            continue;

          if (0 == FUNC_3(VAR_20, "Distributor ID"))
            VAR_9 = VAR_19->data;
          else if (0 == FUNC_3(VAR_20, "Description"))
            VAR_10 = VAR_19->data;
          else if (0 == FUNC_3(VAR_20, "Release"))
            VAR_11 = VAR_19->data;
          else if (0 == FUNC_3(VAR_20, "Codename"))
            VAR_12 = VAR_19->data;
        }
      VAR_15 = FUNC_5(VAR_15,
                                     FUNC_9(VAR_14));
      if (VAR_15)
        {
          FUNC_4(VAR_15);
          FUNC_0(&VAR_13, VAR_4);
          return ((void*)0);
        }
    }


  VAR_15 = FUNC_8(&VAR_13, "", ((void*)0), ((void*)0), VAR_7);
  if (VAR_15)
    {
      FUNC_4(VAR_15);
      return ((void*)0);
    }

  if (VAR_10)
    return FUNC_1(VAR_7, "%s%s%s%s", VAR_10,
                        (VAR_12 ? " (" : ""),
                        (VAR_12 ? VAR_12 : ""),
                        (VAR_12 ? ")" : ""));
  if (VAR_9)
    return FUNC_1(VAR_7, "%s%s%s%s%s%s", VAR_9,
                        (VAR_11 ? " " : ""),
                        (VAR_11 ? VAR_11 : ""),
                        (VAR_12 ? " (" : ""),
                        (VAR_12 ? VAR_12 : ""),
                        (VAR_12 ? ")" : ""));

  return ((void*)0);
}
