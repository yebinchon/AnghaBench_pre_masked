
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* bl_t ;
struct TYPE_5__ {int b_fd; int b_connected; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(bl_t VAR_1, bool VAR_2)
{
 int VAR_3 = VAR_0;
 if (!VAR_2)
  FUNC_0(VAR_1);
 FUNC_2(VAR_1->b_fd);
 VAR_0 = VAR_3;
 VAR_1->b_fd = -1;
 VAR_1->b_connected = -1;
 if (!VAR_2)
  FUNC_1(VAR_1);
}
