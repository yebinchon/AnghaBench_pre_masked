
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,int,int ) ;

void
FUNC_4(int VAR_4)
{
    int VAR_5;

    if (VAR_4 <= 0)
 return;

    if (VAR_2 && FUNC_0(VAR_3))
 (void) FUNC_3(FUNC_1(VAR_3), 1, VAR_1);
    else {
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
     (void) FUNC_2(' ');
 VAR_0 += VAR_4;
    }
}
