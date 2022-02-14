
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opcic_softc {int sc_flags; int sc_base_addr; } ;
struct consdev {struct opcic_softc* cn_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,int ) ;
 int FUNC_1 (struct opcic_softc*) ;

__attribute__((used)) static int
FUNC_2(struct consdev *VAR_2)
{
 struct opcic_softc *VAR_3;
 char VAR_4;
 int VAR_5;

 VAR_3 = VAR_2->cn_arg;






 VAR_5 = FUNC_0(VAR_3->sc_base_addr, 0, &VAR_4, 1,
     VAR_0);
 if (VAR_5 != 1)
  return (-1);
 return (VAR_4);
}
