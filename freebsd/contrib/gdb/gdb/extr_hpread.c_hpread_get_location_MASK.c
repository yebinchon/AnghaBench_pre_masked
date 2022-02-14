
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sltdesc; int address; } ;
struct TYPE_3__ {int address; } ;
union sltentry {TYPE_2__ snorm; TYPE_1__ snormoff; } ;
struct objfile {int dummy; } ;
typedef scalar_t__ sltpointer ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 union sltentry* FUNC_0 (scalar_t__,struct objfile*) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (sltpointer VAR_4, struct objfile *VAR_5)
{
  union sltentry *VAR_6;
  int VAR_7;


  VAR_6 = FUNC_0 (VAR_4, VAR_5);

  if (VAR_6->snorm.sltdesc == VAR_0)
    {

      for (VAR_7 = 0; ((VAR_6->snorm.sltdesc != VAR_2) &&
     (VAR_6->snorm.sltdesc != VAR_3) &&
     (VAR_6->snorm.sltdesc != VAR_1)); VAR_7++)
 VAR_6 = FUNC_0 (VAR_4 - VAR_7, VAR_5);
      if (VAR_6->snorm.sltdesc == VAR_3)
 return VAR_6->snormoff.address;
      else
 return VAR_6->snorm.address;
    }


  for (VAR_7 = 0; ((VAR_6->snorm.sltdesc != VAR_2) &&
        (VAR_6->snorm.sltdesc != VAR_3) &&
        (VAR_6->snorm.sltdesc != VAR_1)); VAR_7++)
    VAR_6 = FUNC_0 (VAR_4 + VAR_7, VAR_5);
  if (VAR_6->snorm.sltdesc == VAR_3)
    return VAR_6->snormoff.address;
  else
    return VAR_6->snorm.address;
}
