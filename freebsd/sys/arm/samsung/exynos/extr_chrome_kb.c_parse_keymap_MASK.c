
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ckb_softc {int cols; int rows; int * keymap; } ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ckb_softc*,int,int,int) ;
 int * FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ckb_softc *VAR_4, pcell_t *VAR_5, size_t VAR_6)
{
 int VAR_7;

 VAR_4->keymap = FUNC_1(VAR_4->cols * VAR_4->rows * sizeof(VAR_4->keymap[0]),
     VAR_1, VAR_2 | VAR_3);
 if (VAR_4->keymap == ((void*)0)) {
  return (VAR_0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {







  FUNC_0(VAR_4, (VAR_5[VAR_7] >> 16) & 0xff,
      (VAR_5[VAR_7] >> 24) & 0xff,
      VAR_5[VAR_7] & 0xffff);
 }

 return (0);
}
