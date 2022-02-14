
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ikev2_data {int in_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_ikev2_data*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int const*,size_t) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct eap_ikev2_data *VAR_2,
      const u8 *VAR_3, size_t VAR_4)
{

 if (VAR_4 > FUNC_3(VAR_2->in_buf)) {
  FUNC_1(VAR_1, "EAP-IKEV2: Fragment overflow");
  FUNC_0(VAR_2, VAR_0);
  return -1;
 }

 FUNC_2(VAR_2->in_buf, VAR_3, VAR_4);
 FUNC_1(VAR_1, "EAP-IKEV2: Received %lu bytes, waiting for %lu "
     "bytes more", (unsigned long) VAR_4,
     (unsigned long) FUNC_3(VAR_2->in_buf));

 return 0;
}
