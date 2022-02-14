
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ filetype; int protection; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef int apr_fileperms_t ;
typedef int apr_fileattrs_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int * VAR_15 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*,int,int *) ;
 int FUNC_8 (char const**,char const*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (char const*,int *) ;
 int * FUNC_11 (scalar_t__,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char *VAR_16,
                  svn_boolean_t VAR_17,
                  svn_boolean_t VAR_18,
                  svn_boolean_t VAR_19,
                  svn_boolean_t VAR_20,
                  svn_boolean_t VAR_21,
                  apr_pool_t *VAR_22)
{
  apr_status_t VAR_23;
  const char *VAR_24;
  apr_finfo_t VAR_25;
  apr_fileperms_t VAR_26;

  FUNC_2(FUNC_8(&VAR_24, VAR_16, VAR_22));





  VAR_23 = FUNC_7(&VAR_25, VAR_24, VAR_4 | VAR_3, VAR_22);
  if (VAR_23)
    {
      if (VAR_21 && (FUNC_0(VAR_23)
                            || FUNC_3(VAR_23)))
        return VAR_15;
      else if (VAR_23 != VAR_0)
        return FUNC_11(VAR_23,
                                  FUNC_4("Can't change perms of file '%s'"),
                                  FUNC_10(VAR_16, VAR_22));
      return VAR_15;
    }

  if (VAR_25.filetype == VAR_8)
    return VAR_15;

  VAR_26 = VAR_25.protection;
  if (VAR_17)
    {
      if (VAR_18)
        {


          VAR_26 |= (VAR_10|VAR_11);
        }
      else
        {
          if (VAR_25.protection & VAR_10)
            VAR_26 &= ~VAR_11;
          if (VAR_25.protection & VAR_6)
            VAR_26 &= ~VAR_7;
          if (VAR_25.protection & VAR_13)
            VAR_26 &= ~VAR_14;
        }
    }

  if (VAR_19)
    {
      if (VAR_20)
        {
          if (VAR_25.protection & VAR_10)
            VAR_26 |= VAR_9;
          if (VAR_25.protection & VAR_6)
            VAR_26 |= VAR_5;
          if (VAR_25.protection & VAR_13)
            VAR_26 |= VAR_12;
        }
      else
        {
          if (VAR_25.protection & VAR_10)
            VAR_26 &= ~VAR_9;
          if (VAR_25.protection & VAR_6)
            VAR_26 &= ~VAR_5;
          if (VAR_25.protection & VAR_13)
            VAR_26 &= ~VAR_12;
        }
    }



  if (VAR_26 == VAR_25.protection)
    return VAR_15;

  VAR_23 = FUNC_6(VAR_24, VAR_26);
  if (!VAR_23)
    return VAR_15;

  if (FUNC_1(VAR_23))
    {
      FUNC_2(FUNC_9(VAR_16, VAR_22));
      VAR_23 = FUNC_6(VAR_24, VAR_26);
    }

  if (!VAR_23)
    return VAR_15;

  if (VAR_21 && FUNC_0(VAR_23))
    return VAR_15;
  else if (VAR_23 == VAR_0)
    {

      apr_fileattrs_t VAR_27 = 0;
      apr_fileattrs_t VAR_28 = 0;

      if (VAR_17)
        {
          VAR_27 = VAR_2;
          if (!VAR_18)
            VAR_28 = VAR_2;
        }
      if (VAR_19)
        {
          VAR_27 = VAR_1;
          if (VAR_20)
            VAR_28 = VAR_1;
        }
      VAR_23 = FUNC_5(VAR_24, VAR_27, VAR_28, VAR_22);
    }

  return FUNC_11(VAR_23,
                            FUNC_4("Can't change perms of file '%s'"),
                            FUNC_10(VAR_16, VAR_22));
}
