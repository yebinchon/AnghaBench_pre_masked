
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int freeze_start; int freeze_end; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

int
FUNC_2(struct evbuffer *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);
 if (VAR_1)
  VAR_0->freeze_start = 1;
 else
  VAR_0->freeze_end = 1;
 FUNC_1(VAR_0);
 return 0;
}
