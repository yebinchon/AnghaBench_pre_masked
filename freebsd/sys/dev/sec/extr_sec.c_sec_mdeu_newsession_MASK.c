
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int dummy; } ;
struct sec_session {int dummy; } ;
struct cryptoini {int cri_alg; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct sec_softc *VAR_0, struct sec_session *VAR_1,
    struct cryptoini *VAR_2, struct cryptoini *VAR_3)
{

 if (VAR_3 && FUNC_0(VAR_3->cri_alg))
  return (0);

 return (-1);
}
