
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torus {TYPE_1__* osm; scalar_t__ debug; } ;
struct TYPE_2__ {int log; } ;


 int FUNC_0 (int *,int ,char*,unsigned int,int,int,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static
void FUNC_1(struct torus *VAR_1, unsigned VAR_2,
   int VAR_3, int VAR_4, int VAR_5,
   int VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_1->debug)
  FUNC_0(&VAR_1->osm->log, VAR_0, "Case 0x%03x "
   "@ %d %d %d: no perpendicular @ %d %d %d\n",
   VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
