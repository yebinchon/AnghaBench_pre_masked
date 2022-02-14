
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {size_t cur_textbuf_idx; int lock; int * cur_textbuf; int * textbufs; int initialized; } ;
typedef TYPE_1__ ocs_ramlog_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *) ;

int32_t
FUNC_6(ocs_ramlog_t *VAR_0, const char *VAR_1, va_list VAR_2)
{
 if (VAR_0 == ((void*)0) || !VAR_0->initialized) {
  return -1;
 }




 FUNC_0(&VAR_0->lock);
 if (FUNC_2(VAR_0->cur_textbuf) < 120) {
  VAR_0->cur_textbuf_idx = FUNC_1(VAR_0, VAR_0->cur_textbuf_idx);
  VAR_0->cur_textbuf = &VAR_0->textbufs[VAR_0->cur_textbuf_idx];
  FUNC_3(VAR_0->cur_textbuf);
 }

 FUNC_4(VAR_0->cur_textbuf, VAR_1, VAR_2);
 FUNC_5(&VAR_0->lock);

 return 0;
}
