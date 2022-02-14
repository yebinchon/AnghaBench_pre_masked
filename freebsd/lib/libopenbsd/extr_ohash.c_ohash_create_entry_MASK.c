
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash_info {char* (* alloc ) (int,int ) ;int key_offset; int data; } ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int,int ) ;

void *
FUNC_3(struct ohash_info *VAR_0, const char *VAR_1, const char **VAR_2)
{
 char *VAR_3;

 if (!*VAR_2)
  *VAR_2 = VAR_1 + FUNC_1(VAR_1);
 VAR_3 = (VAR_0->alloc)(VAR_0->key_offset + (*VAR_2 - VAR_1) + 1, VAR_0->data);
 if (VAR_3) {
  FUNC_0(VAR_3+VAR_0->key_offset, VAR_1, *VAR_2-VAR_1);
  VAR_3[VAR_0->key_offset + (*VAR_2 - VAR_1)] = '\0';
 }
 return (void *)VAR_3;
}
