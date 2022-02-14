
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ max_window; scalar_t__ undo_marker; scalar_t__ snd_una; scalar_t__ snd_nxt; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct tcp_sock *VAR_0, int VAR_1,
      u32 VAR_2, u32 VAR_3)
{

 if (FUNC_0(VAR_3, VAR_0->snd_nxt) || !FUNC_1(VAR_2, VAR_3))
  return 0;


 if (!FUNC_1(VAR_2, VAR_0->snd_nxt))
  return 0;




 if (FUNC_0(VAR_2, VAR_0->snd_una))
  return 1;

 if (!VAR_1 || !VAR_0->undo_marker)
  return 0;


 if (FUNC_0(VAR_3, VAR_0->snd_una))
  return 0;

 if (!FUNC_1(VAR_2, VAR_0->undo_marker))
  return 1;


 if (!FUNC_0(VAR_3, VAR_0->undo_marker))
  return 0;




 return !FUNC_1(VAR_2, VAR_3 - VAR_0->max_window);
}
