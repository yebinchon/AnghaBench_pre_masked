
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * e_rawhdr; } ;
struct TYPE_6__ {int e_activations; int e_fd; int e_u; int e_version; scalar_t__ e_rawsize; int * e_rawfile; int * e_parent; int e_kind; scalar_t__ e_flags; int e_cmd; int e_class; int e_byteorder; TYPE_1__ e_hdr; } ;
typedef TYPE_2__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_6 ;

Elf *
FUNC_4(void)
{
 Elf *VAR_7;

 if ((VAR_7 = FUNC_2(sizeof(*VAR_7))) == ((void*)0)) {
  FUNC_1(VAR_4, VAR_5);
  return ((void*)0);
 }

 VAR_7->e_activations = 1;
 VAR_7->e_hdr.e_rawhdr = ((void*)0);
 VAR_7->e_byteorder = VAR_1;
 VAR_7->e_class = VAR_0;
 VAR_7->e_cmd = VAR_2;
 VAR_7->e_fd = -1;
 VAR_7->e_flags = 0;
 VAR_7->e_kind = VAR_3;
 VAR_7->e_parent = ((void*)0);
 VAR_7->e_rawfile = ((void*)0);
 VAR_7->e_rawsize = 0;
 VAR_7->e_version = FUNC_0(VAR_6);

 (void) FUNC_3(&VAR_7->e_u, 0, sizeof(VAR_7->e_u));

 return (VAR_7);
}
