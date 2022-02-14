
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct evbuffer {size_t off; int * buffer; } ;


 int * FUNC_0 (int *,int const,size_t) ;
 scalar_t__ FUNC_1 (int *,int const*,size_t) ;

u_char *
FUNC_2(struct evbuffer *VAR_0, const u_char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->off;
 u_char *VAR_4 = VAR_0->buffer;
 u_char *VAR_5;

 while ((VAR_5 = FUNC_0(VAR_4, *VAR_1, VAR_3)) != ((void*)0)) {
  VAR_3 = VAR_0->off - (size_t)(VAR_4 - VAR_0->buffer);
  if (VAR_3 < VAR_2)
   break;
  if (FUNC_1(VAR_5, VAR_1, VAR_2) == 0)
   return (VAR_5);
  VAR_4 = VAR_5 + 1;
 }

 return (((void*)0));
}
