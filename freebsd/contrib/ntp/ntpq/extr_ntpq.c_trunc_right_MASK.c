
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

const char *
FUNC_3(
 const char * VAR_1,
 size_t VAR_2
 )
{
 size_t VAR_3;
 char * VAR_4;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 > VAR_2 && VAR_0 - 1 > VAR_2 && VAR_2 > 0) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_4, VAR_1, VAR_2);
  VAR_4[VAR_2] = '\0';

  return VAR_4;
 }

 return VAR_1;
}
