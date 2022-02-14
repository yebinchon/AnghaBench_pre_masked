
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;

const char *
FUNC_1(
 int VAR_2
 )
{
 size_t VAR_3;
 const char *VAR_4;

 VAR_3 = VAR_2 - VAR_0;

 if (VAR_3 < FUNC_0(VAR_1))
  VAR_4 = VAR_1[VAR_3];
 else
  VAR_4 = ((void*)0);

 return (VAR_4 != ((void*)0))
     ? VAR_4
     : "(keyword not found)";
}
