
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct device {int priv; int * release_rx_buf; int * peek_rx_buf; int * get_rx_buf; int copy_rx_buf; int get_stats; int close; int xmit; int open; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2 (struct device *VAR_5)
{
  if (!FUNC_0())
     return (0);

  VAR_5->open = VAR_2;
  VAR_5->xmit = VAR_4;
  VAR_5->close = VAR_1;
  VAR_5->get_stats = VAR_3;
  VAR_5->copy_rx_buf = VAR_0;
  VAR_5->get_rx_buf = ((void*)0);
  VAR_5->peek_rx_buf = ((void*)0);
  VAR_5->release_rx_buf = ((void*)0);
  VAR_5->priv = FUNC_1 (sizeof(struct net_device_stats), 1);
  if (!VAR_5->priv)
     return (0);
  return (1);
}
