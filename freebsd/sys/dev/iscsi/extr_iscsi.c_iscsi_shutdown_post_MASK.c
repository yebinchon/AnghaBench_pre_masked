
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct iscsi_softc*) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct iscsi_softc *VAR_1)
{

 if (VAR_0 == ((void*)0)) {
  FUNC_0("removing all sessions due to shutdown");
  FUNC_1(VAR_1);
 }
}
