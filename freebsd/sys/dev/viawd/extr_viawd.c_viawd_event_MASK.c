
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct viawd_softc {unsigned int timeout; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct viawd_softc*,unsigned int) ;
 int FUNC_1 (struct viawd_softc*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, unsigned int VAR_2, int *VAR_3)
{
 struct viawd_softc *VAR_4 = VAR_1;
 unsigned int VAR_5;


 VAR_2 &= VAR_0;
 VAR_5 = ((uint64_t)1 << VAR_2) / 1000000000;
 if (VAR_2) {
  if (VAR_5 != VAR_4->timeout)
   FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_4, 1);
  *VAR_3 = 0;
 } else
  FUNC_1(VAR_4, 0);
}
