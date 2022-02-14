
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_file {int curfd; } ;
struct open_file {scalar_t__ f_fsdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct split_file*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_0)
{
    int VAR_1;
    struct split_file *VAR_2;

    VAR_2 = (struct split_file *)VAR_0->f_fsdata;
    VAR_1 = VAR_2->curfd;
    FUNC_1(VAR_2);
    return(FUNC_0(VAR_1));
}
