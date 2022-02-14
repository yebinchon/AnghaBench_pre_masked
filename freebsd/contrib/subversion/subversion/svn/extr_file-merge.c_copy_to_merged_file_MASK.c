
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_linenum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__**,char const**,scalar_t__*,int ,int *,int *) ;
 int FUNC_4 (int *,int ,scalar_t__,scalar_t__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_linenum_t *VAR_3,
                    apr_file_t *VAR_4,
                    apr_file_t *VAR_5,
                    apr_off_t VAR_6,
                    apr_off_t VAR_7,
                    svn_linenum_t VAR_8,
                    apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10;
  svn_stringbuf_t *VAR_11;
  apr_size_t VAR_12;
  apr_size_t VAR_13;
  svn_boolean_t VAR_14;
  svn_linenum_t VAR_15 = VAR_8;

  VAR_12 = 0;
  VAR_10 = FUNC_6(VAR_9);
  while (VAR_8 < VAR_6)
    {
      FUNC_5(VAR_10);

      FUNC_0(FUNC_3(VAR_5, &VAR_11, ((void*)0), &VAR_14,
                                   VAR_0, VAR_10, VAR_10));
      if (VAR_14)
        break;

      VAR_8++;
      VAR_12++;
    }

  VAR_13 = 0;
  while (VAR_13 < VAR_7)
    {
      apr_size_t VAR_16;
      const char *VAR_17;

      FUNC_5(VAR_10);

      FUNC_0(FUNC_3(VAR_5, &VAR_11, &VAR_17, &VAR_14,
                                   VAR_0, VAR_10, VAR_10));
      if (VAR_17)
        FUNC_8(VAR_11, VAR_17);
      FUNC_0(FUNC_4(VAR_4, VAR_11->data, VAR_11->len,
                                     &VAR_16, VAR_10));
      if (VAR_16 != VAR_11->len)
        return FUNC_2(VAR_1, ((void*)0),
                                FUNC_1("Could not write data to merged file"));
      if (VAR_14)
        break;
      VAR_13++;
    }
  FUNC_7(VAR_10);

  *VAR_3 = VAR_15 + VAR_12 + VAR_13;

  return VAR_2;
}
