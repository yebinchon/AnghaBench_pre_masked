
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource {int dummy; } ;
struct proto_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct resource* FUNC_2 (int ,int,int*,int) ;
 struct proto_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct proto_softc*,int,int,struct resource*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_10)
{
 struct proto_softc *VAR_11;
 struct resource *VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_11 = FUNC_3(VAR_10);

 FUNC_5(VAR_11, VAR_4, 0, ((void*)0));
 FUNC_5(VAR_11, VAR_3, 0, ((void*)0));

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  VAR_15 = FUNC_0(VAR_14);
  VAR_13 = FUNC_4(VAR_10, VAR_15, 4);
  VAR_16 = (FUNC_1(VAR_13)) ? VAR_7 : VAR_9;
  VAR_12 = FUNC_2(VAR_10, VAR_16, &VAR_15, VAR_5);
  if (VAR_12 == ((void*)0))
   continue;
  FUNC_5(VAR_11, VAR_16, VAR_15, VAR_12);
  if (VAR_16 == VAR_7)
   continue;

  if ((VAR_13 & VAR_1) == VAR_0)
   VAR_14++;
 }

 VAR_15 = 0;
 VAR_16 = VAR_8;
 VAR_12 = FUNC_2(VAR_10, VAR_16, &VAR_15, VAR_5 | VAR_6);
 if (VAR_12 != ((void*)0))
  FUNC_5(VAR_11, VAR_16, VAR_15, VAR_12);
 return (FUNC_6(VAR_10));
}
