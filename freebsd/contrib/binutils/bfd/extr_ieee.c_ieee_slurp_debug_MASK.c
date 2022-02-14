
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ debug_information_part; } ;
struct TYPE_9__ {TYPE_1__ r; } ;
struct TYPE_10__ {TYPE_2__ w; } ;
typedef TYPE_3__ ieee_data_type ;
typedef int flagword ;
typedef scalar_t__ file_ptr ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_11__ {scalar_t__ filepos; scalar_t__ size; } ;
typedef TYPE_4__ asection ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_4)
{
  ieee_data_type *VAR_5 = FUNC_0 (VAR_4);
  asection *VAR_6;
  file_ptr VAR_7;
  flagword VAR_8;

  if (VAR_5->w.r.debug_information_part == 0)
    return VAR_3;

  VAR_8 = VAR_1 | VAR_2;
  VAR_6 = FUNC_1 (VAR_4, ".debug", VAR_8);
  if (VAR_6 == ((void*)0))
    return VAR_0;
  VAR_6->filepos = VAR_5->w.r.debug_information_part;

  VAR_7 = FUNC_2 (VAR_5, VAR_5->w.r.debug_information_part);
  VAR_6->size = VAR_7 - VAR_5->w.r.debug_information_part;

  return VAR_3;
}
