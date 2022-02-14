
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*,int*) ;
 int * FUNC_2 (int ,int ,int ,int,int,int,int,int,int) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void)
{
  int VAR_8, VAR_9, VAR_10;

  FUNC_1(&VAR_8, &VAR_9, &VAR_10);


  if ((VAR_8 < VAR_4)
      || (VAR_8 == VAR_4 && VAR_9 < VAR_5)
      || (VAR_8 == VAR_4 && VAR_9 == VAR_5
          && VAR_10 < VAR_6))
    return FUNC_2(VAR_3, 0,
                             FUNC_0("Bad database version: got %d.%d.%d,"
                               " should be at least %d.%d.%d"),
                             VAR_8, VAR_9, VAR_10,
                             VAR_4,
                             VAR_5,
                             VAR_6);



  if (VAR_8 != VAR_0 || VAR_9 != VAR_1)
    return FUNC_2(VAR_3, 0,
                             FUNC_0("Bad database version:"
                               " compiled with %d.%d.%d,"
                               " running against %d.%d.%d"),
                             VAR_0,
                             VAR_1,
                             VAR_2,
                             VAR_8, VAR_9, VAR_10);
  return VAR_7;
}
