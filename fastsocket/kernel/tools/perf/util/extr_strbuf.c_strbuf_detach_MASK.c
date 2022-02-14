
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; size_t len; scalar_t__ alloc; } ;


 int FUNC_0 (struct strbuf*,int ) ;

char *FUNC_1(struct strbuf *VAR_0, size_t *VAR_1)
{
 char *VAR_2 = VAR_0->alloc ? VAR_0->buf : ((void*)0);
 if (VAR_1)
  *VAR_1 = VAR_0->len;
 FUNC_0(VAR_0, 0);
 return VAR_2;
}
