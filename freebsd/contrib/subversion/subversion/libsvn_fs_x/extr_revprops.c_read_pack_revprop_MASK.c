
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int revprops; int entry; int revision; } ;
typedef TYPE_1__ packed_revprops_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 char* FUNC_5 (TYPE_1__*,int *,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *,int ,int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int ,int *,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int **,int *,char const*,int,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(packed_revprops_t **VAR_5,
                  svn_fs_t *VAR_6,
                  svn_revnum_t VAR_7,
                  svn_boolean_t VAR_8,
                  apr_pool_t *VAR_9,
                  apr_pool_t *VAR_10)
{
  apr_pool_t *VAR_11 = FUNC_15(VAR_10);
  svn_boolean_t VAR_12 = VAR_0;
  packed_revprops_t *VAR_13;
  int VAR_14;


  if (!FUNC_11(VAR_6, VAR_7))
     FUNC_0(FUNC_13(VAR_6, VAR_11));

  if (!FUNC_11(VAR_6, VAR_7))
    return FUNC_10(VAR_1, ((void*)0),
                              FUNC_2("No such packed revision %ld"), VAR_7);


  VAR_13 = FUNC_3(VAR_9, sizeof(*VAR_13));
  VAR_13->revision = VAR_7;



  for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14)
    {
      const char *VAR_15;
      svn_stringbuf_t *VAR_16 = ((void*)0);

      FUNC_14(VAR_11);




      FUNC_0(FUNC_6(VAR_6, VAR_13, VAR_9, VAR_11));
      VAR_15 = FUNC_5(VAR_13, &VAR_13->entry,
                                            VAR_11);
      FUNC_0(FUNC_12(&VAR_16,
                                &VAR_12,
                                VAR_15,
                                VAR_14 + 1 < VAR_3,
                                VAR_11));

      if (VAR_16)
        {
          FUNC_1(FUNC_8(VAR_6, VAR_13, VAR_16, VAR_8,
                                          VAR_9, VAR_11),
                    FUNC_4(VAR_11,
                                 "Revprop pack file for r%ld is corrupt",
                                 VAR_7));
          break;
        }






      if (VAR_12 && FUNC_7(VAR_6, VAR_11))
        FUNC_0(FUNC_9(VAR_6, VAR_11));
    }


  if (!VAR_13->revprops)
    return FUNC_10(VAR_2, ((void*)0),
                  FUNC_2("Failed to read revprop pack file for r%ld"), VAR_7);

  *VAR_5 = VAR_13;

  return VAR_4;
}
