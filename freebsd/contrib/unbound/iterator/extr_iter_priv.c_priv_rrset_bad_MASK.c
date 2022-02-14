
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {struct sockaddr_storage sin6_addr; void* sin6_port; int sin6_family; struct sockaddr_storage sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr_in {struct sockaddr_storage sin6_addr; void* sin6_port; int sin6_family; struct sockaddr_storage sin_addr; void* sin_port; int sin_family; } ;
struct rrset_parse {scalar_t__ type; struct rr_parse* rr_first; int rrset_class; int dname_len; int dname; } ;
struct rr_parse {struct sockaddr_in6* ttl_data; struct rr_parse* next; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct iter_priv {TYPE_1__ a; } ;
typedef scalar_t__ socklen_t ;
typedef int sldns_buffer ;
typedef int sa ;
typedef void* in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_storage*,struct sockaddr_in6*,scalar_t__) ;
 int FUNC_2 (struct sockaddr_in6*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct iter_priv*,struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct iter_priv*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_6 (char*,int *,struct rrset_parse*,struct rr_parse*,struct rr_parse**,struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sockaddr_in6*) ;

int FUNC_8(struct iter_priv* VAR_7, sldns_buffer* VAR_8,
 struct rrset_parse* VAR_9)
{
 if(VAR_7->a.count == 0)
  return 0;


 if(FUNC_5(VAR_7, VAR_8, VAR_9->dname, VAR_9->dname_len,
  FUNC_3(VAR_9->rrset_class))) {
  return 0;
 } else {

  socklen_t VAR_10;
  struct rr_parse* VAR_11, *VAR_12 = ((void*)0);
  if(VAR_9->type == VAR_4) {
   struct sockaddr_storage VAR_13;
   struct sockaddr_in VAR_14;

   VAR_10 = (socklen_t)sizeof(VAR_14);
   FUNC_2(&VAR_14, 0, VAR_10);
   VAR_14.sin_family = VAR_0;
   VAR_14.sin_port = (in_port_t)FUNC_0(VAR_6);
   for(VAR_11 = VAR_9->rr_first; VAR_11; VAR_11 = VAR_11->next) {
    if(FUNC_7(VAR_11->ttl_data+4)
     != VAR_3) {
     VAR_12 = VAR_11;
     continue;
    }
    FUNC_1(&VAR_14.sin_addr, VAR_11->ttl_data+4+2,
     VAR_3);
    FUNC_1(&VAR_13, &VAR_14, VAR_10);
    if(FUNC_4(VAR_7, &VAR_13, VAR_10)) {
     if(FUNC_6("sanitize: removing public name with private address", VAR_8, VAR_9, VAR_12, &VAR_11, &VAR_13, VAR_10))
      return 1;
     continue;
    }
    VAR_12 = VAR_11;
   }
  } else if(VAR_9->type == VAR_5) {
   struct sockaddr_storage VAR_15;
   struct sockaddr_in6 VAR_16;
   VAR_10 = (socklen_t)sizeof(VAR_16);
   FUNC_2(&VAR_16, 0, VAR_10);
   VAR_16.sin6_family = VAR_1;
   VAR_16.sin6_port = (in_port_t)FUNC_0(VAR_6);
   for(VAR_11 = VAR_9->rr_first; VAR_11; VAR_11 = VAR_11->next) {
    if(FUNC_7(VAR_11->ttl_data+4)
     != VAR_2) {
     VAR_12 = VAR_11;
     continue;
    }
    FUNC_1(&VAR_16.sin6_addr, VAR_11->ttl_data+4+2,
     VAR_2);
    FUNC_1(&VAR_15, &VAR_16, VAR_10);
    if(FUNC_4(VAR_7, &VAR_15, VAR_10)) {
     if(FUNC_6("sanitize: removing public name with private address", VAR_8, VAR_9, VAR_12, &VAR_11, &VAR_15, VAR_10))
      return 1;
     continue;
    }
    VAR_12 = VAR_11;
   }
  }
 }
 return 0;
}
