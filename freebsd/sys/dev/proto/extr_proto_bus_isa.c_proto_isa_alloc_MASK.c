
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct proto_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int ,int,int*,int ) ;
 struct proto_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct proto_softc*,int,int,struct resource*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct resource *VAR_6;
 struct proto_softc *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_3);
 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_9, VAR_1);
  if (VAR_6 == ((void*)0))
   break;
  FUNC_2(VAR_7, VAR_4, VAR_9, VAR_6);
  VAR_8++;
 }
 if (VAR_4 == VAR_2 && VAR_8 > 0)
  FUNC_2(VAR_7, VAR_0, 0, ((void*)0));
 return (VAR_8);
}
