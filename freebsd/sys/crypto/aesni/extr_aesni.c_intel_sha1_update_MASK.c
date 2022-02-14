
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int * b8; } ;
struct TYPE_5__ {int b32; } ;
struct TYPE_4__ {int* b64; } ;
struct sha1_ctxt {int count; TYPE_3__ m; TYPE_2__ h; TYPE_1__ c; } ;


 int FUNC_0 (char const*,int *,size_t) ;
 int FUNC_1 (int ,void*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, const void *VAR_1, u_int VAR_2)
{
 struct sha1_ctxt *VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;
 size_t VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 u_int VAR_9;

 VAR_7 = 0;

 if (VAR_2 >= 64 && VAR_3->count % 64 == 0) {
  VAR_9 = VAR_2 / 64;
  VAR_3->c.b64[0] += VAR_9 * 64 * 8;
  FUNC_1(VAR_3->h.b32, VAR_4 + VAR_7, VAR_9);
  VAR_7 += VAR_9 * 64;
 }

 while (VAR_7 < VAR_2) {
  VAR_6 = VAR_3->count % 64;
  VAR_5 = 64 - VAR_6;

  VAR_8 = (VAR_5 < VAR_2 - VAR_7) ? VAR_5 : VAR_2 - VAR_7;
  FUNC_0(&VAR_4[VAR_7], &VAR_3->m.b8[VAR_6], VAR_8);
  VAR_3->count += VAR_8;
  VAR_3->count %= 64;
  VAR_3->c.b64[0] += VAR_8 * 8;
  if (VAR_3->count % 64 == 0)
   FUNC_1(VAR_3->h.b32, (void *)VAR_3->m.b8, 1);
  VAR_7 += VAR_8;
 }
 return (0);
}
