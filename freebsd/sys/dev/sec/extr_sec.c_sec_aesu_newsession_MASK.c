
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int dummy; } ;
struct sec_session {int ss_ivlen; } ;
struct cryptoini {scalar_t__ cri_alg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct sec_softc *VAR_2, struct sec_session *VAR_3,
    struct cryptoini *VAR_4, struct cryptoini *VAR_5)
{

 if (VAR_4 == ((void*)0))
  return (-1);

 if (VAR_4->cri_alg != VAR_1)
  return (-1);

 VAR_3->ss_ivlen = VAR_0;

 return (0);
}
