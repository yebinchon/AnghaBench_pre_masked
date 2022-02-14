
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_5__ {int off_li_hsl; int linktype; int off_li; } ;
typedef TYPE_1__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (TYPE_1__*,int ,int ,int ,int,int ,int,int) ;

struct block *
FUNC_4(compiler_state_t *VAR_8, int VAR_9)
{
 struct block *VAR_10, *VAR_11;

 switch (VAR_9) {

 case 130:
  if ( (VAR_8->linktype != VAR_5) &&
       (VAR_8->linktype != VAR_4) &&
       (VAR_8->linktype != VAR_6) )
   FUNC_1(VAR_8, "'fisu' supported only on MTP2");

  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li, VAR_0, 0x3f, VAR_2, 0, 0);
  break;

 case 129:
  if ( (VAR_8->linktype != VAR_5) &&
       (VAR_8->linktype != VAR_4) &&
       (VAR_8->linktype != VAR_6) )
   FUNC_1(VAR_8, "'lssu' supported only on MTP2");
  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li, VAR_0, 0x3f, VAR_3, 1, 2);
  VAR_11 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li, VAR_0, 0x3f, VAR_3, 0, 0);
  FUNC_2(VAR_11, VAR_10);
  break;

 case 128:
  if ( (VAR_8->linktype != VAR_5) &&
       (VAR_8->linktype != VAR_4) &&
       (VAR_8->linktype != VAR_6) )
   FUNC_1(VAR_8, "'msu' supported only on MTP2");
  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li, VAR_0, 0x3f, VAR_3, 0, 2);
  break;

 case 133:
  if ( (VAR_8->linktype != VAR_5) &&
       (VAR_8->linktype != VAR_4) &&
       (VAR_8->linktype != VAR_6) )
   FUNC_1(VAR_8, "'hfisu' supported only on MTP2_HSL");

  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li_hsl, VAR_1, 0xff80, VAR_2, 0, 0);
  break;

 case 132:
  if ( (VAR_8->linktype != VAR_5) &&
       (VAR_8->linktype != VAR_4) &&
       (VAR_8->linktype != VAR_6) )
   FUNC_1(VAR_8, "'hlssu' supported only on MTP2_HSL");
  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li_hsl, VAR_1, 0xff80, VAR_3, 1, 0x0100);
  VAR_11 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li_hsl, VAR_1, 0xff80, VAR_3, 0, 0);
  FUNC_2(VAR_11, VAR_10);
  break;

 case 131:
  if ( (VAR_8->linktype != VAR_5) &&
       (VAR_8->linktype != VAR_4) &&
       (VAR_8->linktype != VAR_6) )
   FUNC_1(VAR_8, "'hmsu' supported only on MTP2_HSL");
  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_8->off_li_hsl, VAR_1, 0xff80, VAR_3, 0, 0x0100);
  break;

 default:
  FUNC_0();
 }
 return VAR_10;
}
