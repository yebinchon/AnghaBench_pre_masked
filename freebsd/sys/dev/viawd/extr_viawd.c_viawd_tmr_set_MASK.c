
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viawd_softc {unsigned int timeout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct viawd_softc*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct viawd_softc *VAR_3, unsigned int VAR_4)
{


 if (VAR_4 < VAR_2)
  VAR_4 = VAR_2;
 else if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 FUNC_0(VAR_3, VAR_0, VAR_4);
 VAR_3->timeout = VAR_4;
}
