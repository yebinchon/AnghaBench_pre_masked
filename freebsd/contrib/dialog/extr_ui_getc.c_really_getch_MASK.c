
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef void* wchar_t ;
typedef int state ;
typedef int mbstate_t ;
typedef int WINDOW ;


 scalar_t__ FUNC_0 (char) ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (char*,void*,int *) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(WINDOW *VAR_6, int *VAR_7)
{
    int VAR_8;
    VAR_8 = FUNC_4(VAR_6);
    VAR_3 = VAR_8;
    *VAR_7 = (VAR_8 > VAR_1 && VAR_8 < VAR_0);

    return VAR_8;
}
