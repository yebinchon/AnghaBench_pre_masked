
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;

const char *
FUNC_1(int VAR_3)
{
 const char *VAR_4;

 if (VAR_3 >= VAR_0 && (VAR_3 - VAR_0) < VAR_2)
  VAR_4 = VAR_1[VAR_3 - VAR_0];
 else
  VAR_4 = FUNC_0(VAR_3);

 return (VAR_4 ? VAR_4 : "Unknown error");
}
