
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_port; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3 (snd_wavefront_t *VAR_2)

{
 if (FUNC_2 (VAR_2, VAR_0))
  return FUNC_1 (VAR_2->data_port);

 FUNC_0 (VAR_1, "read timeout.\n");

 return -1;
}
