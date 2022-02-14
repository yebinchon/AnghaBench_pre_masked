
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rc4_state {int dummy; } ;
struct mbuf {int dummy; } ;
struct krb5_key_state {int dummy; } ;


 int FUNC_0 (struct krb5_key_state const*,int ,int *) ;
 int FUNC_1 (int *,void*,size_t,int *) ;
 int FUNC_2 (struct mbuf*,size_t,size_t,int ,struct rc4_state*) ;
 int VAR_0 ;
 int FUNC_3 (struct rc4_state*,int *,int) ;

__attribute__((used)) static void
FUNC_4(const struct krb5_key_state *VAR_1, struct mbuf *VAR_2,
    size_t VAR_3, size_t VAR_4, void *VAR_5, size_t VAR_6)
{
 struct rc4_state VAR_7;
 uint8_t VAR_8[16];

 FUNC_0(VAR_1, 0, VAR_8);




 if (VAR_5) {
  uint8_t VAR_9[16];
  FUNC_1(VAR_8, VAR_5, VAR_6, VAR_9);
  FUNC_3(&VAR_7, VAR_9, 16);
 } else {
  FUNC_3(&VAR_7, VAR_8, 16);
 }

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0, &VAR_7);
}
