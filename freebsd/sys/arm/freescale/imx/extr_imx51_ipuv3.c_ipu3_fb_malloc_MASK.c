
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ipu3sc_softc {scalar_t__ vbase; int pbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct ipu3sc_softc *VAR_3, size_t VAR_4)
{

 VAR_3->vbase = (uint32_t)FUNC_0(VAR_4, VAR_0, VAR_1, 0, ~0,
     VAR_2, 0);
 VAR_3->pbase = FUNC_1(VAR_3->vbase);

 return (0);
}
