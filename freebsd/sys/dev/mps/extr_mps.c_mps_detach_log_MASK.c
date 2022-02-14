
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int * mps_log_eh; } ;


 int FUNC_0 (struct mps_softc*,int *) ;

__attribute__((used)) static int
FUNC_1(struct mps_softc *VAR_0)
{

 if (VAR_0->mps_log_eh != ((void*)0))
  FUNC_0(VAR_0, VAR_0->mps_log_eh);
 return (0);
}
