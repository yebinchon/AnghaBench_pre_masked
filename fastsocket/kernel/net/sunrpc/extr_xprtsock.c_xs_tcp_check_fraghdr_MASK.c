
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {scalar_t__ tcp_offset; scalar_t__ tcp_reclen; int tcp_flags; scalar_t__ tcp_copied; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct sock_xprt *VAR_4)
{
 if (VAR_4->tcp_offset == VAR_4->tcp_reclen) {
  VAR_4->tcp_flags |= VAR_1;
  VAR_4->tcp_offset = 0;
  if (VAR_4->tcp_flags & VAR_3) {
   VAR_4->tcp_flags &= ~VAR_0;
   VAR_4->tcp_flags |= VAR_2;
   VAR_4->tcp_copied = 0;
  }
 }
}
