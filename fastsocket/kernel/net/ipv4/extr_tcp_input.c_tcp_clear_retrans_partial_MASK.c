
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ undo_retrans; scalar_t__ undo_marker; scalar_t__ lost_out; scalar_t__ retrans_out; } ;



__attribute__((used)) static void FUNC_0(struct tcp_sock *VAR_0)
{
 VAR_0->retrans_out = 0;
 VAR_0->lost_out = 0;

 VAR_0->undo_marker = 0;
 VAR_0->undo_retrans = 0;
}
