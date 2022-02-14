
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dm; scalar_t__ css; scalar_t__ oofs; scalar_t__ ses; scalar_t__ bes; scalar_t__ es; scalar_t__ les; scalar_t__ uas; scalar_t__ rcrce; scalar_t__ crce; scalar_t__ fse; scalar_t__ bpv; } ;
struct TYPE_7__ {int dm; int css; int oofs; int ses; int bes; int es; int les; int uas; int rcrce; int crce; int fse; int bpv; } ;
struct TYPE_9__ {scalar_t__ crc4; scalar_t__ cas; } ;
struct TYPE_11__ {scalar_t__ e1_first_int; int cursec; int degsec; unsigned long degerr; int totsec; TYPE_4__ currnt; TYPE_1__ total; TYPE_4__* interval; TYPE_3__ gopt; int status; TYPE_2__* board; scalar_t__ num; } ;
typedef TYPE_5__ ct_chan_t ;
struct TYPE_8__ {int port; } ;


 unsigned long FUNC_0 (unsigned char,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned char,unsigned char) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long FUNC_4 (unsigned char,unsigned char) ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned long FUNC_5 (unsigned char,unsigned char) ;
 unsigned char FUNC_6 (unsigned short,int ) ;
 unsigned char FUNC_7 (unsigned short,int ,int) ;

__attribute__((used)) static void FUNC_8 (ct_chan_t *VAR_30)
{
 unsigned short VAR_31;
 unsigned char VAR_32, VAR_33, VAR_34;
 unsigned long VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;

 VAR_31 = VAR_30->num ? FUNC_2(VAR_30->board->port) : FUNC_1(VAR_30->board->port);

 VAR_33 = FUNC_7 (VAR_31, VAR_7, 0xff);

 if (! (VAR_33 & VAR_26))
  return;


 if (VAR_30->e1_first_int > 0) {
  VAR_30->e1_first_int --;
  return;
 }

 ++VAR_30->cursec;
 VAR_30->status = 0;


 VAR_32 = FUNC_7 (VAR_31, VAR_6, 0xff);
 VAR_34 = FUNC_6 (VAR_31, VAR_8);
 VAR_40 = 0;

 if (VAR_32 & (VAR_19 | VAR_21))
  VAR_30->status |= VAR_17;
 if (VAR_32 & VAR_25)
  VAR_30->status |= VAR_11;
 if (VAR_30->gopt.cas && (VAR_32 & VAR_23))
  VAR_30->status |= VAR_12;
 if (VAR_30->gopt.cas && (VAR_32 & VAR_20))
  VAR_30->status |= VAR_14;
 if (VAR_32 & VAR_22)
  VAR_30->status |= VAR_13;


 if (VAR_32 & VAR_24) {
  ++VAR_30->currnt.css;
 }

 if (VAR_34 & VAR_27) {
  VAR_30->status |= VAR_15;
  ++VAR_40;
 }
 if ((VAR_30->gopt.cas && (VAR_34 & VAR_28)) ||
     (VAR_30->gopt.crc4 && (VAR_34 & VAR_29))) {
  VAR_30->status |= VAR_16;
  ++VAR_40;
 }

 if (! VAR_30->status)
  VAR_30->status = VAR_18;


 VAR_35 = FUNC_5 (FUNC_6 (VAR_31, VAR_9), FUNC_6 (VAR_31, VAR_10));
 VAR_36 = FUNC_4 (FUNC_6 (VAR_31, VAR_4), FUNC_6 (VAR_31, VAR_5));
 VAR_37 = FUNC_0 (FUNC_6 (VAR_31, VAR_0), FUNC_6 (VAR_31, VAR_1));
 VAR_38 = FUNC_3 (FUNC_6 (VAR_31, VAR_2), FUNC_6 (VAR_31, VAR_3));

 VAR_30->currnt.bpv += VAR_35;
 VAR_30->currnt.fse += VAR_36;
 if (VAR_30->gopt.crc4) {
  VAR_30->currnt.crce += VAR_37;
  VAR_30->currnt.rcrce += VAR_38;
 }



 VAR_39 = VAR_36;
 if (VAR_30->gopt.crc4)
  VAR_39 += VAR_37;



 if (VAR_32 & (VAR_25 | VAR_19 | VAR_21))

  ++VAR_30->currnt.uas;
 else {

  if (VAR_35)
   ++VAR_30->currnt.les;



  if (VAR_39 || VAR_40 || (VAR_32 & VAR_24))
   ++VAR_30->currnt.es;


  if (VAR_40)
   ++VAR_30->currnt.oofs;



  if (VAR_35 >= 2048 || VAR_39 >= 832)
   ++VAR_30->currnt.ses;
  else {


   if (VAR_39 > 1)
    ++VAR_30->currnt.bes;



   ++VAR_30->degsec;
   VAR_30->degerr += VAR_35 + VAR_39;
  }
 }



 if (VAR_30->cursec / 60 == 0) {
  if (VAR_30->degerr > VAR_30->degsec * 2048 / 1000)
   ++VAR_30->currnt.dm;
  VAR_30->degsec = 0;
  VAR_30->degerr = 0;
 }


 if (VAR_30->cursec > 15*60) {
  int VAR_41;

  for (VAR_41=47; VAR_41>0; --VAR_41)
   VAR_30->interval[VAR_41] = VAR_30->interval[VAR_41-1];
  VAR_30->interval[0] = VAR_30->currnt;


  VAR_30->total.bpv += VAR_30->currnt.bpv;
  VAR_30->total.fse += VAR_30->currnt.fse;
  VAR_30->total.crce += VAR_30->currnt.crce;
  VAR_30->total.rcrce += VAR_30->currnt.rcrce;
  VAR_30->total.uas += VAR_30->currnt.uas;
  VAR_30->total.les += VAR_30->currnt.les;
  VAR_30->total.es += VAR_30->currnt.es;
  VAR_30->total.bes += VAR_30->currnt.bes;
  VAR_30->total.ses += VAR_30->currnt.ses;
  VAR_30->total.oofs += VAR_30->currnt.oofs;
  VAR_30->total.css += VAR_30->currnt.css;
  VAR_30->total.dm += VAR_30->currnt.dm;
  for (VAR_41=0; VAR_41<sizeof (VAR_30->currnt); ++VAR_41)
   *(((char *)(&VAR_30->currnt))+VAR_41)=0;

  VAR_30->totsec += VAR_30->cursec;
  VAR_30->cursec = 0;
 }
}
