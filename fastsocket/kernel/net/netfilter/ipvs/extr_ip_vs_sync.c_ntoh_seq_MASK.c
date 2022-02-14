
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_seq {void* previous_delta; void* delta; void* init_seq; } ;


 void* FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_seq *VAR_0, struct ip_vs_seq *VAR_1)
{
 VAR_1->init_seq = FUNC_0(&VAR_0->init_seq);
 VAR_1->delta = FUNC_0(&VAR_0->delta);
 VAR_1->previous_delta = FUNC_0(&VAR_0->previous_delta);
}
