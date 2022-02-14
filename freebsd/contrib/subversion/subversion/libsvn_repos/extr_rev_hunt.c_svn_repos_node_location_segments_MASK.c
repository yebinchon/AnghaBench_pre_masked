
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_t ;
typedef int (* svn_repos_authz_func_t ) (int *,int *,char const*,void*,int *) ;
struct TYPE_8__ {scalar_t__ range_end; scalar_t__ range_start; char const* path; } ;
typedef TYPE_2__ svn_location_segment_t ;
typedef int svn_location_segment_receiver_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,char*,char const*,int ) ;
 char* FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,char const*,int (*) (int *,int *,char const*,void*,int *),void*,int *) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__,int ,void*,int *) ;
 int * FUNC_9 (int ,int *,int ,scalar_t__) ;
 int FUNC_10 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_11 (int **,int *,scalar_t__,int *) ;
 int FUNC_12 (scalar_t__*,int *,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__*,char const**,scalar_t__*,int *,scalar_t__,char const*,int *) ;
 int * FUNC_17 (int *) ;
 TYPE_1__* FUNC_18 (char const*,int *) ;
 int FUNC_19 (TYPE_1__*,char const*) ;

svn_error_t *
FUNC_20(svn_repos_t *VAR_4,
                                 const char *VAR_5,
                                 svn_revnum_t VAR_6,
                                 svn_revnum_t VAR_7,
                                 svn_revnum_t VAR_8,
                                 svn_location_segment_receiver_t VAR_9,
                                 void *VAR_10,
                                 svn_repos_authz_func_t VAR_11,
                                 void *VAR_12,
                                 apr_pool_t *VAR_13)
{
  svn_fs_t *VAR_14 = FUNC_17(VAR_4);
  svn_stringbuf_t *VAR_15;
  svn_revnum_t VAR_16, VAR_17;
  apr_pool_t *VAR_18;

  FUNC_0(FUNC_12(&VAR_16, VAR_14, VAR_13));


  if (! FUNC_2(VAR_6))
    VAR_6 = VAR_16;

  if (VAR_6 > VAR_16)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_3("No such revision %ld"), VAR_6);


  if (! FUNC_2(VAR_7))
    VAR_7 = VAR_6;
  else if (VAR_7 > VAR_6)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_3("No such revision %ld"), VAR_7);


  if (! FUNC_2(VAR_8))
    VAR_8 = 0;
  else if (VAR_8 > VAR_7)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_3("No such revision %ld"), VAR_8);



  FUNC_1(VAR_8 <= VAR_7);
  FUNC_1(VAR_7 <= VAR_6);



  if (*VAR_5 != '/')
    VAR_5 = FUNC_5(VAR_13, "/", VAR_5, VAR_3);


  if (VAR_11)
    {
      svn_fs_root_t *VAR_19;
      FUNC_0(FUNC_11(&VAR_19, VAR_14, VAR_6, VAR_13));
      FUNC_0(FUNC_7(VAR_19, VAR_5,
                                VAR_11, VAR_12, VAR_13));
    }


  VAR_18 = FUNC_14(VAR_13);
  VAR_17 = VAR_6;
  VAR_15 = FUNC_18(VAR_5, VAR_13);
  while (VAR_17 >= VAR_8)
    {
      svn_revnum_t VAR_20, VAR_21;
      const char *VAR_22, *VAR_23;
      svn_location_segment_t *VAR_24;

      FUNC_13(VAR_18);

      VAR_22 = FUNC_6(VAR_18, VAR_15->data,
                                VAR_15->len);
      VAR_24 = FUNC_4(VAR_18, sizeof(*VAR_24));
      VAR_24->range_end = VAR_17;
      VAR_24->range_start = VAR_8;

      VAR_24->path = VAR_22 + 1;

      FUNC_0(FUNC_16(&VAR_20, &VAR_23, &VAR_21,
                                       VAR_14, VAR_17, VAR_22, VAR_18));






      if (! VAR_23)
        {
          svn_fs_root_t *VAR_25;
          FUNC_0(FUNC_11(&VAR_25, VAR_14, VAR_17, VAR_18));
          FUNC_0(FUNC_10(&(VAR_24->range_start), VAR_25,
                                         VAR_22, VAR_18));
          if (VAR_24->range_start < VAR_8)
            VAR_24->range_start = VAR_8;
          VAR_17 = VAR_1;
        }
      else
        {
          VAR_24->range_start = VAR_20;
          FUNC_19(VAR_15, VAR_23);
          VAR_17 = VAR_21;
        }


      if (VAR_11)
        {
          svn_boolean_t VAR_26;
          svn_fs_root_t *VAR_27;


          const char *VAR_28 = FUNC_5(VAR_18, "/", VAR_24->path,
                                             VAR_3);

          FUNC_0(FUNC_11(&VAR_27, VAR_14,
                                       VAR_24->range_end, VAR_18));
          FUNC_0(VAR_11(&VAR_26, VAR_27, VAR_28,
                                  VAR_12, VAR_18));
          if (! VAR_26)
            return VAR_2;
        }


      FUNC_0(FUNC_8(VAR_24, VAR_7, VAR_8,
                                          VAR_9, VAR_10, VAR_18));



      if (! FUNC_2(VAR_17))
        break;



      if (VAR_24->range_start - VAR_17 > 1)
        {
          svn_location_segment_t *VAR_29;
          VAR_29 = FUNC_4(VAR_18, sizeof(*VAR_29));
          VAR_29->range_end = VAR_24->range_start - 1;
          VAR_29->range_start = VAR_17 + 1;
          VAR_29->path = ((void*)0);
          FUNC_0(FUNC_8(VAR_29, VAR_7, VAR_8,
                                              VAR_9, VAR_10,
                                              VAR_18));
        }
    }
  FUNC_15(VAR_18);
  return VAR_2;
}
