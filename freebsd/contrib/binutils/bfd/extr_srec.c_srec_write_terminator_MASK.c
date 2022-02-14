
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ tdata_type ;
typedef int bfd_boolean ;
struct TYPE_7__ {int start_address; } ;
typedef TYPE_2__ bfd ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int ,int *,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_0, tdata_type *VAR_1)
{
  return FUNC_0 (VAR_0, 10 - VAR_1->type,
       VAR_0->start_address, ((void*)0), ((void*)0));
}
