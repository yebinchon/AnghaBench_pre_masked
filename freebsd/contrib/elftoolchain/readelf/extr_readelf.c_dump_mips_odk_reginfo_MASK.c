
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct readelf {scalar_t__ ec; scalar_t__ (* dw_decode ) (int **,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (int **,int) ;
 scalar_t__ FUNC_3 (int **,int) ;
 scalar_t__ FUNC_4 (int **,int) ;
 scalar_t__ FUNC_5 (int **,int) ;
 scalar_t__ FUNC_6 (int **,int) ;

__attribute__((used)) static void
FUNC_7(struct readelf *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7[4];
 uint64_t VAR_8;
 uint8_t *VAR_9;
 int VAR_10;

 VAR_9 = VAR_4 + VAR_5;
 while (VAR_4 < VAR_9) {
  VAR_6 = VAR_3->dw_decode(&VAR_4, 4);

  if (VAR_3->ec == VAR_1)
   VAR_3->dw_decode(&VAR_4, 4);
  for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
   VAR_7[VAR_10] = VAR_3->dw_decode(&VAR_4, 4);
  if (VAR_3->ec == VAR_0)
   VAR_8 = VAR_3->dw_decode(&VAR_4, 4);
  else
   VAR_8 = VAR_3->dw_decode(&VAR_4, 8);
  FUNC_1(" %s    ", FUNC_0(VAR_2));
  FUNC_1("ri_gprmask:    0x%08jx\n", (uintmax_t) VAR_6);
  for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
   FUNC_1("%11.11s ri_cprmask[%d]: 0x%08jx\n", "", VAR_10,
       (uintmax_t) VAR_7[VAR_10]);
  FUNC_1("%12.12s", "");
  FUNC_1("ri_gp_value:   %#jx\n", (uintmax_t) VAR_8);
 }
}
