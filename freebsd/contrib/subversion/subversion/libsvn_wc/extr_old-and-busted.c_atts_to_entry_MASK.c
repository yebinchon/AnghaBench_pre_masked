
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; scalar_t__ working_size; scalar_t__ lock_creation_date; void* lock_comment; void* lock_owner; void* lock_token; void* cmt_author; void* cmt_rev; scalar_t__ cmt_date; void* uuid; void* checksum; scalar_t__ text_time; int incomplete; int absent; int deleted; void* copyfrom_rev; void* copyfrom_url; int copied; void* conflict_wrk; void* conflict_new; void* conflict_old; void* prejfile; void* schedule; int kind; void* url; void* repos; void* revision; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 char* VAR_28 ;
 char* VAR_29 ;
 char* VAR_30 ;
 char* VAR_31 ;
 int FUNC_0 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 int * VAR_36 ;
 void* FUNC_1 (char const*) ;
 char const* VAR_37 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 char const* FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (char const*,int *,int ) ;
 int FUNC_6 (int *,int *,int ,char const*) ;
 void* FUNC_7 (int *,int ,int *) ;
 void* FUNC_8 (int *,int ,int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int * FUNC_10 (int ,int *,int ,char const*) ;
 char* FUNC_11 (int *,int ) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_12 (scalar_t__*,char const*,int *) ;
 int FUNC_13 (void*,void*) ;
 void* FUNC_14 (void*,int *) ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;

__attribute__((used)) static svn_error_t *
FUNC_15(svn_wc_entry_t **VAR_45,
              apr_hash_t *VAR_46,
              apr_pool_t *VAR_47)
{
  svn_wc_entry_t *VAR_48 = FUNC_3(VAR_47);
  const char *VAR_49;


  VAR_49 = FUNC_11(VAR_46, VAR_18);
  VAR_48->name = VAR_49 ? FUNC_4(VAR_47, VAR_49) : VAR_37;




  {
    const char *VAR_50
      = FUNC_11(VAR_46, VAR_21);

    if (VAR_50)
      VAR_48->revision = FUNC_1(VAR_50);
    else
      VAR_48->revision = VAR_35;
  }




  VAR_48->url = FUNC_7(VAR_46, VAR_24, VAR_47);
  if (VAR_48->url)
    VAR_48->url = FUNC_14(VAR_48->url, VAR_47);




  VAR_48->repos = FUNC_7(VAR_46, VAR_20, VAR_47);
  if (VAR_48->repos)
    VAR_48->repos = FUNC_14(VAR_48->repos, VAR_47);

  if (VAR_48->url && VAR_48->repos
      && !FUNC_13(VAR_48->repos, VAR_48->url))
    return FUNC_10(VAR_34, ((void*)0),
                             FUNC_2("Entry for '%s' has invalid repository "
                               "root"),
                             VAR_49 ? VAR_49 : VAR_37);



  {
    const char *VAR_51
      = FUNC_11(VAR_46, VAR_13);

    VAR_48->kind = VAR_40;
    if (VAR_51)
      {
        if (FUNC_9(VAR_51, VAR_30) == 0)
          VAR_48->kind = VAR_39;
        else if (FUNC_9(VAR_51, VAR_29) == 0)
          VAR_48->kind = VAR_38;
        else
          return FUNC_10
            (VAR_33, ((void*)0),
             FUNC_2("Entry '%s' has invalid node kind"),
             (VAR_49 ? VAR_49 : VAR_37));
      }
  }



  {
    const char *VAR_52
      = FUNC_11(VAR_46, VAR_22);

    VAR_48->schedule = VAR_43;
    if (VAR_52)
      {
        if (FUNC_9(VAR_52, VAR_27) == 0)
          VAR_48->schedule = VAR_41;
        else if (FUNC_9(VAR_52, VAR_28) == 0)
          VAR_48->schedule = VAR_42;
        else if (FUNC_9(VAR_52, VAR_31) == 0)
          VAR_48->schedule = VAR_44;
        else if (FUNC_9(VAR_52, "") == 0)
          VAR_48->schedule = VAR_43;
        else
          return FUNC_10(
                   VAR_32, ((void*)0),
                   FUNC_2("Entry '%s' has invalid 'schedule' value"),
                   (VAR_49 ? VAR_49 : VAR_37));
      }
  }


  VAR_48->prejfile = FUNC_8(VAR_46,
                                             VAR_19,
                                             VAR_47);
  VAR_48->conflict_old = FUNC_8(VAR_46,
                                                 VAR_6,
                                                 VAR_47);
  VAR_48->conflict_new = FUNC_8(VAR_46,
                                                 VAR_5,
                                                 VAR_47);
  VAR_48->conflict_wrk = FUNC_8(VAR_46,
                                                 VAR_7,
                                                 VAR_47);



  FUNC_0(FUNC_6(&VAR_48->copied, VAR_46, VAR_8, VAR_49));


  VAR_48->copyfrom_url = FUNC_7(VAR_46, VAR_10, VAR_47);


  {
    const char *VAR_53;

    VAR_53 = FUNC_11(VAR_46, VAR_9);
    if (VAR_53)
      VAR_48->copyfrom_rev = FUNC_1(VAR_53);
  }




  FUNC_0(FUNC_6(&VAR_48->deleted, VAR_46, VAR_11, VAR_49));




  FUNC_0(FUNC_6(&VAR_48->absent, VAR_46, VAR_0, VAR_49));




  FUNC_0(FUNC_6(&VAR_48->incomplete, VAR_46, VAR_12,
                       VAR_49));



  {
    const char *VAR_54;

    VAR_54 = FUNC_11(VAR_46, VAR_23);
    if (VAR_54)
      FUNC_0(FUNC_12(&VAR_48->text_time, VAR_54, VAR_47));





  }



  VAR_48->checksum = FUNC_7(VAR_46, VAR_1, VAR_47);




  VAR_48->uuid = FUNC_7(VAR_46, VAR_25, VAR_47);


  {
    const char *VAR_55, *VAR_56;

    VAR_55 = FUNC_11(VAR_46, VAR_3);
    if (VAR_55)
      {
        FUNC_0(FUNC_12(&VAR_48->cmt_date, VAR_55, VAR_47));
      }
    else
      VAR_48->cmt_date = 0;

    VAR_56 = FUNC_11(VAR_46, VAR_4);
    if (VAR_56)
      {
        VAR_48->cmt_rev = FUNC_1(VAR_56);
      }
    else
      VAR_48->cmt_rev = VAR_35;

    VAR_48->cmt_author = FUNC_7(VAR_46, VAR_2, VAR_47);
  }


  VAR_48->lock_token = FUNC_7(VAR_46, VAR_17, VAR_47);
  VAR_48->lock_owner = FUNC_7(VAR_46, VAR_16, VAR_47);
  VAR_48->lock_comment = FUNC_7(VAR_46, VAR_14, VAR_47);
  {
    const char *VAR_57 =
      FUNC_11(VAR_46, VAR_15);
    if (VAR_57)
      {
        FUNC_0(FUNC_12(&VAR_48->lock_creation_date,
                                      VAR_57, VAR_47));
      }
  }
  {
    const char *VAR_58 = FUNC_11(VAR_46, VAR_26);
    if (VAR_58)
      {

        VAR_48->working_size = (apr_off_t)FUNC_5(VAR_58, ((void*)0), 0);
      }
  }

  *VAR_45 = VAR_48;
  return VAR_36;
}
