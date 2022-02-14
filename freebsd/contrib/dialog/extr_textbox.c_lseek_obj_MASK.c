
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ MY_OBJ ;





 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static long
FUNC_2(MY_OBJ * VAR_0, long VAR_1, int VAR_2)
{
    long VAR_3;
    if ((VAR_3 = (long) FUNC_1(VAR_0->fd, (off_t) VAR_1, VAR_2)) == -1) {
 switch (VAR_2) {
 default:
 case 130:
     FUNC_0("Cannot get file position");
     break;
 case 129:
     FUNC_0("Cannot seek to end of file");
     break;
 case 128:
     FUNC_0("Cannot set file position to %ld", VAR_1);
     break;
 }
    }
    return VAR_3;
}
