
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {scalar_t__ bge_asicrev; int bge_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct bge_softc *VAR_5, int VAR_6, int VAR_7)
{
 device_t VAR_8;

 if (VAR_5->bge_asicrev == VAR_0 &&
     VAR_6 >= VAR_4 && VAR_6 < VAR_3)
  return;

 VAR_8 = VAR_5->bge_dev;

 FUNC_0(VAR_8, VAR_1, VAR_6, 4);
 FUNC_0(VAR_8, VAR_2, VAR_7, 4);
 FUNC_0(VAR_8, VAR_1, 0, 4);
}
