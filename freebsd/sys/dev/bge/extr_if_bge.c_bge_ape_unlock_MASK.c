
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {int bge_mfw_flags; scalar_t__ bge_asicrev; int bge_func_addr; } ;


 int FUNC_0 (struct bge_softc*,int,int) ;

 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct bge_softc *VAR_5, int VAR_6)
{
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 if ((VAR_5->bge_mfw_flags & VAR_4) == 0)
  return;

 if (VAR_5->bge_asicrev == VAR_3)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_2;

 VAR_9 = 4 * VAR_6;

 switch (VAR_6) {
 case 134:
  if (VAR_5->bge_asicrev == VAR_3)
   return;
  if (VAR_5->bge_func_addr == 0)
   VAR_7 = VAR_1;
  else
   VAR_7 = (1 << VAR_5->bge_func_addr);
  break;
 case 133:
  if (VAR_5->bge_func_addr == 0)
   VAR_7 = VAR_1;
  else
   VAR_7 = (1 << VAR_5->bge_func_addr);
  break;
 case 132:
  if (VAR_5->bge_func_addr == 0)
   VAR_7 = VAR_1;
  else
   VAR_7 = (1 << VAR_5->bge_func_addr);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_7 = VAR_1;
  break;
 default:
  return;
 }

 FUNC_0(VAR_5, VAR_8 + VAR_9, VAR_7);
}
