
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_ackvec_record {int avr_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct dccp_ackvec_record*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dccp_ackvec_record *VAR_1)
{
 if (FUNC_3(VAR_1 == ((void*)0)))
  return;

 FUNC_0(!FUNC_2(&VAR_1->avr_node));
 FUNC_1(VAR_0, VAR_1);
}
