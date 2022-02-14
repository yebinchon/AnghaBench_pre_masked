
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {unsigned int has_arg; scalar_t__ val; scalar_t__ name; } ;



__attribute__((used)) static void FUNC_0(const struct option *VAR_0, char *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3, VAR_4 = 0;

 for (VAR_4 = 0; VAR_0->name && VAR_4 + 2 + VAR_0->has_arg < VAR_2; VAR_0++) {
  VAR_1[VAR_4++] = (char)VAR_0->val;
  for (VAR_3 = 0; VAR_3 < (unsigned)VAR_0->has_arg; VAR_3++)
   VAR_1[VAR_4++] = ':';
 }
 VAR_1[VAR_4] = '\0';
}
