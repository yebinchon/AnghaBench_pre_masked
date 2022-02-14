
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disco_number; int * discoveries; } ;
typedef TYPE_1__ irnet_socket ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(irnet_socket * VAR_3)
{
  __u16 VAR_4 = FUNC_2(VAR_2);


  VAR_3->discoveries = FUNC_1(&VAR_3->disco_number, VAR_4,
       VAR_1);


  if(VAR_3->discoveries == ((void*)0))
    VAR_3->disco_number = -1;

  FUNC_0(VAR_0, "Got the log (0x%p), size is %d\n",
 VAR_3->discoveries, VAR_3->disco_number);
}
