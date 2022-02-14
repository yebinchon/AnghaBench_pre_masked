
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {char* c_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (struct conf**,size_t) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct conf ***VAR_1, size_t *VAR_2, size_t *VAR_3, struct conf *VAR_4)
{
 struct conf **VAR_5 = *VAR_1;

 if (VAR_4->c_name[0] == '\0')
  return;
 for (size_t VAR_6 = 0; VAR_6 < *VAR_2; VAR_6++) {
  if (FUNC_2(VAR_5[VAR_6]->c_name, VAR_4->c_name) == 0)
   return;
 }
 if (*VAR_2 == *VAR_3) {
  *VAR_3 += 10;
  void *VAR_7 = FUNC_1(*VAR_1, *VAR_3 * sizeof(*VAR_5));
  if (VAR_7 == ((void*)0))
   FUNC_0(VAR_0, "Can't allocate for rule list");
  VAR_5 = *VAR_1 = VAR_7;
 }
 VAR_5[(*VAR_2)++] = VAR_4;
}
