
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** redirection; } ;
struct TYPE_3__ {int inf_handle; scalar_t__ file_name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_4, int VAR_5)
{
  FUNC_1 ("Inferior's terminal is in %s mode.\n",
       !VAR_2
       ? "default" : VAR_3 ? "raw" : "cooked");
}
