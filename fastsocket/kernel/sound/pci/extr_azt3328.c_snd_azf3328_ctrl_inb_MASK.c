
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_azf3328 {unsigned int ctrl_io; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline u8
FUNC_1(const struct snd_azf3328 *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_0->ctrl_io + VAR_1);
}
