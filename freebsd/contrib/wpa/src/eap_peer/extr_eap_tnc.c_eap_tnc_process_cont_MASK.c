
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_tnc_data {int in_buf; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int const*,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct eap_tnc_data *VAR_2,
    const u8 *VAR_3, size_t VAR_4)
{

 if (VAR_4 > FUNC_2(VAR_2->in_buf)) {
  FUNC_0(VAR_1, "EAP-TNC: Fragment overflow");
  VAR_2->state = VAR_0;
  return -1;
 }

 FUNC_1(VAR_2->in_buf, VAR_3, VAR_4);
 FUNC_0(VAR_1, "EAP-TNC: Received %lu bytes, waiting for "
     "%lu bytes more", (unsigned long) VAR_4,
     (unsigned long) FUNC_2(VAR_2->in_buf));

 return 0;
}
