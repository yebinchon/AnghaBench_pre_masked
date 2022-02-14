
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cc; void* c_ospeed; void* c_ispeed; int c_oflag; int c_lflag; int c_iflag; int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_5 ;

void
FUNC_1(struct termios *VAR_6)
{

 VAR_6->c_cflag = VAR_0;
 VAR_6->c_iflag = VAR_1;
 VAR_6->c_lflag = VAR_2;
 VAR_6->c_oflag = VAR_3;
 VAR_6->c_ispeed = VAR_4;
 VAR_6->c_ospeed = VAR_4;
 FUNC_0(&VAR_6->c_cc, VAR_5, sizeof VAR_5);
}
