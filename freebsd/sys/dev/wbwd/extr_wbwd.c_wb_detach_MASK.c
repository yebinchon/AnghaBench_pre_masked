
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_softc {scalar_t__ ev_tag; } ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__) ;
 struct wb_softc* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct wb_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct wb_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);


 if (VAR_2->ev_tag)
  FUNC_0(VAR_0, VAR_2->ev_tag);
 FUNC_2(VAR_2, 0);



 return (0);
}
