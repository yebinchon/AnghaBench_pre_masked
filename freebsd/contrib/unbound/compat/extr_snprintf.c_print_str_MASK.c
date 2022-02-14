
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char**,size_t*,int*,char,int) ;
 int FUNC_2 (char**,size_t*,int*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char** VAR_0, size_t* VAR_1, int* VAR_2, char* VAR_3,
 int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 if(VAR_6)
  VAR_8 = FUNC_0(VAR_3, VAR_5);
 else VAR_8 = (int)FUNC_3(VAR_3);
 if(VAR_8 < VAR_4 && !VAR_7)
  FUNC_1(VAR_0, VAR_1, VAR_2, ' ', VAR_4 - VAR_8);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_8);
 if(VAR_8 < VAR_4 && VAR_7)
  FUNC_1(VAR_0, VAR_1, VAR_2, ' ', VAR_4 - VAR_8);
}
