
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int packed_revprops; int filename; int folder; int revision; } ;
typedef TYPE_1__ packed_revprops_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;
 int * FUNC_4 (int *,TYPE_1__*,int ,int ,int *,int *) ;
 char* FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,char const*,int,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(packed_revprops_t **VAR_6,
                  svn_fs_t *VAR_7,
                  svn_revnum_t VAR_8,
                  svn_boolean_t VAR_9,
                  svn_boolean_t VAR_10,
                  apr_pool_t *VAR_11)
{
  apr_pool_t *VAR_12 = FUNC_11(VAR_11);
  svn_boolean_t VAR_13 = VAR_0;
  svn_error_t *VAR_14;
  packed_revprops_t *VAR_15;
  int VAR_16;


  if (!FUNC_7(VAR_7, VAR_8))
     FUNC_0(FUNC_9(VAR_7, VAR_12));

  if (!FUNC_7(VAR_7, VAR_8))
    return FUNC_6(VAR_2, ((void*)0),
                              FUNC_1("No such packed revision %ld"), VAR_8);


  VAR_15 = FUNC_2(VAR_11, sizeof(*VAR_15));
  VAR_15->revision = VAR_8;



  for (VAR_16 = 0;
       VAR_16 < VAR_4 && !VAR_15->packed_revprops;
       ++VAR_16)
    {
      const char *VAR_17;
      FUNC_10(VAR_12);




      FUNC_0(FUNC_3(VAR_7, VAR_15, VAR_11, VAR_12));
      VAR_17 = FUNC_5(VAR_15->folder,
                                   VAR_15->filename,
                                   VAR_12);
      FUNC_0(FUNC_8(&VAR_15->packed_revprops,
                                &VAR_13,
                                VAR_17,
                                VAR_16 + 1 < VAR_4,
                                VAR_11));
    }


  if (!VAR_15->packed_revprops)
    return FUNC_6(VAR_3, ((void*)0),
                  FUNC_1("Failed to read revprop pack file for r%ld"), VAR_8);


  VAR_14 = FUNC_4(VAR_7, VAR_15, VAR_9, VAR_10, VAR_11,
                              VAR_12);
  FUNC_12(VAR_12);
  if (VAR_14)
    return FUNC_6(VAR_1, VAR_14,
                  FUNC_1("Revprop pack file for r%ld is corrupt"), VAR_8);

  *VAR_6 = VAR_15;

  return VAR_5;
}
