
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {void (* cleanup ) (struct subprocess_info*) ;int (* init ) (struct subprocess_info*) ;void* data; } ;



void FUNC_0(struct subprocess_info *VAR_0,
      int (*VAR_1)(struct subprocess_info *VAR_2),
      void (*VAR_3)(struct subprocess_info *VAR_4),
      void *VAR_5)
{
 VAR_0->cleanup = VAR_3;
 VAR_0->init = VAR_1;
 VAR_0->data = VAR_5;
}
