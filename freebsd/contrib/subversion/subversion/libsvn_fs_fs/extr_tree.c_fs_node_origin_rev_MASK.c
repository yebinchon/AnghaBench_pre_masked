
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_14__ {int * fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_fs_id_t ;
struct TYPE_15__ {scalar_t__ revision; scalar_t__ number; } ;
typedef TYPE_3__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_2 (char const**,scalar_t__*,int *,TYPE_2__*,char const*,int *) ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int const*,int *) ;
 int FUNC_6 (int const**,int *) ;
 int FUNC_7 (scalar_t__*,int *,int *) ;
 int FUNC_8 (int const**,int *,TYPE_3__ const*,int *) ;
 int * FUNC_9 (int const*,int *) ;
 TYPE_3__* FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 int FUNC_12 (int const**,TYPE_2__*,char const*,int *) ;
 int FUNC_13 (TYPE_2__**,int *,scalar_t__,int *) ;
 int FUNC_14 (int *,TYPE_3__ const*,int ,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 TYPE_1__* FUNC_18 (char const*,int *) ;
 int FUNC_19 (TYPE_1__*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_20(svn_revnum_t *VAR_2,
                   svn_fs_root_t *VAR_3,
                   const char *VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_fs_t *VAR_6 = VAR_3->fs;
  const svn_fs_id_t *VAR_7, *VAR_8;
  const svn_fs_fs__id_part_t *VAR_9;

  VAR_4 = FUNC_3(VAR_4, VAR_5);


  FUNC_0(FUNC_12(&VAR_7, VAR_3, VAR_4, VAR_5));
  VAR_9 = FUNC_10(VAR_7);





  if (VAR_9->revision != 0 || VAR_9->number == 0)
    {
      *VAR_2 = VAR_9->revision;
      return VAR_1;
    }


  FUNC_0(FUNC_8(&VAR_8,
                                     VAR_6,
                                     VAR_9,
                                     VAR_5));
  if (VAR_8 != ((void*)0))
    {
      *VAR_2 = FUNC_11(VAR_8);
      return VAR_1;
    }

  {


    svn_fs_root_t *VAR_10 = VAR_3;
    apr_pool_t *VAR_11 = FUNC_16(VAR_5);
    apr_pool_t *VAR_12 = FUNC_16(VAR_5);
    svn_stringbuf_t *VAR_13 = FUNC_18(VAR_4, VAR_5);
    svn_revnum_t VAR_14 = VAR_0;
    dag_node_t *VAR_15;
    const svn_fs_id_t *VAR_16;






    while (1)
      {
        svn_revnum_t VAR_17;
        const char *VAR_18 = VAR_13->data;

        FUNC_15(VAR_11);




        if (FUNC_1(VAR_14))
          FUNC_0(FUNC_13(&VAR_10, VAR_6, VAR_14, VAR_11));


        FUNC_0(FUNC_2(&VAR_18, &VAR_17, VAR_6, VAR_10, VAR_18,
                              VAR_11));
        if (! VAR_18)
          break;



        FUNC_19(VAR_13, VAR_18);
        VAR_14 = VAR_17;
      }


    FUNC_0(FUNC_12(&VAR_16, VAR_10, VAR_13->data, VAR_12));
    do
      {
        FUNC_15(VAR_11);
        FUNC_0(FUNC_5(&VAR_15, VAR_6, VAR_16, VAR_11));






        FUNC_15(VAR_12);
        FUNC_0(FUNC_6(&VAR_16, VAR_15));
        VAR_16 = VAR_16 ? FUNC_9(VAR_16, VAR_12) : ((void*)0);
      }
    while (VAR_16);



    FUNC_0(FUNC_7(VAR_2, VAR_15, VAR_5));



    if (VAR_9->revision != VAR_0)
      FUNC_0(FUNC_14(VAR_6, VAR_9,
                                         FUNC_4(VAR_15), VAR_5));

    FUNC_17(VAR_11);
    FUNC_17(VAR_12);
    return VAR_1;
  }
}
