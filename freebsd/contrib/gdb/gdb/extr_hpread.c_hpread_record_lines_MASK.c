
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ address; int line; } ;
struct TYPE_4__ {scalar_t__ sltdesc; scalar_t__ address; int line; } ;
union sltentry {TYPE_1__ snormoff; TYPE_2__ snorm; } ;
struct subfile {int dummy; } ;
struct objfile {int dummy; } ;
typedef scalar_t__ sltpointer ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 union sltentry* FUNC_0 (scalar_t__,struct objfile*) ;
 int FUNC_1 (struct subfile*,int ,scalar_t__) ;

__attribute__((used)) static sltpointer
FUNC_2 (struct subfile *VAR_3, sltpointer VAR_4,
       sltpointer VAR_5, struct objfile *VAR_6,
       CORE_ADDR VAR_7)
{
  union sltentry *VAR_8;

  while (VAR_4 <= VAR_5)
    {
      VAR_8 = FUNC_0 (VAR_4, VAR_6);

      if (VAR_8->snorm.sltdesc == VAR_1
   || VAR_8->snorm.sltdesc == VAR_0)
 FUNC_1 (VAR_3, VAR_8->snorm.line,
       VAR_8->snorm.address + VAR_7);
      else if (VAR_8->snorm.sltdesc == VAR_2)
 FUNC_1 (VAR_3, VAR_8->snormoff.line,
       VAR_8->snormoff.address + VAR_7);
      VAR_4++;
    }
  return VAR_5;
}
