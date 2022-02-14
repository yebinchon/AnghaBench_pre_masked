
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cmx_softc {int timeout; scalar_t__ dying; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct cmx_softc*,int ,int) ;
 int FUNC_1 (struct cmx_softc*,int,char*,int) ;

__attribute__((used)) static inline int
FUNC_2(struct cmx_softc *VAR_7, uint8_t VAR_8, int VAR_9)
{
 int VAR_10;

 for (int VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (FUNC_0(VAR_7, VAR_8, VAR_9))
   return 0;
 }

 for (int VAR_12 = 0; VAR_12 * VAR_6 < VAR_7->timeout; VAR_12++) {
  if (FUNC_0(VAR_7, VAR_8, VAR_9))
   return 0;
  VAR_10 = FUNC_1(VAR_7, VAR_4|VAR_3, "cmx", VAR_6);





  if (VAR_7->dying)
   return VAR_2;
  if (VAR_10 != VAR_0)
   return VAR_10;
 }


 return VAR_1;
}
