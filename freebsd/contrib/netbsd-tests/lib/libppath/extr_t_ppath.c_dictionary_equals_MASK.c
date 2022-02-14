
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prop_dictionary_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static bool
FUNC_4(prop_dictionary_t VAR_0, prop_dictionary_t VAR_1)
{
 bool VAR_2;
 char *VAR_3, *VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_2(VAR_1);

 FUNC_0(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

 VAR_2 = (FUNC_3(VAR_3, VAR_4) == 0);

 FUNC_1(VAR_3);
 FUNC_1(VAR_4);

 return VAR_2;
}
