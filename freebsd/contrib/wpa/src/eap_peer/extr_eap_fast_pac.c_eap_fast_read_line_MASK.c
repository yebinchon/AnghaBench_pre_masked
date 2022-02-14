
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_read_ctx {char* buf; size_t buf_len; char const* pos; char const* end; scalar_t__ f; int line; } ;


 int * FUNC_0 (char*,size_t,scalar_t__) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int FUNC_3(struct eap_fast_read_ctx *VAR_0, char **VAR_1)
{
 char *VAR_2;

 VAR_0->line++;
 if (VAR_0->f) {
  if (FUNC_0(VAR_0->buf, VAR_0->buf_len, VAR_0->f) == ((void*)0))
   return -1;
 } else {
  const char *VAR_3;
  size_t VAR_4;
  if (VAR_0->pos >= VAR_0->end)
   return -1;
  VAR_3 = VAR_0->pos;
  while (VAR_3 < VAR_0->end && *VAR_3 != '\n')
   VAR_3++;
  VAR_4 = VAR_3 - VAR_0->pos;
  if (VAR_4 >= VAR_0->buf_len)
   VAR_4 = VAR_0->buf_len - 1;
  FUNC_1(VAR_0->buf, VAR_0->pos, VAR_4);
  VAR_0->buf[VAR_4] = '\0';
  VAR_0->pos = VAR_3 + 1;
 }

 VAR_0->buf[VAR_0->buf_len - 1] = '\0';
 VAR_2 = VAR_0->buf;
 while (*VAR_2 != '\0') {
  if (*VAR_2 == '\n' || *VAR_2 == '\r') {
   *VAR_2 = '\0';
   break;
  }
  VAR_2++;
 }

 VAR_2 = FUNC_2(VAR_0->buf, '=');
 if (VAR_2)
  *VAR_2++ = '\0';
 *VAR_1 = VAR_2;

 return 0;
}
