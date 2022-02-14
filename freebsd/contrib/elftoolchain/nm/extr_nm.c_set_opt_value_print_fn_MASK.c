
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum radix { ____Placeholder_radix } radix ;
struct TYPE_2__ {int * value_print_fn; int * size_print_fn; } ;





 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(enum radix VAR_7)
{

 switch (VAR_7) {
 case 128:
  VAR_0.value_print_fn = &VAR_6;
  VAR_0.size_print_fn = &VAR_3;

  break;
 case 130:
  VAR_0.value_print_fn = &VAR_4;
  VAR_0.size_print_fn = &VAR_1;

  break;
 case 129:
 default :
  VAR_0.value_print_fn = &VAR_5;
  VAR_0.size_print_fn = &VAR_2;
 }

 FUNC_0(VAR_0.value_print_fn != ((void*)0) &&
     "nm_opts.value_print_fn is null");
}
