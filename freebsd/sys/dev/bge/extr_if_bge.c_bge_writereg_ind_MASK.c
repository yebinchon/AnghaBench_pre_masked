
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct bge_softc *VAR_2, int VAR_3, int VAR_4)
{
 device_t VAR_5;

 VAR_5 = VAR_2->bge_dev;

 FUNC_0(VAR_5, VAR_0, VAR_3, 4);
 FUNC_0(VAR_5, VAR_1, VAR_4, 4);
}
