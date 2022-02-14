
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_softc {int dummy; } ;
struct port_event {int enabled; int ih_user; int (* ih ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct port_softc*,int ) ;
 int FUNC_2 (struct port_softc*,int ,int) ;
 struct port_event* VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 struct port_event *VAR_5;
 struct port_softc *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_1(VAR_6, FUNC_0(VAR_8));
  if (VAR_7 & VAR_2) {


   FUNC_2(VAR_6, FUNC_0(VAR_8), VAR_7);


   VAR_5 = &VAR_3[VAR_8];
   if (VAR_5->enabled == 1) {
    if (VAR_5->ih != ((void*)0)) {
     VAR_5->ih(VAR_5->ih_user);
    }
   }
  }
 }

 return (VAR_0);
}
