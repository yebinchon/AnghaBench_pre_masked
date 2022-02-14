
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char request ;
struct evdns_request {int search_index; int search_flags; TYPE_1__* search_state; int * search_origname; int * current_req; } ;
struct evdns_base {TYPE_1__* global_search_state; } ;
typedef int evdns_callback_type ;
struct TYPE_2__ {scalar_t__ ndots; int refcount; scalar_t__ num_domains; } ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char* const) ;
 int * FUNC_3 (char const* const) ;
 void* FUNC_4 (struct evdns_base*,struct evdns_request*,int,char const* const,int,int ,void*) ;
 int FUNC_5 (char* const) ;
 char* FUNC_6 (TYPE_1__*,int ,char const* const) ;
 scalar_t__ FUNC_7 (char const* const) ;

__attribute__((used)) static struct request *
FUNC_8(struct evdns_base *VAR_3, struct evdns_request *VAR_4,
     int VAR_5, const char *const VAR_6, int VAR_7,
     evdns_callback_type VAR_8, void *VAR_9) {
 FUNC_0(VAR_3);
 FUNC_1(VAR_5 == VAR_1 || VAR_5 == VAR_2);
 FUNC_1(VAR_4->current_req == ((void*)0));
 if ( ((VAR_7 & VAR_0) == 0) &&
      VAR_3->global_search_state &&
   VAR_3->global_search_state->num_domains) {

  struct request *VAR_10;
  if (FUNC_7(VAR_6) >= VAR_3->global_search_state->ndots) {
   VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
   if (!VAR_10) return ((void*)0);
   VAR_4->search_index = -1;
  } else {
   char *const VAR_11 = FUNC_6(VAR_3->global_search_state, 0, VAR_6);
   if (!VAR_11) return ((void*)0);
   VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_11, VAR_7, VAR_8, VAR_9);
   FUNC_2(VAR_11);
   if (!VAR_10) return ((void*)0);
   VAR_4->search_index = 0;
  }
  FUNC_1(VAR_4->search_origname == ((void*)0));
  VAR_4->search_origname = FUNC_3(VAR_6);
  if (VAR_4->search_origname == ((void*)0)) {

   if (VAR_10)
    FUNC_2(VAR_10);
   return ((void*)0);
  }
  VAR_4->search_state = VAR_3->global_search_state;
  VAR_4->search_flags = VAR_7;
  VAR_3->global_search_state->refcount++;
  FUNC_5(VAR_10);
  return VAR_10;
 } else {
  struct request *const VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if (!VAR_12) return ((void*)0);
  FUNC_5(VAR_12);
  return VAR_12;
 }
}
