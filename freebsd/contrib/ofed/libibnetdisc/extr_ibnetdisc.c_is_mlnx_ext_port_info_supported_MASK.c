
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* node; } ;
typedef TYPE_2__ ibnd_port_t ;
struct TYPE_4__ {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(ibnd_port_t * VAR_2)
{
 uint16_t VAR_3 = (uint16_t) FUNC_0(VAR_2->node->info, 0, VAR_0);
 uint32_t VAR_4 = (uint32_t) FUNC_0(VAR_2->node->info, 0, VAR_1);

 if ((VAR_3 >= 0xc738 && VAR_3 <= 0xc73b) || VAR_3 == 0xcb20 || VAR_3 == 0xcf08 ||
     ((VAR_4 == 0x119f) &&

      (VAR_3 == 0x1b02 || VAR_3 == 0x1b50 ||

       VAR_3 == 0x1ba0 ||
       (VAR_3 >= 0x1bd0 && VAR_3 <= 0x1bd5))))
  return 1;
 if ((VAR_3 >= 0x1003 && VAR_3 <= 0x1017) ||
     ((VAR_4 == 0x119f) &&

      (VAR_3 == 0x1b33 || VAR_3 == 0x1b73 ||
       VAR_3 == 0x1b40 || VAR_3 == 0x1b41 ||
       VAR_3 == 0x1b60 || VAR_3 == 0x1b61 ||

       VAR_3 == 0x1b83 ||
       VAR_3 == 0x1b93 || VAR_3 == 0x1b94 ||

       VAR_3 == 0x1bb4 || VAR_3 == 0x1bb5 ||
       VAR_3 == 0x1bc4)))
  return 1;
 return 0;
}
