
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_softc {int dummy; } ;
struct consdev {scalar_t__ cn_arg; } ;


 int FUNC_0 (struct dcons_softc*) ;

__attribute__((used)) static int
FUNC_1(struct consdev *VAR_0)
{
 struct dcons_softc *VAR_1 = (struct dcons_softc *)VAR_0->cn_arg;
 return (FUNC_0(VAR_1));
}
