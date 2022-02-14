
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_20__ {int date; int comment; int owner; int token; } ;
typedef TYPE_2__ svn_wc__db_lock_t ;
typedef int svn_string_t ;
struct TYPE_21__ {int creation_date; int comment; int owner; int token; } ;
typedef TYPE_3__ svn_lock_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int ,int *,int ,int ) ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (char const*,int ,int *) ;
 TYPE_4__* FUNC_10 (int ,char const*,TYPE_2__*,int *) ;
 TYPE_4__* FUNC_11 (int const**,int ,char const*,int ,int *,int *) ;
 TYPE_4__* FUNC_12 (int ,int ,int *) ;

svn_error_t *
FUNC_13(svn_wc_context_t *VAR_6,
                 const char *VAR_7,
                 const svn_lock_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_wc__db_lock_t VAR_10;
  svn_error_t *VAR_11;
  const svn_string_t *VAR_12;

  FUNC_1(FUNC_4(VAR_7));

  FUNC_0(FUNC_12(VAR_6->db,
                              FUNC_3(VAR_7, VAR_9),
                              VAR_9));

  VAR_10.token = VAR_8->token;
  VAR_10.owner = VAR_8->owner;
  VAR_10.comment = VAR_8->comment;
  VAR_10.date = VAR_8->creation_date;
  VAR_11 = FUNC_10(VAR_6->db, VAR_7, &VAR_10, VAR_9);
  if (VAR_11)
    {
      if (VAR_11->apr_err != VAR_2)
        return FUNC_8(VAR_11);


      FUNC_6(VAR_11);
      return FUNC_7(VAR_1, ((void*)0),
                               FUNC_2("'%s' is not under version control"),
                               FUNC_5(VAR_7,
                                                      VAR_9));
    }


  VAR_11 = FUNC_11(&VAR_12, VAR_6->db, VAR_7,
                                 VAR_5, VAR_9,
                                 VAR_9);

  if (VAR_11 && VAR_11->apr_err == VAR_3)
    {


      FUNC_6(VAR_11);
      return VAR_4;
    }
  FUNC_0(VAR_11);

  if (VAR_12)
    FUNC_0(FUNC_9(VAR_7, VAR_0, VAR_9));

  return VAR_4;
}
