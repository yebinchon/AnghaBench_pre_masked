
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mv_pcib_softc {int ap_segment; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct mv_pcib_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,struct resource*) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
    struct resource *VAR_7)
{






 if (VAR_5 != VAR_1 && VAR_5 != VAR_2)
  return (FUNC_0(FUNC_1(VAR_3), VAR_4,
      VAR_5, VAR_6, VAR_7));

 return (FUNC_4(VAR_7));
}
