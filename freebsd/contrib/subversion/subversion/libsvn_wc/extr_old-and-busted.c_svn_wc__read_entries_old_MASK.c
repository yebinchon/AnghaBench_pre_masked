
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int name; } ;
typedef TYPE_1__ svn_wc_entry_t ;
struct TYPE_14__ {char* data; int len; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_15__ {int apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int *,int ) ;
 char* FUNC_4 (char*,float,int) ;
 int FUNC_5 (char const*,int *,char*,int,int *,int *) ;
 TYPE_3__* FUNC_6 (TYPE_1__**,char**,char const*,int,int *) ;
 int FUNC_7 (char const**,char**,char const*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char const*,int *) ;
 TYPE_3__* FUNC_11 (int ,int *,int ) ;
 TYPE_3__* FUNC_12 (int ,TYPE_3__*,int ,int,...) ;
 TYPE_3__* FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,TYPE_1__*) ;
 int FUNC_15 (TYPE_2__**,int *,int ,int *) ;
 int FUNC_16 (int **,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_17(apr_hash_t **VAR_3,
                         const char *VAR_4,
                         apr_pool_t *VAR_5,
                         apr_pool_t *VAR_6)
{
  char *VAR_7;
  const char *VAR_8;
  svn_wc_entry_t *VAR_9;
  svn_stream_t *VAR_10;
  svn_string_t *VAR_11;

  *VAR_3 = FUNC_2(VAR_5);


  FUNC_0(FUNC_16(&VAR_10, VAR_4, VAR_1,
                                  VAR_6, VAR_6));
  FUNC_0(FUNC_15(&VAR_11, VAR_10, VAR_2,
                                  VAR_6));


  VAR_7 = (char *)VAR_11->data;
  VAR_8 = VAR_11->data + VAR_11->len;



  if (VAR_7 != VAR_8 && !FUNC_9(*VAR_7))
    FUNC_0(FUNC_5(VAR_4, *VAR_3, VAR_11->data, VAR_11->len,
                              VAR_5, VAR_6));
  else
    {
      int VAR_12, VAR_13;
      const char *VAR_14;




      FUNC_0(FUNC_7(&VAR_14, &VAR_7, VAR_8));
      if (VAR_14)
        VAR_13 = (int)FUNC_3(VAR_14, ((void*)0), 0);
      else
        return FUNC_12(VAR_0, ((void*)0),
                                 FUNC_1("Invalid version line in entries file "
                                   "of '%s'"),
                                 FUNC_10(VAR_4,
                                                        VAR_6));
      VAR_12 = 1;

      while (VAR_7 != VAR_8)
        {
          svn_error_t *VAR_15 = FUNC_6(&VAR_9, &VAR_7, VAR_8,
                                        VAR_13, VAR_5);
          if (! VAR_15)
            {


              VAR_7 = FUNC_4(VAR_7, '\f', VAR_8 - VAR_7);
              if (! VAR_7)
                VAR_15 = FUNC_11(VAR_0, ((void*)0),
                                       FUNC_1("Missing entry terminator"));
              if (! VAR_15 && (VAR_7 == VAR_8 || *(++VAR_7) != '\n'))
                VAR_15 = FUNC_11(VAR_0, ((void*)0),
                                       FUNC_1("Invalid entry terminator"));
            }
          if (VAR_15)
            return FUNC_12(VAR_15->apr_err, VAR_15,
                                     FUNC_1("Error at entry %d in entries file for "
                                       "'%s':"),
                                     VAR_12,
                                     FUNC_10(VAR_4,
                                                            VAR_6));

          ++VAR_7;
          ++VAR_12;

          FUNC_14(*VAR_3, VAR_9->name, VAR_9);
        }
    }


  return FUNC_13(FUNC_8(*VAR_3, VAR_5));
}
