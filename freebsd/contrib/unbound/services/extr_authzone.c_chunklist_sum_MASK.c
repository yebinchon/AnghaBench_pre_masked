
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_chunk {scalar_t__ len; struct auth_chunk* next; } ;



__attribute__((used)) static size_t
FUNC_0(struct auth_chunk* VAR_0)
{
 struct auth_chunk* VAR_1;
 size_t VAR_2 = 0;
 for(VAR_1=VAR_0; VAR_1; VAR_1=VAR_1->next) {
  VAR_2 += VAR_1->len;
 }
 return VAR_2;
}
