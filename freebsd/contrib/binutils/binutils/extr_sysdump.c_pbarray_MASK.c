
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* data; } ;
typedef TYPE_1__ barray ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (barray *VAR_0)
{
  int VAR_1;

  FUNC_1 ("%d (", VAR_0->len);

  for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++)
    FUNC_1 ("(%02x %c)", VAR_0->data[VAR_1],
     FUNC_0 (VAR_0->data[VAR_1]) ? VAR_0->data[VAR_1] : '.');

  FUNC_1 (")\n");
}
