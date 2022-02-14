
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {scalar_t__ s_error; size_t s_len; size_t s_sect_len; int * s_buf; int * s_drain_func; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct sbuf*) ;
 scalar_t__ FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*,int ) ;
 int FUNC_4 (int *,char const*,size_t) ;
 int FUNC_5 (struct sbuf*) ;
 scalar_t__ FUNC_6 (struct sbuf*,size_t) ;

__attribute__((used)) static void
FUNC_7(struct sbuf *VAR_2, const char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2, 0);

 if (VAR_2->s_error != 0)
  return;
 while (VAR_4 > 0) {
  if (FUNC_0(VAR_2) <= 0) {




   if (VAR_2->s_drain_func != ((void*)0))
    (void)FUNC_5(VAR_2);
   else if (FUNC_6(VAR_2, VAR_4 > VAR_1 ? VAR_1 : VAR_4)
       < 0)
    VAR_2->s_error = VAR_0;
   if (VAR_2->s_error != 0)
    return;
  }
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_4 < VAR_5)
   VAR_5 = VAR_4;
  FUNC_4(&VAR_2->s_buf[VAR_2->s_len], VAR_3, VAR_5);
  VAR_2->s_len += VAR_5;
  if (FUNC_1(VAR_2))
   VAR_2->s_sect_len += VAR_5;
  VAR_4 -= VAR_5;
  VAR_3 += VAR_5;
 }
}
