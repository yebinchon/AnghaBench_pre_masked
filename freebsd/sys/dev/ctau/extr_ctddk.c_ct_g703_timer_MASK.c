
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dm; scalar_t__ css; scalar_t__ oofs; scalar_t__ ses; scalar_t__ bes; scalar_t__ es; scalar_t__ les; scalar_t__ uas; scalar_t__ rcrce; scalar_t__ crce; scalar_t__ fse; scalar_t__ bpv; } ;
struct TYPE_8__ {int dm; int css; int oofs; int ses; int bes; int es; int les; int uas; int rcrce; int crce; int fse; int bpv; } ;
struct TYPE_9__ {int cursec; scalar_t__ mode; int totsec; int degsec; int degerr; TYPE_4__ currnt; TYPE_2__ total; TYPE_4__* interval; int status; TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_3__ ct_chan_t ;
struct TYPE_7__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6 (ct_chan_t *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;





 ++VAR_11->cursec;
 if (VAR_11->mode != VAR_10)
  return;
 if (VAR_11->totsec + VAR_11->cursec <= 1)
  return;
 VAR_11->status = 0;

 VAR_13 = FUNC_2 (VAR_11);

 VAR_12 = FUNC_3 (FUNC_0 (VAR_11->board->port)) & (VAR_11->num ? VAR_5 : VAR_4);
 FUNC_5 (FUNC_0 (VAR_11->board->port), VAR_12);

 VAR_14 = FUNC_3 (FUNC_0 (VAR_11->board->port)) & (VAR_11->num ? VAR_7 : VAR_6);
 FUNC_5 (FUNC_0 (VAR_11->board->port), VAR_14);

 VAR_15 = FUNC_3 (FUNC_1 (VAR_11->board->port)) &
  (VAR_11->num ? VAR_9 : VAR_8);
 FUNC_5 (FUNC_1 (VAR_11->board->port), VAR_15);


 if (VAR_12)
  ++VAR_11->currnt.bpv;
 if (! VAR_13)
  VAR_11->status |= VAR_0;
 if (VAR_14)
  VAR_11->status |= VAR_2;
 if (VAR_15)
  VAR_11->status |= VAR_3;

 if (! VAR_11->status)
  VAR_11->status = VAR_1;


 if ((! VAR_13) || VAR_15)

  ++VAR_11->currnt.uas;
 else {

  if (VAR_12)
   ++VAR_11->currnt.les;



  ++VAR_11->degsec;
  if (VAR_13 && VAR_12)
   ++VAR_11->degerr;
 }


 if (VAR_11->cursec / 60 == 0) {
  if (VAR_11->degerr*2 > VAR_11->degsec)
   ++VAR_11->currnt.dm;
  VAR_11->degsec = 0;
  VAR_11->degerr = 0;
 }


 if (VAR_11->cursec > 15*60) {
  int VAR_16;

  for (VAR_16=47; VAR_16>0; --VAR_16)
   VAR_11->interval[VAR_16] = VAR_11->interval[VAR_16-1];
  VAR_11->interval[0] = VAR_11->currnt;


  VAR_11->total.bpv += VAR_11->currnt.bpv;
  VAR_11->total.fse += VAR_11->currnt.fse;
  VAR_11->total.crce += VAR_11->currnt.crce;
  VAR_11->total.rcrce += VAR_11->currnt.rcrce;
  VAR_11->total.uas += VAR_11->currnt.uas;
  VAR_11->total.les += VAR_11->currnt.les;
  VAR_11->total.es += VAR_11->currnt.es;
  VAR_11->total.bes += VAR_11->currnt.bes;
  VAR_11->total.ses += VAR_11->currnt.ses;
  VAR_11->total.oofs += VAR_11->currnt.oofs;
  VAR_11->total.css += VAR_11->currnt.css;
  VAR_11->total.dm += VAR_11->currnt.dm;
  FUNC_4 (&VAR_11->currnt, 0, sizeof (VAR_11->currnt));

  VAR_11->totsec += VAR_11->cursec;
  VAR_11->cursec = 0;
 }
}
