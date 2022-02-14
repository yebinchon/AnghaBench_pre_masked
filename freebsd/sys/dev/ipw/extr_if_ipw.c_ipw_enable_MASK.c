
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_softc*,int ,int *,int ) ;
 int FUNC_2 (struct ipw_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ipw_softc *VAR_2)
{
 int VAR_3;

 if ((VAR_2->flags & VAR_1) == 0) {
  FUNC_0(("Enable adapter\n"));
  VAR_3 = FUNC_1(VAR_2, VAR_0, ((void*)0), 0);
  if (VAR_3 != 0)
   return VAR_3;
  VAR_3 = FUNC_2(VAR_2, 0);
  if (VAR_3 != 0)
   return VAR_3;
  VAR_2->flags |= VAR_1;
 }
 return 0;
}
