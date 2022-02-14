
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct xt_multiport_v1 {unsigned int count; scalar_t__* ports; scalar_t__ flags; int invert; scalar_t__* pflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,...) ;

__attribute__((used)) static inline bool
FUNC_1(const struct xt_multiport_v1 *VAR_3,
        u_int16_t VAR_4, u_int16_t VAR_5)
{
 unsigned int VAR_6;
 u_int16_t VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  VAR_7 = VAR_3->ports[VAR_6];

  if (VAR_3->pflags[VAR_6]) {

   VAR_8 = VAR_3->ports[++VAR_6];
   FUNC_0("src or dst matches with %d-%d?\n", VAR_7, VAR_8);

   if (VAR_3->flags == VAR_2
       && VAR_4 >= VAR_7 && VAR_4 <= VAR_8)
    return 1 ^ VAR_3->invert;
   if (VAR_3->flags == VAR_0
       && VAR_5 >= VAR_7 && VAR_5 <= VAR_8)
    return 1 ^ VAR_3->invert;
   if (VAR_3->flags == VAR_1
       && ((VAR_5 >= VAR_7 && VAR_5 <= VAR_8)
    || (VAR_4 >= VAR_7 && VAR_4 <= VAR_8)))
    return 1 ^ VAR_3->invert;
  } else {

   FUNC_0("src or dst matches with %d?\n", VAR_7);

   if (VAR_3->flags == VAR_2
       && VAR_4 == VAR_7)
    return 1 ^ VAR_3->invert;
   if (VAR_3->flags == VAR_0
       && VAR_5 == VAR_7)
    return 1 ^ VAR_3->invert;
   if (VAR_3->flags == VAR_1
       && (VAR_4 == VAR_7 || VAR_5 == VAR_7))
    return 1 ^ VAR_3->invert;
  }
 }

 return VAR_3->invert;
}
