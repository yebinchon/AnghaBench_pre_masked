
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ikev2_initiator_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ikev2_initiator_data *VAR_2,
       u8 VAR_3, const u8 *VAR_4, size_t VAR_5)
{
 if (VAR_3 != VAR_0) {
  FUNC_0(VAR_1, "IKEV2: Unsupported authentication "
      "method %d", VAR_3);
  return -1;
 }


 return 0;
}
