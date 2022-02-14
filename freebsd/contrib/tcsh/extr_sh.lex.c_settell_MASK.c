
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_11 ;
 void* FUNC_1 (int,int) ;

void
FUNC_2(void)
{
    off_t VAR_12;
    VAR_4 = 0;
    if (VAR_3 || VAR_11 || VAR_10)
 return;
    if ((VAR_12 = FUNC_0(VAR_2, (off_t) 0, VAR_1)) == -1)
 return;
    VAR_7 = FUNC_1(2, sizeof(Char **));
    VAR_5 = 1;
    VAR_7[0] = FUNC_1(VAR_0, sizeof(Char));
    VAR_9 = VAR_6 = VAR_8 = VAR_12;
    VAR_4 = 1;
}
