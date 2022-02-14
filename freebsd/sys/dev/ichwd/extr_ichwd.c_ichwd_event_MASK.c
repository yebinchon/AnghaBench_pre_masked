
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct ichwd_softc {int tco_version; unsigned int timeout; scalar_t__ active; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct ichwd_softc*) ;
 int FUNC_1 (struct ichwd_softc*) ;
 int FUNC_2 (struct ichwd_softc*) ;
 int FUNC_3 (struct ichwd_softc*,unsigned int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, unsigned int VAR_4, int *VAR_5)
{
 struct ichwd_softc *VAR_6 = VAR_3;
 unsigned int VAR_7;


 VAR_4 &= VAR_2;

 if (VAR_6->tco_version == 3) {
  VAR_7 = ((uint64_t)1 << VAR_4) / VAR_0;
 } else {
  VAR_7 = ((uint64_t)1 << VAR_4) / VAR_1;
 }

 if (VAR_4) {
  if (!VAR_6->active)
   FUNC_1(VAR_6);
  if (VAR_7 != VAR_6->timeout)
   FUNC_3(VAR_6, VAR_7);
  FUNC_2(VAR_6);
  *VAR_5 = 0;
 } else {
  if (VAR_6->active)
   FUNC_0(VAR_6);
 }
}
