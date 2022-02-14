
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * uint32_t ;
typedef size_t u_int ;
struct ahc_softc {int qoutfifo; int * targetcmds; } ;



__attribute__((used)) static __inline uint32_t
FUNC_0(struct ahc_softc *VAR_0, u_int VAR_1)
{
 return (((uint8_t *)&VAR_0->targetcmds[VAR_1]) - VAR_0->qoutfifo);
}
