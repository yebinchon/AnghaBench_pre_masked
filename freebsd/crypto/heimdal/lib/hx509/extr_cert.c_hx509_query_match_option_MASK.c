
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_query_option ;
struct TYPE_3__ {int match; } ;
typedef TYPE_1__ hx509_query ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;

void
FUNC_0(hx509_query *VAR_4, hx509_query_option VAR_5)
{
    switch(VAR_5) {
    case 128:
 VAR_4->match |= VAR_3;
 break;
    case 130:
 VAR_4->match |= VAR_1;
 break;
    case 131:
 VAR_4->match |= VAR_0;
 break;
    case 129:
 VAR_4->match |= VAR_2;
 break;
    case 132:
    default:
 break;
    }
}
