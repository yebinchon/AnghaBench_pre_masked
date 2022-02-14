
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_softc {int dummy; } ;
struct consdev {scalar_t__ cn_arg; } ;


 int FUNC_0 (struct dcons_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_0, int VAR_1)
{
 struct dcons_softc *VAR_2 = (struct dcons_softc *)VAR_0->cn_arg;
 FUNC_0(VAR_2, VAR_1);
}
