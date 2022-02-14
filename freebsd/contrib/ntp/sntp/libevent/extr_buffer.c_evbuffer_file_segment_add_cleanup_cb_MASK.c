
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_file_segment {scalar_t__ refcnt; void* cleanup_cb_arg; int cleanup_cb; } ;
typedef int evbuffer_file_segment_cleanup_cb ;


 int FUNC_0 (int) ;

void FUNC_1(struct evbuffer_file_segment *VAR_0,
 evbuffer_file_segment_cleanup_cb VAR_1, void* VAR_2)
{
 FUNC_0(VAR_0->refcnt > 0);
 VAR_0->cleanup_cb = VAR_1;
 VAR_0->cleanup_cb_arg = VAR_2;
}
