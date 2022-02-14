
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int atxctl; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct daio_mgr_ctrl_blk {TYPE_2__ dirty; int * txctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 struct daio_mgr_ctrl_blk *VAR_8 = VAR_5;

 if (VAR_6 < 4) {

  switch ((VAR_7 & 0x7)) {
  case 1:
   FUNC_0(&VAR_8->txctl[VAR_6], VAR_2, 0);
   break;
  case 2:
   FUNC_0(&VAR_8->txctl[VAR_6], VAR_2, 1);
   break;
  case 4:
   FUNC_0(&VAR_8->txctl[VAR_6], VAR_2, 2);
   break;
  case 8:
   FUNC_0(&VAR_8->txctl[VAR_6], VAR_2, 3);
   break;
  default:
   break;
  }

  FUNC_0(&VAR_8->txctl[VAR_6], VAR_0, (!(VAR_7 & 0x7)));

  FUNC_0(&VAR_8->txctl[VAR_6], VAR_1, (VAR_7 >> 4) & 0x1);

  FUNC_0(&VAR_8->txctl[VAR_6], VAR_4, (VAR_7 >> 4) & 0x1);
  FUNC_0(&VAR_8->txctl[VAR_6], VAR_3,
     ((VAR_7 >> 3) & 0x1) ? 0 : 0);
  VAR_8->dirty.bf.atxctl |= (0x1 << VAR_6);
 } else {


 }
 return 0;
}
