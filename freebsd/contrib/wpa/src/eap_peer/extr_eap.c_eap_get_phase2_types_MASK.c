
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct eap_peer_config {int * private_key2; } ;
struct eap_method_type {int vendor; scalar_t__ method; } ;
struct eap_method {int vendor; scalar_t__ method; struct eap_method* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 struct eap_method* FUNC_1 (size_t*) ;
 struct eap_method_type* FUNC_2 (size_t) ;

struct eap_method_type * FUNC_3(struct eap_peer_config *VAR_2,
           size_t *VAR_3)
{
 struct eap_method_type *VAR_4;
 u32 VAR_5;
 int VAR_6;
 size_t VAR_7;
 const struct eap_method *VAR_8, *VAR_9;

 VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 *VAR_3 = 0;
 VAR_4 = FUNC_2(VAR_7 * sizeof(struct eap_method_type));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 for (VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->next) {
  VAR_6 = VAR_9->vendor;
  VAR_5 = VAR_9->method;
  if (FUNC_0(VAR_6, VAR_5)) {
   if (VAR_6 == VAR_1 &&
       VAR_5 == VAR_0 && VAR_2 &&
       VAR_2->private_key2 == ((void*)0))
    continue;
   VAR_4[*VAR_3].vendor = VAR_6;
   VAR_4[*VAR_3].method = VAR_5;
   (*VAR_3)++;
  }
 }

 return VAR_4;
}
