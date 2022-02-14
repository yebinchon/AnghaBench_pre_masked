
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autoscan_exponential_data {void* limit; void* base; } ;


 void* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(struct autoscan_exponential_data *VAR_0,
    const char *VAR_1)
{
 const char *VAR_2;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_0->base = FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_1, ':');
 if (VAR_2 == ((void*)0))
  return -1;

 VAR_2++;
 VAR_0->limit = FUNC_0(VAR_2);

 return 0;
}
