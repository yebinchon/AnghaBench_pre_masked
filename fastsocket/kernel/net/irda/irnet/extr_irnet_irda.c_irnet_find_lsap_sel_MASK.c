
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int daddr; int rsaddr; int iriap; int errno; } ;
typedef TYPE_1__ irnet_socket ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int ) ;
 int VAR_8 ;

__attribute__((used)) static inline int
FUNC_5(irnet_socket * VAR_9)
{
  FUNC_1(VAR_4, "(self=0x%p)\n", VAR_9);


  FUNC_0(VAR_9->iriap, -VAR_0, VAR_3, "busy with a previous query.\n");


  VAR_9->iriap = FUNC_4(VAR_7, VAR_2, VAR_9,
      VAR_8);


  VAR_9->errno = -VAR_1;


  FUNC_3(VAR_9->iriap, VAR_9->rsaddr, VAR_9->daddr,
    VAR_6, VAR_5);






  FUNC_2(VAR_4, "\n");
  return 0;
}
