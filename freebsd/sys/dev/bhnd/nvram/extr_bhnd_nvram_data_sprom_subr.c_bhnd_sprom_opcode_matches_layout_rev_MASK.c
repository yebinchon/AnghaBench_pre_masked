
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* layout; int revs; } ;
typedef TYPE_2__ bhnd_sprom_opcode_state ;
struct TYPE_4__ {int rev; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_1(bhnd_sprom_opcode_state *VAR_0)
{
 return (FUNC_0(VAR_0->revs, VAR_0->layout->rev));
}
