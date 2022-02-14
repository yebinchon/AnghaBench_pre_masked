
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kc_arg; int (* kc_func ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_9__ {TYPE_1__ kb_callback; } ;
typedef TYPE_2__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_3, void *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_3) && FUNC_1(VAR_3)) {

  (*VAR_3->kb_callback.kc_func)(VAR_3, VAR_1,
         VAR_3->kb_callback.kc_arg);
 } else {

  do {
   VAR_5 = FUNC_3(VAR_3, VAR_0);
  } while (VAR_5 != VAR_2);
 }

 return (0);
}
