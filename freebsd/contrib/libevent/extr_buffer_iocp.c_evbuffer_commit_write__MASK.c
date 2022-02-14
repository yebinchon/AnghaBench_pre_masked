
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_overlapped {scalar_t__ write_in_progress; int read_in_progress; } ;
struct evbuffer {int dummy; } ;
typedef int ev_ssize_t ;


 int FUNC_0 (struct evbuffer*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct evbuffer*) ;
 int FUNC_3 (struct evbuffer*,int ) ;
 int FUNC_4 (struct evbuffer*,int) ;
 int FUNC_5 (struct evbuffer_overlapped*,int ) ;
 struct evbuffer_overlapped* FUNC_6 (struct evbuffer*) ;

void
FUNC_7(struct evbuffer *VAR_1, ev_ssize_t VAR_2)
{
 struct evbuffer_overlapped *VAR_3 = FUNC_6(VAR_1);

 FUNC_0(VAR_1);
 FUNC_1(VAR_3->write_in_progress && !VAR_3->read_in_progress);
 FUNC_4(VAR_1, 1);
 FUNC_3(VAR_1, VAR_2);
 FUNC_5(VAR_3,VAR_0);
 VAR_3->write_in_progress = 0;
 FUNC_2(VAR_1);
}
