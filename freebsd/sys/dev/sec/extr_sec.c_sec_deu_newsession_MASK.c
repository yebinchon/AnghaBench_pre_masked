
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int dummy; } ;
struct sec_session {int ss_ivlen; } ;
struct cryptoini {int cri_alg; } ;




 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct sec_softc *VAR_1, struct sec_session *VAR_2,
    struct cryptoini *VAR_3, struct cryptoini *VAR_4)
{

 if (VAR_3 == ((void*)0))
  return (-1);

 switch (VAR_3->cri_alg) {
 case 128:
 case 129:
  break;
 default:
  return (-1);
 }

 VAR_2->ss_ivlen = VAR_0;

 return (0);
}
