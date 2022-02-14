
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {scalar_t__ bge_asf_mode; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bge_softc *VAR_3, int VAR_4)
{

 if (VAR_3->bge_asf_mode) {
  switch (VAR_4) {
  case 128:
   FUNC_0(VAR_3, VAR_2,
       VAR_0);
   break;
  case 129:
   FUNC_0(VAR_3, VAR_2,
       VAR_1);
   break;
  }
 }
}
