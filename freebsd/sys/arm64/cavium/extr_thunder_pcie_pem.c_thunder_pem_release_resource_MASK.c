
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_pem_softc {int id; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct thunder_pem_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{
 device_t VAR_8;







 VAR_8 = FUNC_1(FUNC_1(VAR_3));

 if ((VAR_5 != VAR_2) && (VAR_5 != VAR_1))
  return (FUNC_0(VAR_8, VAR_4,
      VAR_5, VAR_6, VAR_7));

 return (FUNC_4(VAR_7));
}
