
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rlim_t ;
struct TYPE_7__ {int rlimit; } ;
typedef TYPE_2__ config_tree ;
struct TYPE_6__ {int i; } ;
struct TYPE_8__ {int attr; TYPE_1__ value; struct TYPE_8__* link; } ;
typedef TYPE_3__ attr_val ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int,char*) ;

__attribute__((used)) static void
FUNC_7(
 config_tree *VAR_9
 )
{
 attr_val * VAR_10;

 VAR_10 = FUNC_1(VAR_9->rlimit);
 for (; VAR_10 != ((void*)0); VAR_10 = VAR_10->link) {
  switch (VAR_10->attr) {

  default:
   FUNC_2("config-rlimit: value-token=%d", VAR_10->attr);

  case 129:

   if (FUNC_0( VAR_7 )) {
    break;
   }
   if (VAR_10->value.i == -1) {
   } else if (VAR_10->value.i >= 0) {
    FUNC_4(VAR_1, "'rlimit memlock' specified but is not available on this system.");

   } else {
    FUNC_4(VAR_1, "'rlimit memlock' value of %d is unexpected!", VAR_10->value.i);
   }
   break;

  case 128:







   FUNC_4(VAR_1, "'rlimit stacksize' specified but is not available on this system.");

   break;

  case 130:







   FUNC_4(VAR_1, "'rlimit filenum' specified but is not available on this system.");

   break;

  }
 }
}
