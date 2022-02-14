
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* fs; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_stringbuf_t ;
struct TYPE_22__ {int data; } ;
typedef TYPE_3__ svn_string_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
struct TYPE_23__ {void const* name; int const* id; } ;
typedef TYPE_4__ svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_24__ {int prop_key; } ;
typedef TYPE_5__ node_revision_t ;
typedef int dag_node_t ;
struct TYPE_25__ {scalar_t__ format; } ;
typedef TYPE_6__ base_fs_data_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_20__ {TYPE_6__* fsap_data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 TYPE_4__* FUNC_3 (int *,void const*,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,void const*,int ,int *) ;
 int FUNC_7 (int *,void const**,int *,void**) ;
 int * FUNC_8 (int *,char const*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int * FUNC_10 (int ,int *,int ) ;
 int * FUNC_11 (int ,int *,int ,char const*,int ) ;
 int * FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *,scalar_t__,char const*,TYPE_2__*,int *) ;
 int * FUNC_14 (int *,void const*,char const*,TYPE_2__*,int *) ;
 int * FUNC_15 (int **,int *,TYPE_2__*,int *) ;
 int * FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int * FUNC_18 (int *,scalar_t__*,int *,TYPE_2__*,int *) ;
 int * FUNC_19 (int **,int *,int const*,TYPE_2__*,int *) ;
 int * FUNC_20 (int*,int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int * FUNC_22 (int *,void const*,int const*,char const*,TYPE_2__*,int *) ;
 int FUNC_23 (int const*) ;
 scalar_t__ FUNC_24 (int const*,int const*) ;
 int FUNC_25 (int const*) ;
 TYPE_3__* FUNC_26 (int const*,int *) ;
 int FUNC_27 (int ,int ) ;
 int * FUNC_28 (TYPE_5__**,int *,int const*,TYPE_2__*,int *) ;
 char const* FUNC_29 (char const*,void const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_30 (int *) ;
 int * FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int * FUNC_34 (int *,int const*,int const*,char const*,char const*,int,TYPE_2__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_35(svn_stringbuf_t *VAR_7,
      const char *VAR_8,
      dag_node_t *VAR_9,
      dag_node_t *VAR_10,
      dag_node_t *VAR_11,
      const char *VAR_12,
      apr_int64_t *VAR_13,
      trail_t *VAR_14,
      apr_pool_t *VAR_15)
{
  const svn_fs_id_t *VAR_16, *VAR_17, *VAR_18;
  apr_hash_t *VAR_19, *VAR_20, *VAR_21;
  apr_hash_index_t *VAR_22;
  apr_pool_t *VAR_23;
  svn_fs_t *VAR_24;
  int VAR_25;
  apr_int64_t VAR_26 = 0;
  base_fs_data_t *VAR_27 = VAR_14->fs->fsap_data;


  VAR_24 = FUNC_16(VAR_11);
  if ((VAR_24 != FUNC_16(VAR_10))
      || (VAR_24 != FUNC_16(VAR_9)))
    {
      return FUNC_10
        (VAR_0, ((void*)0),
         FUNC_1("Bad merge; ancestor, source, and target not all in same fs"));
    }


  FUNC_0(FUNC_12(VAR_24, VAR_4));

  VAR_16 = FUNC_17(VAR_10);
  VAR_17 = FUNC_17(VAR_9);
  VAR_18 = FUNC_17(VAR_11);


  if (FUNC_24(VAR_18, VAR_17))
    {
      svn_string_t *VAR_28 = FUNC_26(VAR_17, VAR_15);
      return FUNC_11
        (VAR_1, ((void*)0),
         FUNC_1("Bad merge; target '%s' has id '%s', same as ancestor"),
         VAR_8, VAR_28->data);
    }

  FUNC_33(VAR_7);





  if (FUNC_24(VAR_18, VAR_16)
      || (FUNC_24(VAR_16, VAR_17)))
    return VAR_3;
  if ((FUNC_21(VAR_10) != VAR_5)
      || (FUNC_21(VAR_9) != VAR_5)
      || (FUNC_21(VAR_11) != VAR_5))
    {
      return FUNC_8(VAR_7, VAR_8);
    }
  {
    node_revision_t *VAR_29, *VAR_30, *VAR_31;


    FUNC_0(FUNC_28(&VAR_29, VAR_24, VAR_17,
                                          VAR_14, VAR_15));
    FUNC_0(FUNC_28(&VAR_30, VAR_24, VAR_18,
                                          VAR_14, VAR_15));
    FUNC_0(FUNC_28(&VAR_31, VAR_24, VAR_16,
                                          VAR_14, VAR_15));







    if (! FUNC_27(VAR_29->prop_key, VAR_30->prop_key))
      return FUNC_8(VAR_7, VAR_8);
    if (! FUNC_27(VAR_31->prop_key, VAR_30->prop_key))
      return FUNC_8(VAR_7, VAR_8);
  }




  FUNC_0(FUNC_15(&VAR_19, VAR_10, VAR_14, VAR_15));
  if (! VAR_19)
    VAR_19 = FUNC_4(VAR_15);
  FUNC_0(FUNC_15(&VAR_20, VAR_9, VAR_14, VAR_15));
  if (! VAR_20)
    VAR_20 = FUNC_4(VAR_15);
  FUNC_0(FUNC_15(&VAR_21, VAR_11, VAR_14, VAR_15));
  if (! VAR_21)
    VAR_21 = FUNC_4(VAR_15);


  VAR_23 = FUNC_31(VAR_15);
  for (VAR_22 = FUNC_2(VAR_15, VAR_21);
       VAR_22;
       VAR_22 = FUNC_5(VAR_22))
    {
      svn_fs_dirent_t *VAR_32, *VAR_33, *VAR_34;

      const void *VAR_35;
      void *VAR_36;
      apr_ssize_t VAR_37;

      FUNC_30(VAR_23);


      FUNC_7(VAR_22, &VAR_35, &VAR_37, &VAR_36);
      VAR_34 = VAR_36;

      VAR_32 = FUNC_3(VAR_19, VAR_35, VAR_37);
      VAR_33 = FUNC_3(VAR_20, VAR_35, VAR_37);



      if (VAR_32 && FUNC_24(VAR_34->id, VAR_32->id))
        goto end;



      else if (VAR_33 && FUNC_24(VAR_34->id, VAR_33->id))
        {
          dag_node_t *VAR_38;
          apr_int64_t VAR_39;
          FUNC_0(FUNC_19(&VAR_38, VAR_24,
                                            VAR_33->id, VAR_14, VAR_23));
          FUNC_0(FUNC_18(((void*)0), &VAR_39,
                                                       VAR_38, VAR_14,
                                                       VAR_23));
          VAR_26 -= VAR_39;

           if (VAR_32)
             {
              dag_node_t *VAR_40;
              apr_int64_t VAR_41;
              FUNC_0(FUNC_19(&VAR_40, VAR_24,
                                                VAR_32->id, VAR_14,
                                                VAR_23));
              FUNC_0(FUNC_18(((void*)0),
                                                           &VAR_41,
                                                           VAR_40, VAR_14,
                                                           VAR_23));
              VAR_26 += VAR_41;
              FUNC_0(FUNC_22(VAR_9, VAR_35, VAR_32->id,
                                                 VAR_12, VAR_14, VAR_23));
            }
          else
            {
              FUNC_0(FUNC_14(VAR_9, VAR_35, VAR_12,
                                              VAR_14, VAR_23));
            }
        }




      else
        {
          dag_node_t *VAR_42, *VAR_43, *VAR_44;
          const char *VAR_45;
          apr_int64_t VAR_46;




          if (VAR_32 == ((void*)0) || VAR_33 == ((void*)0))
            return FUNC_8(VAR_7,
                                FUNC_29(VAR_8,
                                                VAR_34->name,
                                                VAR_23));



          if (FUNC_9(FUNC_25(VAR_32->id),
                     FUNC_25(VAR_34->id)) != 0
              || FUNC_9(FUNC_23(VAR_32->id),
                        FUNC_23(VAR_34->id)) != 0
              || FUNC_9(FUNC_25(VAR_33->id),
                        FUNC_25(VAR_34->id)) != 0
              || FUNC_9(FUNC_23(VAR_33->id),
                        FUNC_23(VAR_34->id)) != 0)
            return FUNC_8(VAR_7,
                                FUNC_29(VAR_8,
                                                VAR_34->name,
                                                VAR_23));


          FUNC_0(FUNC_19(&VAR_42, VAR_24,
                                            VAR_32->id, VAR_14, VAR_23));
          FUNC_0(FUNC_19(&VAR_43, VAR_24,
                                            VAR_33->id, VAR_14, VAR_23));
          FUNC_0(FUNC_19(&VAR_44, VAR_24,
                                            VAR_34->id, VAR_14, VAR_23));


          if ((FUNC_21(VAR_42) == VAR_6)
              || (FUNC_21(VAR_43) == VAR_6)
              || (FUNC_21(VAR_44) == VAR_6))
            return FUNC_8(VAR_7,
                                FUNC_29(VAR_8,
                                                VAR_34->name,
                                                VAR_23));




          VAR_45 = FUNC_29(VAR_8, VAR_33->name, VAR_23);
          FUNC_0(FUNC_35(VAR_7, VAR_45,
                        VAR_43, VAR_42, VAR_44,
                        VAR_12, &VAR_46, VAR_14, VAR_23));
          VAR_26 += VAR_46;
        }





    end:
      FUNC_6(VAR_19, VAR_35, VAR_37, ((void*)0));
    }


  for (VAR_22 = FUNC_2(VAR_15, VAR_19);
       VAR_22;
       VAR_22 = FUNC_5(VAR_22))
    {
      svn_fs_dirent_t *VAR_47, *VAR_48;
      const void *VAR_49;
      void *VAR_50;
      apr_ssize_t VAR_51;
      dag_node_t *VAR_52;
      apr_int64_t VAR_53;

      FUNC_30(VAR_23);

      FUNC_7(VAR_22, &VAR_49, &VAR_51, &VAR_50);
      VAR_47 = VAR_50;
      VAR_48 = FUNC_3(VAR_20, VAR_49, VAR_51);


      if (VAR_48)
        return FUNC_8(VAR_7,
                            FUNC_29(VAR_8,
                                            VAR_48->name,
                                            VAR_23));

      FUNC_0(FUNC_19(&VAR_52, VAR_24,
                                        VAR_47->id, VAR_14, VAR_23));
      FUNC_0(FUNC_18(((void*)0), &VAR_53,
                                                   VAR_52, VAR_14,
                                                   VAR_23));
      VAR_26 += VAR_53;
      FUNC_0(FUNC_22
              (VAR_9, VAR_47->name, VAR_47->id, VAR_12, VAR_14, VAR_23));
    }
  FUNC_32(VAR_23);



  FUNC_0(FUNC_20(&VAR_25, VAR_10,
                                                 VAR_14, VAR_15));
  FUNC_0(FUNC_34(VAR_24, VAR_16, VAR_17, VAR_12, VAR_8,
                          VAR_25, VAR_14, VAR_15));


  if (VAR_27->format >= VAR_2)
    {
      FUNC_0(FUNC_13(VAR_9,
                                                      VAR_26,
                                                      VAR_12, VAR_14, VAR_15));
    }

  if (VAR_13)
    *VAR_13 = VAR_26;

  return VAR_3;
}
