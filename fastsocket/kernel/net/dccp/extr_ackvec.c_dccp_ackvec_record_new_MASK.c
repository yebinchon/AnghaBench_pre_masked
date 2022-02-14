
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_ackvec_record {int avr_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct dccp_ackvec_record* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct dccp_ackvec_record *FUNC_2(void)
{
 struct dccp_ackvec_record *VAR_2 =
   FUNC_1(VAR_1, VAR_0);

 if (VAR_2 != ((void*)0))
  FUNC_0(&VAR_2->avr_node);

 return VAR_2;
}
