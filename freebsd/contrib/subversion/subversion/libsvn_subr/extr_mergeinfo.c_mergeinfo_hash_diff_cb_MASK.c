
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ nelts; } ;
typedef TYPE_1__ svn_rangelist_t ;
typedef int svn_error_t ;
struct mergeinfo_diff_baton {int pool; scalar_t__ added; int to; scalar_t__ deleted; int from; int consider_inheritance; } ;
typedef enum svn_hash_diff_key_status { ____Placeholder_svn_hash_diff_key_status } svn_hash_diff_key_status ;
typedef int apr_ssize_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__**,TYPE_1__**,TYPE_1__*,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const void *VAR_4, apr_ssize_t VAR_5,
                       enum svn_hash_diff_key_status VAR_6,
                       void *VAR_7)
{


  struct mergeinfo_diff_baton *VAR_8 = VAR_7;
  svn_rangelist_t *VAR_9, *VAR_10;
  const char *VAR_11 = VAR_4;
  if (VAR_6 == VAR_3)
    {

      svn_rangelist_t *VAR_12, *VAR_13;
      VAR_9 = FUNC_1(VAR_8->from, VAR_11, VAR_5);
      VAR_10 = FUNC_1(VAR_8->to, VAR_11, VAR_5);
      FUNC_0(FUNC_4(&VAR_12, &VAR_13,
                                 VAR_9, VAR_10,
                                 VAR_8->consider_inheritance, VAR_8->pool));
      if (VAR_8->deleted && VAR_12->nelts > 0)
        FUNC_2(VAR_8->deleted, FUNC_3(VAR_8->pool, VAR_11, VAR_5),
                     VAR_5, VAR_12);
      if (VAR_8->added && VAR_13->nelts > 0)
        FUNC_2(VAR_8->added, FUNC_3(VAR_8->pool, VAR_11, VAR_5),
                     VAR_5, VAR_13);
    }
  else if ((VAR_6 == VAR_1) && VAR_8->deleted)
    {
      VAR_9 = FUNC_1(VAR_8->from, VAR_11, VAR_5);
      FUNC_2(VAR_8->deleted, FUNC_3(VAR_8->pool, VAR_11, VAR_5), VAR_5,
                   FUNC_5(VAR_9, VAR_8->pool));
    }
  else if ((VAR_6 == VAR_2) && VAR_8->added)
    {
      VAR_10 = FUNC_1(VAR_8->to, VAR_11, VAR_5);
      FUNC_2(VAR_8->added, FUNC_3(VAR_8->pool, VAR_11, VAR_5), VAR_5,
                   FUNC_5(VAR_10, VAR_8->pool));
    }
  return VAR_0;
}
