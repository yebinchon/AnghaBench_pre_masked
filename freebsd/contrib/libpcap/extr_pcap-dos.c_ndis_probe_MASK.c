
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * release_rx_buf; int * peek_rx_buf; int * get_rx_buf; int * copy_rx_buf; int get_stats; int close; int * xmit; int open; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1 (struct device *VAR_3)
{





  VAR_3->open = VAR_1;
  VAR_3->xmit = ((void*)0);
  VAR_3->close = VAR_0;
  VAR_3->get_stats = VAR_2;
  VAR_3->copy_rx_buf = ((void*)0);
  VAR_3->get_rx_buf = ((void*)0);
  VAR_3->peek_rx_buf = ((void*)0);
  VAR_3->release_rx_buf = ((void*)0);
  return (0);
}
