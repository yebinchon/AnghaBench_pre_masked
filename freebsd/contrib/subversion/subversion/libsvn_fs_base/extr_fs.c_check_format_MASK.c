
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,int,int) ;

__attribute__((used)) static svn_error_t *
FUNC_2(int VAR_3)
{


  if (VAR_3 <= VAR_1)
    return VAR_2;

  return FUNC_1(
        VAR_0, ((void*)0),
        FUNC_0("Expected FS format '%d'; found format '%d'"),
        VAR_1, VAR_3);
}
