
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_method_ret {void* ignore; } ;
struct eap_ikev2_data {int * in_buf; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct wpabuf* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,size_t) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_ikev2_data *VAR_5,
        struct eap_method_ret *VAR_6,
        u8 VAR_7, u8 VAR_8,
        u32 VAR_9,
        const u8 *VAR_10, size_t VAR_11)
{

 if (VAR_5->in_buf == ((void*)0) && !(VAR_8 & VAR_2)) {
  FUNC_1(VAR_3, "EAP-IKEV2: No Message Length field in "
      "a fragmented packet");
  VAR_6->ignore = VAR_4;
  return ((void*)0);
 }

 if (VAR_5->in_buf == ((void*)0)) {

  if (VAR_9 > 50000) {

   FUNC_1(VAR_3,
       "EAP-IKEV2: Ignore too long message");
   VAR_6->ignore = VAR_4;
   return ((void*)0);
  }
  VAR_5->in_buf = FUNC_2(VAR_9);
  if (VAR_5->in_buf == ((void*)0)) {
   FUNC_1(VAR_3, "EAP-IKEV2: No memory for "
       "message");
   VAR_6->ignore = VAR_4;
   return ((void*)0);
  }
  FUNC_3(VAR_5->in_buf, VAR_10, VAR_11);
  FUNC_1(VAR_3, "EAP-IKEV2: Received %lu bytes in first "
      "fragment, waiting for %lu bytes more",
      (unsigned long) VAR_11,
      (unsigned long) FUNC_4(VAR_5->in_buf));
 }

 VAR_6->ignore = VAR_1;
 return FUNC_0(VAR_7, VAR_0);
}
