
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {void* number; } ;
struct TYPE_13__ {TYPE_1__ value; void* kind; } ;
struct TYPE_14__ {char const* file_external_path; TYPE_2__ file_external_rev; TYPE_2__ file_external_peg_rev; } ;
typedef TYPE_3__ svn_wc_entry_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef void* svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* FUNC_3 (scalar_t__*,scalar_t__*,int *,int *,int *,char const**,void**,void**,int *,char const*,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc_entry_t *VAR_5,
                    svn_wc__db_t *VAR_6,
                    const char *VAR_7,
                    const char *VAR_8,
                    apr_pool_t *VAR_9,
                    apr_pool_t *VAR_10)
{
  svn_wc__db_status_t VAR_11;
  svn_node_kind_t VAR_12;
  const char *VAR_13;
  svn_revnum_t VAR_14;
  svn_revnum_t VAR_15;
  svn_error_t *VAR_16;

  VAR_16 = FUNC_3(&VAR_11, &VAR_12, ((void*)0), ((void*)0), ((void*)0),
                                 &VAR_13, &VAR_14, &VAR_15,
                                 VAR_6, VAR_7, VAR_8,
                                 VAR_9, VAR_10);

  if (VAR_16)
    {
      if (VAR_16->apr_err != VAR_0)
        return FUNC_2(VAR_16);

      FUNC_1(VAR_16);
      return VAR_1;
    }

  if (VAR_11 == VAR_4
      && VAR_12 == VAR_2)
    {
      VAR_5->file_external_path = VAR_13;
      if (FUNC_0(VAR_14))
        {
          VAR_5->file_external_peg_rev.kind = VAR_3;
          VAR_5->file_external_peg_rev.value.number = VAR_14;
          VAR_5->file_external_rev = VAR_5->file_external_peg_rev;
        }
      if (FUNC_0(VAR_15))
        {
          VAR_5->file_external_rev.kind = VAR_3;
          VAR_5->file_external_rev.value.number = VAR_15;
        }
    }

  return VAR_1;
}
