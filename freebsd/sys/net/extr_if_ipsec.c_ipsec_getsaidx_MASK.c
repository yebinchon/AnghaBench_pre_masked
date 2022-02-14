
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secpolicy {TYPE_1__** req; } ;
struct secasindex {int dummy; } ;
struct ipsec_softc {int dummy; } ;
typedef int sa_family_t ;
struct TYPE_2__ {struct secasindex saidx; } ;


 struct secpolicy* FUNC_0 (struct ipsec_softc*,int,int ) ;

__attribute__((used)) static struct secasindex *
FUNC_1(struct ipsec_softc *VAR_0, int VAR_1, sa_family_t VAR_2)
{
 struct secpolicy *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 return (&VAR_3->req[0]->saidx);
}
