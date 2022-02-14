
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; int ws_row; } ;
struct ttysize {int ts_cols; int ts_lines; } ;
typedef int ioctl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(int *VAR_5, int *VAR_6)
{
    *VAR_6 = FUNC_0(VAR_3);
    *VAR_5 = FUNC_0(VAR_4);
    return (FUNC_0(VAR_3) != *VAR_6 || FUNC_0(VAR_4) != *VAR_5);
}
