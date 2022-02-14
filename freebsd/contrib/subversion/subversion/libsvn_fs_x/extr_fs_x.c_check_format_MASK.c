
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,int,int,...) ;

__attribute__((used)) static svn_error_t *
FUNC_2(int VAR_4)
{



  if (VAR_4 == VAR_2)
    return VAR_3;




  if (VAR_1 >= VAR_4)
    return FUNC_1(VAR_0, ((void*)0),
      FUNC_0("Unsupported experimental FSX format '%d' found; current format is '%d'"),
      VAR_4, VAR_2);



  if (VAR_4 <= VAR_2)
    return VAR_3;

  return FUNC_1(VAR_0, ((void*)0),
     FUNC_0("Expected FSX format between '%d' and '%d'; found format '%d'"),
     VAR_1 + 1, VAR_2,
     VAR_4);
}
