
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {void* me_record; void* trailer_part; } ;
struct TYPE_13__ {TYPE_1__ r; } ;
struct TYPE_14__ {TYPE_2__ w; } ;
typedef TYPE_3__ ieee_data_type ;
typedef int bfd_boolean ;
struct TYPE_15__ {scalar_t__ start_address; } ;
typedef TYPE_4__ bfd ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 void* FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_6)
{
  ieee_data_type *VAR_7 = FUNC_0 (VAR_6);
  VAR_7->w.r.trailer_part = FUNC_1 (VAR_6);
  if (VAR_6->start_address)
    {
      if (! FUNC_2 (VAR_6, VAR_5)
   || ! FUNC_3 (VAR_6, VAR_3)
   || ! FUNC_4 (VAR_6, VAR_6->start_address)
   || ! FUNC_3 (VAR_6, VAR_2))
 return VAR_0;
    }
  VAR_7->w.r.me_record = FUNC_1 (VAR_6);
  if (! FUNC_3 (VAR_6, VAR_4))
    return VAR_0;
  return VAR_1;
}
