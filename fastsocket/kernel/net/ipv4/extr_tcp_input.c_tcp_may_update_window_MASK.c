
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ const snd_una; scalar_t__ const snd_wl1; scalar_t__ const snd_wnd; } ;


 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static inline int FUNC_1(const struct tcp_sock *VAR_0,
     const u32 VAR_1, const u32 VAR_2,
     const u32 VAR_3)
{
 return (FUNC_0(VAR_1, VAR_0->snd_una) ||
  FUNC_0(VAR_2, VAR_0->snd_wl1) ||
  (VAR_2 == VAR_0->snd_wl1 && VAR_3 > VAR_0->snd_wnd));
}
