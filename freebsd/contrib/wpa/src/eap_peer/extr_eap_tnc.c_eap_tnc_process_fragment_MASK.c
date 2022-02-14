
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {int * in_buf; } ;
struct eap_method_ret {void* ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct wpabuf* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,size_t) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_tnc_data *VAR_4,
      struct eap_method_ret *VAR_5,
      u8 VAR_6, u8 VAR_7,
      u32 VAR_8,
      const u8 *VAR_9, size_t VAR_10)
{

 if (VAR_4->in_buf == ((void*)0) && !(VAR_7 & VAR_1)) {
  FUNC_1(VAR_2, "EAP-TNC: No Message Length field in a "
      "fragmented packet");
  VAR_5->ignore = VAR_3;
  return ((void*)0);
 }

 if (VAR_4->in_buf == ((void*)0)) {

  VAR_4->in_buf = FUNC_2(VAR_8);
  if (VAR_4->in_buf == ((void*)0)) {
   FUNC_1(VAR_2, "EAP-TNC: No memory for "
       "message");
   VAR_5->ignore = VAR_3;
   return ((void*)0);
  }
  FUNC_3(VAR_4->in_buf, VAR_9, VAR_10);
  FUNC_1(VAR_2, "EAP-TNC: Received %lu bytes in first "
      "fragment, waiting for %lu bytes more",
      (unsigned long) VAR_10,
      (unsigned long) FUNC_4(VAR_4->in_buf));
 }

 return FUNC_0(VAR_6, VAR_0);
}
