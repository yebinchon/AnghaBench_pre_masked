
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_softc {int dummy; } ;
struct cesa_request {int cr_sdesc; int cr_tdesc; } ;


 int FUNC_0 (struct cesa_softc*,struct cesa_request*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct cesa_request *
FUNC_2(struct cesa_softc *VAR_1)
{
 struct cesa_request *VAR_2;

 FUNC_0(VAR_1, VAR_2, VAR_0);
 if (!VAR_2)
  return (((void*)0));

 FUNC_1(&VAR_2->cr_tdesc);
 FUNC_1(&VAR_2->cr_sdesc);

 return (VAR_2);
}
