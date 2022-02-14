
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct request {int request_appended; int request_len; int trans_id; int request_type; struct evdns_request* handle; int * prev; int next; int * ns; int user_callback; void* user_pointer; scalar_t__ tx_count; int * request; struct evdns_base* base; int timeout_event; } ;
struct evdns_request {struct evdns_base* base; struct request* current_req; } ;
struct evdns_base {scalar_t__ global_requests_inflight; scalar_t__ global_max_requests_inflight; scalar_t__ global_randomize_case; int event_base; } ;
typedef int namebuf ;
typedef int evdns_callback_type ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char const*,size_t const,int const,int,int ,int *,size_t const) ;
 size_t FUNC_3 (size_t const) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ,struct request* const) ;
 int FUNC_5 (char*,size_t const) ;
 int FUNC_6 (struct request* const,int ,int) ;
 int FUNC_7 (struct request* const) ;
 struct request* FUNC_8 (int) ;
 int * FUNC_9 (struct evdns_base*) ;
 int FUNC_10 (char*,char const*,int) ;
 size_t FUNC_11 (char const*) ;
 int FUNC_12 (struct evdns_base*) ;

__attribute__((used)) static struct request *
FUNC_13(struct evdns_base *VAR_2, struct evdns_request *VAR_3, int VAR_4,
     const char *VAR_5, int VAR_6, evdns_callback_type VAR_7,
     void *VAR_8) {

 const char VAR_9 =
     (VAR_2->global_requests_inflight < VAR_2->global_max_requests_inflight) ? 1 : 0;

 const size_t VAR_10 = FUNC_11(VAR_5);
 const size_t VAR_11 = FUNC_3(VAR_10);
 const u16 VAR_12 = VAR_9 ? FUNC_12(VAR_2) : 0xffff;

 struct request *const VAR_13 =
     FUNC_8(sizeof(struct request) + VAR_11);
 int VAR_14;
 char VAR_15[256];
 (void) VAR_6;

 FUNC_0(VAR_2);

 if (!VAR_13) return ((void*)0);

 if (VAR_10 >= sizeof(VAR_15)) {
  FUNC_7(VAR_13);
  return ((void*)0);
 }

 FUNC_6(VAR_13, 0, sizeof(struct request));
 VAR_13->base = VAR_2;

 FUNC_4(&VAR_13->timeout_event, VAR_13->base->event_base, VAR_1, VAR_13);

 if (VAR_2->global_randomize_case) {
  unsigned VAR_16;
  char VAR_17[(sizeof(VAR_15)+7)/8];
  FUNC_10(VAR_15, VAR_5, sizeof(VAR_15));
  FUNC_5(VAR_17, (VAR_10+7)/8);
  for (VAR_16 = 0; VAR_16 < VAR_10; ++VAR_16) {
   if (FUNC_1(VAR_15[VAR_16])) {
    if ((VAR_17[VAR_16 >> 3] & (1<<(VAR_16 & 7))))
     VAR_15[VAR_16] |= 0x20;
    else
     VAR_15[VAR_16] &= ~0x20;
   }
  }
  VAR_5 = VAR_15;
 }


 VAR_13->request = ((u8 *) VAR_13) + sizeof(struct request);

 VAR_13->request_appended = 1;
 VAR_14 = FUNC_2(VAR_5, VAR_10, VAR_12,
     VAR_4, VAR_0, VAR_13->request, VAR_11);
 if (VAR_14 < 0)
  goto err1;

 VAR_13->request_len = VAR_14;
 VAR_13->trans_id = VAR_12;
 VAR_13->tx_count = 0;
 VAR_13->request_type = VAR_4;
 VAR_13->user_pointer = VAR_8;
 VAR_13->user_callback = VAR_7;
 VAR_13->ns = VAR_9 ? FUNC_9(VAR_2) : ((void*)0);
 VAR_13->next = *(VAR_13->prev = ((void*)0));
 VAR_13->handle = VAR_3;
 if (VAR_3) {
  VAR_3->current_req = VAR_13;
  VAR_3->base = VAR_2;
 }

 return VAR_13;
err1:
 FUNC_7(VAR_13);
 return ((void*)0);
}
