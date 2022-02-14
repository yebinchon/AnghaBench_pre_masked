
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; scalar_t__ buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;
 int FUNC_2 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_3 (struct strbuf*,size_t) ;
 int FUNC_4 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_0, size_t VAR_1, size_t VAR_2,
       const void *VAR_3, size_t VAR_4)
{
 if (VAR_1 + VAR_2 < VAR_1)
  FUNC_0("you want to use way too much memory");
 if (VAR_1 > VAR_0->len)
  FUNC_0("`pos' is too far after the end of the buffer");
 if (VAR_1 + VAR_2 > VAR_0->len)
  FUNC_0("`pos + len' is too far after the end of the buffer");

 if (VAR_4 >= VAR_2)
  FUNC_3(VAR_0, VAR_4 - VAR_2);
 FUNC_2(VAR_0->buf + VAR_1 + VAR_4,
   VAR_0->buf + VAR_1 + VAR_2,
   VAR_0->len - VAR_1 - VAR_2);
 FUNC_1(VAR_0->buf + VAR_1, VAR_3, VAR_4);
 FUNC_4(VAR_0, VAR_0->len + VAR_4 - VAR_2);
}
