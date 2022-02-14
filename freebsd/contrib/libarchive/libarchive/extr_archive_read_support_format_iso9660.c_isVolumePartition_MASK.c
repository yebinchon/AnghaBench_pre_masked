
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct iso9660 {scalar_t__ volume_block; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(struct iso9660 *VAR_1, const unsigned char *VAR_2)
{
 int32_t VAR_3;


 if (VAR_2[0] != 3)
  return (0);


 if (VAR_2[6] != 1)
  return (0);

 if (VAR_2[7] != 0)
  return (0);

 VAR_3 = FUNC_1(VAR_2 + 72);
 if (VAR_3 <= VAR_0 ||
     VAR_3 >= VAR_1->volume_block)
  return (0);
 if ((uint32_t)VAR_3 != FUNC_0(VAR_2 + 76))
  return (0);

 return (1);
}
