
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; size_t ptr; char* buf; } ;
typedef TYPE_1__ string_builder ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3(string_builder *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 char *VAR_3;

 if (VAR_1 < (VAR_0->len - VAR_0->ptr)) {
  return;
 }
 VAR_2 = VAR_0->len << 1;
 if (VAR_1 > (VAR_2 - VAR_0->ptr)) {
  VAR_2 = VAR_0->ptr + VAR_1;
 }
 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_3, VAR_0->buf, VAR_0->ptr);
 FUNC_1(VAR_0->buf);
 VAR_0->buf = VAR_3;
 VAR_0->len = VAR_2;
}
