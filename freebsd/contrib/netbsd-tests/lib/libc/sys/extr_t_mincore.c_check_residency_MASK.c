
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (void*,size_t,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_5(void *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_3(VAR_3);

 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(FUNC_4(VAR_2, VAR_3 * VAR_0, VAR_6) == 0);

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_3; VAR_4++) {

  if (VAR_6[VAR_4] != 0)
   VAR_5++;





 }

 FUNC_2(VAR_6);

 return VAR_5;
}
