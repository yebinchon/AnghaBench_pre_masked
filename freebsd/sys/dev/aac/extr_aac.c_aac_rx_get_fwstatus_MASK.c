
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct aac_softc *VAR_4)
{
 FUNC_1(VAR_4, VAR_3, "");

 return(FUNC_0(VAR_4, VAR_4->flags & VAR_0 ?
     VAR_2 : VAR_1));
}
