
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ecore_roce_qp_state { ____Placeholder_ecore_roce_qp_state } ecore_roce_qp_state ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum ib_qp_state
FUNC_0(enum ecore_roce_qp_state VAR_7)
{
 enum ib_qp_state VAR_8 = VAR_0;

 switch (VAR_7) {
 case 132:
  VAR_8 = VAR_2;
  break;

 case 133:
  VAR_8 = VAR_1;
  break;

 case 131:
  VAR_8 = VAR_3;
  break;

 case 130:
  VAR_8 = VAR_4;
  break;

 case 129:
  VAR_8 = VAR_5;
  break;

 case 134:
  VAR_8 = VAR_0;
  break;

 case 128:
  VAR_8 = VAR_6;
  break;
 }
 return VAR_8;
}
