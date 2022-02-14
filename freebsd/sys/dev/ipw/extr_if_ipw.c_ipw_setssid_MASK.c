
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (struct ipw_softc*,int ,void*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct ipw_softc *VAR_3, void *VAR_4, size_t VAR_5)
{
 if (VAR_5 == 0) {






  FUNC_0(("Setting bogus ESSID to WAR firmware bug\n"));
  return FUNC_2(VAR_3, VAR_1,
   "\x18\x19\x20\x21\x22\x23\x24\x25\x26\x27"
   "\x28\x29\x2a\x2b\x2c\x2d\x2e\x2f\x30\x31"
   "\x32\x33\x34\x35\x36\x37\x38\x39\x3a\x3b"
   "\x3c\x3d", VAR_0);
 } else {







  return FUNC_2(VAR_3, VAR_1, VAR_4, VAR_5);
 }
}
