
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xo_buffer_t ;
struct TYPE_3__ {int c_flags; } ;
typedef TYPE_1__ csv_private_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_1 (xo_buffer_t *VAR_1, csv_private_t *VAR_2)
{
    if (VAR_2->c_flags & VAR_0)
 FUNC_0(VAR_1, "\r\n", 2);
    else
 FUNC_0(VAR_1, "\n", 1);
}
