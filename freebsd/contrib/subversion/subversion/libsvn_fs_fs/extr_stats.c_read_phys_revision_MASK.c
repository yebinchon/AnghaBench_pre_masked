
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ len; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_error_t ;
struct TYPE_15__ {scalar_t__ offset; scalar_t__ end; scalar_t__ changes_len; int revision; TYPE_1__* rev_file; } ;
typedef TYPE_3__ revision_info_t ;
typedef int query_t ;
typedef int buf ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;
struct TYPE_13__ {int file; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,TYPE_3__*,int *) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_2__**,int *,scalar_t__,TYPE_3__*,int *,int *) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (int ,char*,int ,int *,int *,int *) ;
 int FUNC_8 (int ,int ,scalar_t__*,int *) ;
 TYPE_2__* FUNC_9 (char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(query_t *VAR_2,
                   revision_info_t *VAR_3,
                   apr_pool_t *VAR_4,
                   apr_pool_t *VAR_5)
{
  char VAR_6[64];
  apr_off_t VAR_7;
  apr_off_t VAR_8;
  svn_stringbuf_t *VAR_9;
  svn_stringbuf_t *VAR_10;


  apr_off_t VAR_11 = FUNC_0(VAR_3->offset, VAR_3->end - sizeof(VAR_6));
  apr_size_t VAR_12 = (apr_size_t)(VAR_3->end - VAR_11);
  FUNC_1(FUNC_8(VAR_3->rev_file->file, VAR_0, &VAR_11,
                           VAR_5));
  FUNC_1(FUNC_7(VAR_3->rev_file->file, VAR_6, VAR_12, ((void*)0), ((void*)0),
                                 VAR_5));
  VAR_9 = FUNC_9(VAR_6, VAR_12, VAR_5);


  FUNC_1(FUNC_5(&VAR_7,
                                            &VAR_8, VAR_9,
                                            VAR_3->revision));
  FUNC_1(FUNC_2(VAR_2, VAR_3, VAR_5));


  VAR_9 = FUNC_6(VAR_7,
                                                VAR_8,
                                                VAR_5);
  VAR_3->changes_len = VAR_3->end - VAR_3->offset - VAR_8
                    - VAR_9->len;


  FUNC_1(FUNC_4(&VAR_10, VAR_2, VAR_7, VAR_3,
                            VAR_5, VAR_5));
  FUNC_1(FUNC_3(VAR_2, VAR_10, VAR_3, VAR_4, VAR_5));

  return VAR_1;
}
