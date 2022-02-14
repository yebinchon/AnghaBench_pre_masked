
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct conf {int dummy; } ;
struct TYPE_3__ {int size; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int
FUNC_1(const DBT *VAR_0)
{
 if (sizeof(struct conf) == VAR_0->size)
  return 0;
 FUNC_0("Key size mismatch %zu != %zu", sizeof(struct conf), VAR_0->size);
 return 0;
}
