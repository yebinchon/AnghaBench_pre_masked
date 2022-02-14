
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipsec_softc {int reqid; } ;


 int FUNC_0 (int ,struct ipsec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct ipsec_softc *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 FUNC_4(&VAR_4, VAR_2);
 if (VAR_5->reqid != 0)
  return (0);

 VAR_7 = VAR_1;
 while (--VAR_7 > 0) {
  VAR_6 = FUNC_3();
  if (FUNC_1(VAR_6) == 0)
   break;
 }
 if (VAR_7 == 0)
  return (VAR_0);
 VAR_5->reqid = VAR_6;
 FUNC_0(FUNC_2(VAR_6), VAR_5, VAR_3);
 return (0);
}
