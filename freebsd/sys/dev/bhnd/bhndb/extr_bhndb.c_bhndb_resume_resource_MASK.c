
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_softc {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bhndb_softc*,int ,int,int ,struct resource*,int *) ;
 struct bhndb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int ,int ) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3, device_t VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 struct bhndb_softc *VAR_7;

 VAR_7 = FUNC_2(VAR_3);


 if (VAR_5 != VAR_2)
  return (0);


 if (!(FUNC_5(VAR_6) & VAR_1))
  return (0);

 if (FUNC_0(VAR_0))
  FUNC_3(VAR_4, "resume resource type=%d 0x%jx+0x%jx\n",
      VAR_5, FUNC_8(VAR_6), FUNC_7(VAR_6));

 return (FUNC_1(VAR_7, FUNC_4(VAR_6), VAR_5,
     FUNC_6(VAR_6), VAR_6, ((void*)0)));
}
