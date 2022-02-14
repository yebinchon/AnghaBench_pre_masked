
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

size_t FUNC_3(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_0);
 size_t VAR_4 = FUNC_2(VAR_1);
 size_t VAR_5 = VAR_3 + VAR_4;


 FUNC_0(VAR_3 >= VAR_2);

 VAR_0 += VAR_3;
 VAR_2 -= VAR_3;
 if (VAR_4 >= VAR_2)
  VAR_4 = VAR_2-1;
 FUNC_1(VAR_0, VAR_1, VAR_4);
 VAR_0[VAR_4] = 0;
 return VAR_5;
}
