
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* buf; int ptr; } ;
typedef TYPE_1__ string_builder ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(string_builder *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, 1);
 VAR_0->buf[VAR_0->ptr ++] = VAR_1;
}
