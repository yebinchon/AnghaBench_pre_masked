
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ckb_softc {int cols; int rows; int * keymap; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct ckb_softc *VAR_0, int VAR_1, int VAR_2, uint16_t VAR_3)
{

 FUNC_0(VAR_0->keymap != ((void*)0), ("keymap_write: no keymap"));
 if (VAR_1 >= 0 && VAR_1 < VAR_0->cols &&
     VAR_2 >= 0 && VAR_2 < VAR_0->rows) {
  VAR_0->keymap[VAR_2 * VAR_0->cols + VAR_1] = VAR_3;
  return (0);
 }

 return (-1);
}
