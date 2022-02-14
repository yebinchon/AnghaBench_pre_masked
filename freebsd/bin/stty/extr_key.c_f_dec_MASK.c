
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_2__ {int c_lflag; int c_iflag; void** c_cc; } ;
struct info {int set; TYPE_1__ t; } ;


 void* FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

void
FUNC_1(struct info *VAR_8)
{

 VAR_8->t.c_cc[VAR_5] = (u_char)0177;
 VAR_8->t.c_cc[VAR_7] = FUNC_0('u');
 VAR_8->t.c_cc[VAR_6] = FUNC_0('c');
 VAR_8->t.c_lflag &= ~VAR_3;
 VAR_8->t.c_lflag |= VAR_1|VAR_2|VAR_0;
 VAR_8->t.c_iflag &= ~VAR_4;
 VAR_8->set = 1;
}
