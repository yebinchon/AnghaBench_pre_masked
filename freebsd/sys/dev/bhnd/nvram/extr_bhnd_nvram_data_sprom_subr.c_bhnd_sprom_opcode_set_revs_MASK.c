
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int revs; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static inline int
FUNC_4(bhnd_sprom_opcode_state *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4)
{
 int VAR_5;


 if (VAR_3 > VAR_1 ||
     VAR_4 > VAR_1 ||
     VAR_4 < VAR_3)
 {
  FUNC_0(VAR_2, "invalid revision range: %hhu-%hhu\n",
      VAR_3, VAR_4);
  return (VAR_0);
 }


 if ((VAR_5 = FUNC_1(VAR_2)))
  return (VAR_5);


 FUNC_3(VAR_2->revs, 0x0, sizeof(VAR_2->revs));
 FUNC_2(VAR_2->revs, VAR_3, VAR_4);

 return (0);
}
