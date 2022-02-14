
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {long dd_size; long dd_loc; int dd_fd; } ;
typedef TYPE_1__ RST_DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static long
FUNC_1(RST_DIR *VAR_1)
{
 return ((long)FUNC_0(VAR_1->dd_fd,
     (off_t)0, VAR_0) - VAR_1->dd_size + VAR_1->dd_loc);
}
