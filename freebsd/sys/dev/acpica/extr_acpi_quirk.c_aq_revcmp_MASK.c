
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ops_t { ____Placeholder_ops_t } ops_t ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, enum ops_t VAR_3, int VAR_4)
{
    switch (VAR_3) {
    case 129:
 if (VAR_2 <= VAR_4)
     return (VAR_1);
 break;
    case 130:
 if (VAR_2 >= VAR_4)
     return (VAR_1);
 break;
    case 131:
 if (VAR_2 == VAR_4)
     return (VAR_1);
 break;
    case 128:
 return (VAR_1);
    default:
 FUNC_0("aq_revcmp: invalid op %d", VAR_3);
    }

    return (VAR_0);
}
