
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {scalar_t__ sk_type; } ;
struct TYPE_2__ {scalar_t__ sec_level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_5, u8 VAR_6)
{
 if (VAR_5->sk_type != VAR_4)
  return;

 if (VAR_6 == 0x00) {
  if (FUNC_1(VAR_5)->sec_level == VAR_1) {
   FUNC_2(VAR_5);
   FUNC_3(VAR_5, VAR_3 * 5);
  } else if (FUNC_1(VAR_5)->sec_level == VAR_0)
   FUNC_0(VAR_5, VAR_2);
 } else {
  if (FUNC_1(VAR_5)->sec_level == VAR_1)
   FUNC_2(VAR_5);
 }
}
