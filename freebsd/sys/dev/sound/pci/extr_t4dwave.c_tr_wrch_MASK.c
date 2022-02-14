
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_info {int type; int lock; } ;
struct tr_chinfo {int gvsel; int fmc; int fms; int ctrl; int pan; int rvol; int cvol; int vol; int ec; int alpha; int delta; int lba; int cso; int eso; struct tr_info* parent; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tr_chinfo*) ;
 int FUNC_3 (struct tr_info*,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_4(struct tr_chinfo *VAR_4)
{
 struct tr_info *VAR_5 = VAR_4->parent;
 u_int32_t VAR_6[VAR_1], VAR_7;

 VAR_4->gvsel &= 0x00000001;
 VAR_4->fmc &= 0x00000003;
 VAR_4->fms &= 0x0000000f;
 VAR_4->ctrl &= 0x0000000f;
 VAR_4->pan &= 0x0000007f;
 VAR_4->rvol &= 0x0000007f;
 VAR_4->cvol &= 0x0000007f;
 VAR_4->vol &= 0x000000ff;
 VAR_4->ec &= 0x00000fff;
 VAR_4->alpha &= 0x00000fff;
 VAR_4->delta &= 0x0000ffff;
 if (VAR_5->type == 131)
  VAR_4->lba &= VAR_0;
 else
  VAR_4->lba &= VAR_2;

 VAR_6[1]=VAR_4->lba;
 VAR_6[3]=(VAR_4->fmc<<14) | (VAR_4->rvol<<7) | (VAR_4->cvol);
 VAR_6[4]=(VAR_4->gvsel<<31) | (VAR_4->pan<<24) | (VAR_4->vol<<16) | (VAR_4->ctrl<<12) | (VAR_4->ec);

 switch (VAR_5->type) {
 case 130:
 case 131:
 case 129:
  VAR_4->cso &= 0x0000ffff;
  VAR_4->eso &= 0x0000ffff;
  VAR_6[0]=(VAR_4->cso<<16) | (VAR_4->alpha<<4) | (VAR_4->fms);
  VAR_6[2]=(VAR_4->eso<<16) | (VAR_4->delta);
  break;
 case 128:
  VAR_4->cso &= 0x00ffffff;
  VAR_4->eso &= 0x00ffffff;
  VAR_6[0]=((VAR_4->delta & 0xff)<<24) | (VAR_4->cso);
  VAR_6[2]=((VAR_4->delta>>8)<<24) | (VAR_4->eso);
  VAR_6[3]|=(VAR_4->alpha<<20) | (VAR_4->fms<<16) | (VAR_4->fmc<<14);
  break;
 }
 FUNC_0(VAR_5->lock);
 FUNC_2(VAR_4);
 for (VAR_7=0; VAR_7<VAR_1; VAR_7++)
  FUNC_3(VAR_5, VAR_3+(VAR_7<<2), VAR_6[VAR_7], 4);
 FUNC_1(VAR_5->lock);
}
