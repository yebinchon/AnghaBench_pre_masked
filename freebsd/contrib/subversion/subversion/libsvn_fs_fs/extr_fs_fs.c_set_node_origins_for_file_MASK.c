
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_13__ {int path; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_14__ {int number; } ;
typedef TYPE_3__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int **,char const*,int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char const*,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int * FUNC_9 (int ,int *,int ,char*,int ,int ) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int *,int *,int ,int *) ;
 int VAR_5 ;
 int * FUNC_12 (char const*,char const*,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char const**,int ,int ,int *,int *) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_fs_t *VAR_6,
                          const char *VAR_7,
                          const svn_fs_fs__id_part_t *VAR_8,
                          svn_string_t *VAR_9,
                          apr_pool_t *VAR_10)
{
  const char *VAR_11;
  svn_stream_t *VAR_12;
  apr_hash_t *VAR_13;
  svn_string_t *VAR_14;


  char VAR_15[VAR_4];
  apr_size_t VAR_16 = FUNC_6(VAR_15, VAR_8->number);

  FUNC_0(FUNC_10(FUNC_8(VAR_6->path,
                                                       VAR_1,
                                                       VAR_10),
                                       VAR_6->path, VAR_10));



  FUNC_0(FUNC_5(VAR_6, &VAR_13,
                                     VAR_7, VAR_10));
  if (! VAR_13)
    VAR_13 = FUNC_3(VAR_10);

  VAR_14 = FUNC_2(VAR_13, VAR_15, VAR_16);

  if (VAR_14 && !FUNC_15(VAR_9, VAR_14))
    return FUNC_9(VAR_2, ((void*)0),
                             FUNC_1("Node origin for '%s' exists with a different "
                               "value (%s) than what we were about to store "
                               "(%s)"),
                             VAR_15, VAR_14->data,
                             VAR_9->data);

  FUNC_4(VAR_13, VAR_15, VAR_16, VAR_9);
  FUNC_0(FUNC_14(&VAR_12, &VAR_11,
                                 FUNC_7(VAR_7, VAR_10),
                                 VAR_5, VAR_10, VAR_10));
  FUNC_0(FUNC_11(VAR_13, VAR_12, VAR_3, VAR_10));
  FUNC_0(FUNC_13(VAR_12));


  return FUNC_12(VAR_11, VAR_7, VAR_0, VAR_10);
}
