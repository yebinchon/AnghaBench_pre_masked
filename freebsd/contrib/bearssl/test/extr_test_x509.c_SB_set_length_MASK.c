
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ptr; scalar_t__ buf; } ;
typedef TYPE_1__ string_builder ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (scalar_t__,char,size_t) ;

__attribute__((used)) static void
FUNC_2(string_builder *VAR_0, size_t VAR_1)
{
 if (VAR_0->ptr < VAR_1) {
  FUNC_0(VAR_0, VAR_1 - VAR_0->ptr);
  FUNC_1(VAR_0->buf + VAR_0->ptr, ' ', VAR_1 - VAR_0->ptr);
 }
 VAR_0->ptr = VAR_1;
}
