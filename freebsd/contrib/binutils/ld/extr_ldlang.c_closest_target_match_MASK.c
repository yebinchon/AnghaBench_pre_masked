
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ byteorder; scalar_t__ flavour; int name; } ;
typedef TYPE_1__ bfd_target ;
struct TYPE_6__ {scalar_t__ endian; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__ const* VAR_5 ;

__attribute__((used)) static int
FUNC_1 (const bfd_target *VAR_6, void *VAR_7)
{
  const bfd_target *VAR_8 = VAR_7;

  if (VAR_4.endian == VAR_2
      && VAR_6->byteorder != VAR_0)
    return 0;

  if (VAR_4.endian == VAR_3
      && VAR_6->byteorder != VAR_1)
    return 0;


  if (VAR_6->flavour != VAR_8->flavour)
    return 0;


  if (VAR_5 == ((void*)0))
    {
      VAR_5 = VAR_6;
      return 0;
    }



  if (FUNC_0 (VAR_6->name, VAR_8->name)
      > FUNC_0 (VAR_5->name, VAR_8->name))
    VAR_5 = VAR_6;


  return 0;
}
