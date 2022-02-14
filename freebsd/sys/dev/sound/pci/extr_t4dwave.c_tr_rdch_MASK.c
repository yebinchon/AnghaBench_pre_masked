
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_info {int type; int lock; } ;
struct tr_chinfo {int lba; int fmc; int rvol; int cvol; int gvsel; int pan; int vol; int ctrl; int ec; int cso; int alpha; int fms; int eso; int delta; struct tr_info* parent; } ;


 int VAR_0 ;




 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tr_info*,scalar_t__,int) ;
 int FUNC_3 (struct tr_chinfo*) ;

__attribute__((used)) static void
FUNC_4(struct tr_chinfo *VAR_3)
{
 struct tr_info *VAR_4 = VAR_3->parent;
 u_int32_t VAR_5[5], VAR_6;

 FUNC_0(VAR_4->lock);
 FUNC_3(VAR_3);
 for (VAR_6=0; VAR_6<5; VAR_6++)
  VAR_5[VAR_6]=FUNC_2(VAR_4, VAR_2+(VAR_6<<2), 4);
 FUNC_1(VAR_4->lock);


 if (VAR_4->type == 131)
  VAR_3->lba=(VAR_5[1] & VAR_0);
 else
  VAR_3->lba=(VAR_5[1] & VAR_1);
 VAR_3->fmc= (VAR_5[3] & 0x0000c000) >> 14;
 VAR_3->rvol= (VAR_5[3] & 0x00003f80) >> 7;
 VAR_3->cvol= (VAR_5[3] & 0x0000007f);
 VAR_3->gvsel= (VAR_5[4] & 0x80000000) >> 31;
 VAR_3->pan= (VAR_5[4] & 0x7f000000) >> 24;
 VAR_3->vol= (VAR_5[4] & 0x00ff0000) >> 16;
 VAR_3->ctrl= (VAR_5[4] & 0x0000f000) >> 12;
 VAR_3->ec= (VAR_5[4] & 0x00000fff);
 switch(VAR_4->type) {
 case 130:
 case 131:
 case 129:
  VAR_3->cso= (VAR_5[0] & 0xffff0000) >> 16;
  VAR_3->alpha= (VAR_5[0] & 0x0000fff0) >> 4;
  VAR_3->fms= (VAR_5[0] & 0x0000000f);
  VAR_3->eso= (VAR_5[2] & 0xffff0000) >> 16;
  VAR_3->delta= (VAR_5[2] & 0x0000ffff);
  break;
 case 128:
  VAR_3->cso= (VAR_5[0] & 0x00ffffff);
  VAR_3->eso= (VAR_5[2] & 0x00ffffff);
  VAR_3->delta= ((VAR_5[2] & 0xff000000) >> 16) | ((VAR_5[0] & 0xff000000) >> 24);
  VAR_3->alpha= (VAR_5[3] & 0xfff00000) >> 20;
  VAR_3->fms= (VAR_5[3] & 0x000f0000) >> 16;
  break;
 }
}
