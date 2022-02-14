
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int max_single_write; int max_single_read; int * rate_limiting; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct bufferevent_private *VAR_2)
{
 VAR_2->rate_limiting = ((void*)0);
 VAR_2->max_single_read = VAR_0;
 VAR_2->max_single_write = VAR_1;

 return 0;
}
