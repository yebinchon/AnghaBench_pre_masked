
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tnc_data {scalar_t__ out_used; int fragment_size; int was_fail; int was_done; scalar_t__ state; int * out_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int) ;
 int FUNC_1 (struct eap_tnc_data*,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct wpabuf*,scalar_t__) ;
 int FUNC_7 (struct wpabuf*,scalar_t__,size_t) ;
 int FUNC_8 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_tnc_data *VAR_10, u8 VAR_11)
{
 struct wpabuf *VAR_12;
 u8 VAR_13;
 size_t VAR_14, VAR_15;

 FUNC_2(VAR_8, "EAP-TNC: Generating Request");

 VAR_13 = VAR_4;
 VAR_14 = FUNC_5(VAR_10->out_buf) - VAR_10->out_used;
 if (1 + VAR_14 > VAR_10->fragment_size) {
  VAR_14 = VAR_10->fragment_size - 1;
  VAR_13 |= VAR_3;
  if (VAR_10->out_used == 0) {
   VAR_13 |= VAR_2;
   VAR_14 -= 4;
  }
 }

 VAR_15 = 1 + VAR_14;
 if (VAR_13 & VAR_2)
  VAR_15 += 4;
 VAR_12 = FUNC_0(VAR_6, VAR_5, VAR_15,
       VAR_1, VAR_11);
 if (VAR_12 == ((void*)0))
  return ((void*)0);

 FUNC_8(VAR_12, VAR_13);
 if (VAR_13 & VAR_2)
  FUNC_6(VAR_12, FUNC_5(VAR_10->out_buf));

 FUNC_7(VAR_12, FUNC_4(VAR_10->out_buf) + VAR_10->out_used,
   VAR_14);
 VAR_10->out_used += VAR_14;

 if (VAR_10->out_used == FUNC_5(VAR_10->out_buf)) {
  FUNC_2(VAR_8, "EAP-TNC: Sending out %lu bytes "
      "(message sent completely)",
      (unsigned long) VAR_14);
  FUNC_3(VAR_10->out_buf);
  VAR_10->out_buf = ((void*)0);
  VAR_10->out_used = 0;
  if (VAR_10->was_fail)
   FUNC_1(VAR_10, VAR_7);
  else if (VAR_10->was_done)
   FUNC_1(VAR_10, VAR_0);
 } else {
  FUNC_2(VAR_8, "EAP-TNC: Sending out %lu bytes "
      "(%lu more to send)", (unsigned long) VAR_14,
      (unsigned long) FUNC_5(VAR_10->out_buf) -
      VAR_10->out_used);
  if (VAR_10->state == VAR_7)
   VAR_10->was_fail = 1;
  else if (VAR_10->state == VAR_0)
   VAR_10->was_done = 1;
  FUNC_1(VAR_10, VAR_9);
 }

 return VAR_12;
}
