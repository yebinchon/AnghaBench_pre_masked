
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {char* large_list; } ;



__attribute__((used)) static size_t
FUNC_0(struct regional* VAR_0)
{
 size_t VAR_1 = 0;
 char* VAR_2 = VAR_0->large_list;
 while(VAR_2) {
  VAR_1++;
  VAR_2 = *(char**)VAR_2;
 }
 return VAR_1;
}
