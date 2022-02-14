
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int pool; TYPE_3__* fs; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_26__ {int data; int len; } ;
typedef TYPE_2__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_27__ {int path; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_28__ {char const* txn_id; } ;
typedef TYPE_4__ revision_t ;
typedef int noderev ;
struct TYPE_29__ {char* created_path; int kind; } ;
typedef TYPE_5__ node_revision_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int ,int ,int ) ;
 int * FUNC_7 (char*,char*,char*,int ) ;
 int * FUNC_8 (TYPE_3__*,int ,int ,int *,TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_3__*,char const*,scalar_t__,TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_3__*,char const*,int *,int *,int *,int ,TYPE_1__*,int ) ;
 int FUNC_11 (char const**,TYPE_3__*,int *,TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_3__*,int *,TYPE_5__*,TYPE_1__*,int ) ;
 int FUNC_13 (scalar_t__*,TYPE_3__*,TYPE_4__*,TYPE_1__*,int ) ;
 int FUNC_14 (char const**,TYPE_3__*,TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_16(void *VAR_5,
                     trail_t *VAR_6)
{
  node_revision_t VAR_7;
  revision_t VAR_8;
  svn_revnum_t VAR_9 = VAR_1;
  svn_fs_t *VAR_10 = VAR_6->fs;
  svn_string_t VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  svn_fs_id_t *VAR_14 = FUNC_7("0", "0", "0", VAR_6->pool);


  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.kind = VAR_4;
  VAR_7.created_path = "/";
  FUNC_0(FUNC_12(VAR_10, VAR_14, &VAR_7,
                                        VAR_6, VAR_6->pool));


  FUNC_0(FUNC_11(&VAR_12, VAR_10, VAR_14, VAR_6, VAR_6->pool));
  if (FUNC_4(VAR_12, "0"))
    return FUNC_6
      (VAR_0, 0,
       FUNC_1("Corrupt DB: initial transaction id not '0' in filesystem '%s'"),
       VAR_10->path);


  FUNC_0(FUNC_14(&VAR_13, VAR_10, VAR_6, VAR_6->pool));
  if (FUNC_4(VAR_13, "0"))
    return FUNC_6
      (VAR_0, 0,
       FUNC_1("Corrupt DB: initial copy id not '0' in filesystem '%s'"), VAR_10->path);
  FUNC_0(FUNC_10(VAR_10, VAR_13, ((void*)0), ((void*)0), VAR_14,
                                  VAR_3, VAR_6, VAR_6->pool));


  VAR_8.txn_id = VAR_12;
  FUNC_0(FUNC_13(&VAR_9, VAR_10, &VAR_8, VAR_6, VAR_6->pool));
  if (VAR_9 != 0)
    return FUNC_6(VAR_0, 0,
                             FUNC_1("Corrupt DB: initial revision number "
                               "is not '0' in filesystem '%s'"), VAR_10->path);


  FUNC_0(FUNC_9(VAR_10, VAR_12, VAR_9,
                                          VAR_6, VAR_6->pool));


  VAR_11.data = FUNC_15(FUNC_2(), VAR_6->pool);
  VAR_11.len = FUNC_5(VAR_11.data);
  return FUNC_8(VAR_10, 0, VAR_2, ((void*)0), &VAR_11,
                                   VAR_6, VAR_6->pool);
}
