
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct amdvi_softc {scalar_t__ start_dev_rid; scalar_t__ end_dev_rid; } ;


 int FUNC_0 (scalar_t__) ;
 struct amdvi_softc* FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static struct amdvi_softc *
FUNC_3(uint16_t VAR_2)
{
 struct amdvi_softc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1[VAR_4]);
  if ((VAR_2 >= VAR_3->start_dev_rid) &&
      (VAR_2 <= VAR_3->end_dev_rid))
   return (VAR_3);
 }




 FUNC_2("BIOS bug device(%d.%d.%d) doesn't have IVHD entry.\n",
     FUNC_0(VAR_2));

 return (FUNC_1(VAR_1[0]));
}
