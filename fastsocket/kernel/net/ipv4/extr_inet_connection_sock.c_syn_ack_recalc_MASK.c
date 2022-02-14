
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct request_sock {int const retrans; } ;
struct TYPE_2__ {int acked; } ;


 TYPE_1__* FUNC_0 (struct request_sock*) ;

__attribute__((used)) static inline void FUNC_1(struct request_sock *VAR_0, const int VAR_1,
      const int VAR_2,
      const u8 VAR_3,
      int *VAR_4, int *VAR_5)
{
 if (!VAR_3) {
  *VAR_4 = VAR_0->retrans >= VAR_1;
  *VAR_5 = 1;
  return;
 }
 *VAR_4 = VAR_0->retrans >= VAR_1 &&
    (!FUNC_0(VAR_0)->acked || VAR_0->retrans >= VAR_2);





 *VAR_5 = !FUNC_0(VAR_0)->acked ||
    VAR_0->retrans >= VAR_3 - 1;
}
