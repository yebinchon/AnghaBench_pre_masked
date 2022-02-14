
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; int alloc; int * buf; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct strbuf *VAR_0, size_t VAR_1)
{
 if (VAR_0->len + VAR_1 + 1 <= VAR_0->len)
  FUNC_1("you want to use way too much memory");
 if (!VAR_0->alloc)
  VAR_0->buf = ((void*)0);
 FUNC_0(VAR_0->buf, VAR_0->len + VAR_1 + 1, VAR_0->alloc);
}
