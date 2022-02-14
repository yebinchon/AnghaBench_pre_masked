
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int * svn_mergeinfo_t ;
typedef int svn_mergeinfo_catalog_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_path_change_iterator_t ;
struct TYPE_9__ {char* data; } ;
struct TYPE_11__ {scalar_t__ mergeinfo_mod; int change_kind; char* copyfrom_path; int copyfrom_rev; int copyfrom_known; TYPE_1__ path; scalar_t__ prop_mod; } ;
typedef TYPE_3__ svn_fs_path_change3_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int **,int *,char const*,int ,scalar_t__,int *,int *) ;
 int FUNC_4 (int *,char const**,int *,char const*,int *) ;
 int FUNC_5 (TYPE_2__**,int *,char const*,int ,int *) ;


 int FUNC_6 (TYPE_3__**,int *) ;



 int FUNC_7 (int **,int *,int *,int *) ;
 int FUNC_8 (int **,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char const*,int *) ;
 int FUNC_11 (int **,int **,int *,int *,scalar_t__,int *,int *) ;
 int VAR_5 ;
 int FUNC_12 (int **,int ,int *) ;
 int FUNC_13 (TYPE_2__**,int *,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char const**,int *,int *,int ,char const*,int *) ;
 scalar_t__ FUNC_18 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_mergeinfo_catalog_t *VAR_7,
                     svn_mergeinfo_catalog_t *VAR_8,
                     svn_fs_t *VAR_9,
                     svn_revnum_t VAR_10,
                     apr_pool_t *VAR_11,
                     apr_pool_t *VAR_12)
{
  svn_fs_root_t *VAR_13;
  apr_pool_t *VAR_14, *VAR_15;
  svn_fs_path_change_iterator_t *VAR_16;
  svn_fs_path_change3_t *VAR_17;
  svn_boolean_t VAR_18 = VAR_0;
  svn_boolean_t VAR_19 = VAR_0;


  *VAR_7 = FUNC_9(VAR_11);
  *VAR_8 = FUNC_9(VAR_11);


  if (VAR_10 == 0)
    return VAR_2;



  VAR_15 = FUNC_15(VAR_12);



  FUNC_0(FUNC_8(&VAR_13, VAR_9, VAR_10, VAR_12));
  FUNC_0(FUNC_7(&VAR_16, VAR_13, VAR_15,
                                VAR_15));
  FUNC_0(FUNC_6(&VAR_17, VAR_16));
  while (VAR_17 && (!VAR_18 || !VAR_19))
    {


      if (VAR_17->mergeinfo_mod != VAR_6 && VAR_17->prop_mod)
        VAR_18 = VAR_4;

      if ( (VAR_17->change_kind == 132)
          || (VAR_17->change_kind == 129))
        VAR_19 = VAR_4;

      FUNC_0(FUNC_6(&VAR_17, VAR_16));
    }


  if (! VAR_18)
    {
      FUNC_16(VAR_15);
      return VAR_2;
    }


  FUNC_14(VAR_15);
  FUNC_0(FUNC_7(&VAR_16, VAR_13, VAR_15,
                                VAR_15));




  VAR_14 = FUNC_15(VAR_12);
  while (VAR_4)
    {
      const char *VAR_20;
      const char *VAR_21 = ((void*)0);
      svn_revnum_t VAR_22 = VAR_1;
      svn_fs_root_t *VAR_23 = ((void*)0);
      svn_string_t *VAR_24 = ((void*)0), *VAR_25;


      FUNC_0(FUNC_6(&VAR_17, VAR_16));
      if (!VAR_17)
        break;




      if (VAR_17->mergeinfo_mod == VAR_6)
        continue;


      if (! VAR_17->prop_mod)
        continue;


      VAR_20 = VAR_17->path.data;
      FUNC_14(VAR_14);

      switch (VAR_17->change_kind)
        {
        case 130:
          {
            svn_revnum_t VAR_26;




            if (VAR_19)
              {
                FUNC_0(FUNC_17(&VAR_26, &VAR_21,
                                                 &VAR_22, VAR_9, VAR_10,
                                                 VAR_20, VAR_14));




                if (! (VAR_21 && FUNC_1(VAR_22)
                      && (VAR_26 == VAR_10)))
                  {
                    VAR_21 = VAR_20;
                    VAR_22 = VAR_10 - 1;
                  }
              }
            else
              {
                VAR_21 = VAR_20;
                VAR_22 = VAR_10 - 1;
              }
            break;
          }





        case 132:
        case 129:
          {
            if (VAR_17->copyfrom_known)
              {
                VAR_22 = VAR_17->copyfrom_rev;
                VAR_21 = VAR_17->copyfrom_path;
              }
            else
              {
                FUNC_0(FUNC_4(&VAR_22, &VAR_21,
                                          VAR_13, VAR_20, VAR_14));
              }
            break;
          }


        case 131:
        case 128:
        default:
          continue;
        }


      if (VAR_21 && FUNC_1(VAR_22))
        {
          FUNC_0(FUNC_8(&VAR_23, VAR_9, VAR_22, VAR_14));
          FUNC_0(FUNC_5(&VAR_24, VAR_23, VAR_21,
                                   VAR_3, VAR_14));
        }


      FUNC_0(FUNC_5(&VAR_25, VAR_13, VAR_20,
                               VAR_3, VAR_14));






      if (! (VAR_25 || VAR_24))
        continue;


      if ( VAR_25 && VAR_24
          && FUNC_18(VAR_25, VAR_24))
        continue;





      if (VAR_24 && (! VAR_25))
        {
          svn_mergeinfo_t VAR_27;

          FUNC_0(FUNC_3(&VAR_27,
                                                 VAR_13, VAR_20,
                                                 VAR_5, VAR_4,
                                                 VAR_14, VAR_14));
          if (VAR_27)
            FUNC_0(FUNC_13(&VAR_25,
                                            VAR_27,
                                            VAR_14));
        }
      else if (VAR_25 && (! VAR_24)
               && VAR_21 && FUNC_1(VAR_22))
        {
          svn_mergeinfo_t VAR_28;

          FUNC_0(FUNC_3(&VAR_28,
                                                 VAR_23, VAR_21,
                                                 VAR_5, VAR_4,
                                                 VAR_14, VAR_14));
          if (VAR_28)
            FUNC_0(FUNC_13(&VAR_24,
                                            VAR_28,
                                            VAR_14));
        }






        {
          svn_mergeinfo_t VAR_29 = ((void*)0), VAR_30 = ((void*)0);
          svn_mergeinfo_t VAR_31, VAR_32;
          const char *VAR_33;

          if (VAR_25)
            FUNC_0(FUNC_12(&VAR_30,
                                        VAR_25->data, VAR_14));
          if (VAR_24)
            FUNC_0(FUNC_12(&VAR_29,
                                        VAR_24->data, VAR_14));
          FUNC_0(FUNC_11(&VAR_31, &VAR_32, VAR_29,
                                      VAR_30, VAR_0, VAR_11,
                                      VAR_14));


          VAR_33 = FUNC_2(VAR_11, VAR_20);
          FUNC_10(*VAR_7, VAR_33, VAR_31);
          FUNC_10(*VAR_8, VAR_33, VAR_32);
        }
    }

  FUNC_16(VAR_14);
  FUNC_16(VAR_15);

  return VAR_2;
}
