
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_state {int dummy; } ;
struct ts_config {int finish; int get_next_block; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct ts_state*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (struct ts_config*,struct ts_state*) ;

unsigned int FUNC_3(struct sk_buff *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5, struct ts_config *VAR_6,
      struct ts_state *VAR_7)
{
 unsigned int VAR_8;

 VAR_6->get_next_block = VAR_2;
 VAR_6->finish = VAR_1;

 FUNC_1(VAR_3, VAR_4, VAR_5, FUNC_0(VAR_7));

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 return (VAR_8 <= VAR_5 - VAR_4 ? VAR_8 : VAR_0);
}
