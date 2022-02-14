
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int dummy; } ;
struct sc_chinfo {scalar_t__ dir; struct sc_pcminfo* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sc_info*,scalar_t__,unsigned short) ;

__attribute__((used)) static int
FUNC_1(struct sc_chinfo *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned short VAR_5)
{
 struct sc_pcminfo *VAR_6;
 struct sc_info *VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->parent;
 VAR_7 = VAR_6->sc;

 VAR_8 = 0;
 if (VAR_2->dir == VAR_1)
  VAR_8 = 64;

 FUNC_0(VAR_7, VAR_0 +
     ((VAR_8 + VAR_4 + 128 * VAR_3) * sizeof(uint32_t)),
     VAR_5 & 0xFFFF);

 return (0);
}
