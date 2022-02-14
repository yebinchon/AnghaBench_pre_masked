
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_4__ {int textbuf_count; int textbuf_base; int lock; int initialized; int * textbufs; int * cur_textbuf; scalar_t__ cur_textbuf_idx; } ;
typedef TYPE_1__ ocs_ramlog_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,int) ;

ocs_ramlog_t *
FUNC_6(ocs_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;
 ocs_ramlog_t *VAR_8;

 VAR_8 = FUNC_3(VAR_3, sizeof(*VAR_8), VAR_1 | VAR_0);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_3, "ocs_malloc ramlog failed\n");
  return ((void*)0);
 }

 VAR_8->textbuf_count = VAR_5;

 VAR_8->textbufs = FUNC_3(VAR_3, sizeof(*VAR_8->textbufs)*VAR_5, VAR_1 | VAR_0);
 if (VAR_8->textbufs == ((void*)0)) {
  FUNC_2(VAR_3, "ocs_malloc textbufs failed\n");
  FUNC_4(VAR_3, VAR_8);
  return ((void*)0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 ++) {
  VAR_7 = FUNC_5(VAR_3, &VAR_8->textbufs[VAR_6], VAR_4);
  if (VAR_7) {
   FUNC_2(VAR_3, "ocs_textbuf_alloc failed\n");
   FUNC_4(VAR_3, VAR_8);
   return ((void*)0);
  }
 }

 VAR_8->cur_textbuf_idx = 0;
 VAR_8->textbuf_base = 1;
 VAR_8->cur_textbuf = &VAR_8->textbufs[0];
 VAR_8->initialized = VAR_2;
 FUNC_1(VAR_3, &VAR_8->lock, "ramlog_lock[%d]", FUNC_0(VAR_3));
 return VAR_8;
}
