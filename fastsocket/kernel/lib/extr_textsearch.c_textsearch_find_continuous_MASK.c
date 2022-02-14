
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_state {scalar_t__ cb; } ;
struct ts_linear_state {unsigned int len; void const* data; } ;
struct ts_config {int get_next_block; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ts_config*,struct ts_state*) ;

unsigned int FUNC_1(struct ts_config *VAR_1,
     struct ts_state *VAR_2,
     const void *VAR_3, unsigned int VAR_4)
{
 struct ts_linear_state *VAR_5 = (struct ts_linear_state *) VAR_2->cb;

 VAR_1->get_next_block = VAR_0;
 VAR_5->data = VAR_3;
 VAR_5->len = VAR_4;

 return FUNC_0(VAR_1, VAR_2);
}
