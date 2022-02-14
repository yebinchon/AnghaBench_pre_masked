
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chan; int port; } ;
typedef TYPE_1__ ct_board_t ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned char FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (ct_board_t *VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = FUNC_3 (FUNC_0(VAR_3->port));

 if (VAR_4 & VAR_2) FUNC_2 (VAR_3);
 if (VAR_4 & VAR_0) FUNC_1 (VAR_3->chan + 0);
 if (VAR_4 & VAR_1) FUNC_1 (VAR_3->chan + 1);
}
