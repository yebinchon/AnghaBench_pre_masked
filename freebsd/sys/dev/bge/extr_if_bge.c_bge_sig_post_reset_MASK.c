
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_asf_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct bge_softc*,int) ;
 int FUNC_1 (struct bge_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bge_softc *VAR_4, int VAR_5)
{

 if (VAR_4->bge_asf_mode & VAR_0) {
  switch (VAR_5) {
  case 128:
   FUNC_1(VAR_4, VAR_3,
       VAR_1);

   break;
  case 129:
   FUNC_1(VAR_4, VAR_3,
       VAR_2);
   break;
  }
 }
 if (VAR_5 == 129)
  FUNC_0(VAR_4, VAR_5);
}
