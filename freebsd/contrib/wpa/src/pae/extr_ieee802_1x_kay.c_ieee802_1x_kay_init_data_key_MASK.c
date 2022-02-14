
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_key {int next_pn; int user; int created_time; void* receives; void* transmits; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct data_key *VAR_1)
{
 VAR_1->transmits = VAR_0;
 VAR_1->receives = VAR_0;
 FUNC_0(&VAR_1->created_time);

 VAR_1->next_pn = 1;
 VAR_1->user = 1;
}
