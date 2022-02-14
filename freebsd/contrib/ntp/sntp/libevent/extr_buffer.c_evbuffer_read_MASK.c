
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_iovec {int dummy; } ;
struct evbuffer_chain {unsigned char* buffer; int misalign; int off; struct evbuffer_chain* next; } ;
struct evbuffer {int total_len; int n_add_for_cb; struct evbuffer_chain** last_with_datap; scalar_t__ freeze_end; } ;
typedef int evutil_socket_t ;
typedef int ev_ssize_t ;
typedef struct evbuffer_iovec IOV_TYPE ;
typedef int DWORD ;


 int FUNC_0 (struct evbuffer_chain*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct evbuffer*) ;
 int VAR_1 ;
 int FUNC_2 (struct evbuffer*) ;
 int VAR_2 ;
 int FUNC_3 (struct evbuffer_iovec*,struct evbuffer_iovec*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,struct evbuffer_iovec*,int,int*,int*,int *,int *) ;
 int FUNC_6 (struct evbuffer*) ;
 int FUNC_7 (struct evbuffer*,int,int) ;
 struct evbuffer_chain* FUNC_8 (struct evbuffer*,int) ;
 int FUNC_9 (struct evbuffer*) ;
 int FUNC_10 (struct evbuffer*,int,struct evbuffer_iovec*,int,struct evbuffer_chain***,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int FUNC_13 (int ,struct evbuffer_iovec*,int) ;
 int FUNC_14 (int ,unsigned char*,int,int ) ;

int
FUNC_15(struct evbuffer *VAR_4, evutil_socket_t VAR_5, int VAR_6)
{
 struct evbuffer_chain **VAR_7;
 int VAR_8;
 int VAR_9;




 struct evbuffer_chain *VAR_10;
 unsigned char *VAR_11;


 FUNC_1(VAR_4);

 if (VAR_4->freeze_end) {
  VAR_9 = -1;
  goto done;
 }

 VAR_8 = FUNC_11(VAR_5);
 if (VAR_8 <= 0 || VAR_8 > VAR_1)
  VAR_8 = VAR_1;
 if (VAR_6 < 0 || VAR_6 > VAR_8)
  VAR_6 = VAR_8;
 if ((VAR_10 = FUNC_8(VAR_4, VAR_6)) == ((void*)0)) {
  VAR_9 = -1;
  goto done;
 }


 VAR_11 = VAR_10->buffer + VAR_10->misalign + VAR_10->off;


 VAR_8 = FUNC_12(VAR_5, VAR_11, VAR_6);





 if (VAR_8 == -1) {
  VAR_9 = -1;
  goto done;
 }
 if (VAR_8 == 0) {
  VAR_9 = 0;
  goto done;
 }
 VAR_10->off += VAR_8;
 FUNC_6(VAR_4);

 VAR_4->total_len += VAR_8;
 VAR_4->n_add_for_cb += VAR_8;


 FUNC_9(VAR_4);
 VAR_9 = VAR_8;
done:
 FUNC_2(VAR_4);
 return VAR_9;
}
