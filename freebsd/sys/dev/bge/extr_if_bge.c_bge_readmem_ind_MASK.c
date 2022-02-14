
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bge_softc {scalar_t__ bge_asicrev; int bge_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct bge_softc *VAR_5, int VAR_6)
{
 device_t VAR_7;
 uint32_t VAR_8;

 if (VAR_5->bge_asicrev == VAR_0 &&
     VAR_6 >= VAR_4 && VAR_6 < VAR_3)
  return (0);

 VAR_7 = VAR_5->bge_dev;

 FUNC_1(VAR_7, VAR_1, VAR_6, 4);
 VAR_8 = FUNC_0(VAR_7, VAR_2, 4);
 FUNC_1(VAR_7, VAR_1, 0, 4);
 return (VAR_8);
}
