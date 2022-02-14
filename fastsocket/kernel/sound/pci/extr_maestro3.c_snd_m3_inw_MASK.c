
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_m3 {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct snd_m3 *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1);
}
