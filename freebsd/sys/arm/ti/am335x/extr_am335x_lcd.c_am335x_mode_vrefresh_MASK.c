
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct videomode {int dot_clock; int htotal; int vtotal; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_0(const struct videomode *VAR_2)
{
 uint32_t VAR_3;


        VAR_3 = (VAR_2->dot_clock * 1000 / VAR_2->htotal);
 VAR_3 = (VAR_3 + VAR_2->vtotal / 2) / VAR_2->vtotal;

 if (VAR_2->flags & VAR_1)
  VAR_3 *= 2;
 if (VAR_2->flags & VAR_0)
  VAR_3 /= 2;

 return VAR_3;
}
