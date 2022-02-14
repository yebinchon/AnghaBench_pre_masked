
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_asf_mode; int bge_asf_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,int) ;
 int FUNC_2 (struct bge_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bge_softc *VAR_8)
{
 if (VAR_8->bge_asf_mode & VAR_0) {

  if (VAR_8->bge_asf_count)
   VAR_8->bge_asf_count --;
  else {
   VAR_8->bge_asf_count = 2;
   FUNC_2(VAR_8, VAR_7,
       VAR_1);
   FUNC_2(VAR_8, VAR_6, 4);
   FUNC_2(VAR_8, VAR_5,
       VAR_2);
   FUNC_1(VAR_8, VAR_4,
       FUNC_0(VAR_8, VAR_4) |
       VAR_3);
  }
 }
}
