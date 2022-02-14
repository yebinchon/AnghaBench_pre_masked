
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
 int FUNC_1 (unsigned char,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3 (snd_wavefront_t *VAR_2, unsigned char VAR_3)

{
 if (FUNC_2 (VAR_2, VAR_0)) {
  FUNC_1 (VAR_3, VAR_2->data_port);
  return 0;
 }

 FUNC_0 (VAR_1, "write timeout.\n");

 return -1;
}
