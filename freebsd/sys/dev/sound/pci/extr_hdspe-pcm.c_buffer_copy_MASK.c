
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int period; int * rbuf; int * pbuf; } ;
struct sc_chinfo {scalar_t__ dir; int size; int lslot; int rslot; int * data; int buffer; struct sc_pcminfo* parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct sc_chinfo *VAR_2)
{
 struct sc_pcminfo *VAR_3;
 struct sc_info *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_3 = VAR_2->parent;
 VAR_4 = VAR_3->sc;

 VAR_9 = FUNC_1(VAR_2->buffer) /
     (4 * 2 );

 if (VAR_2->dir == VAR_1) {
  VAR_7 = FUNC_2(VAR_2->buffer);
 } else {
  VAR_7 = FUNC_0(VAR_2->buffer);
 }

 VAR_7 /= 4;
 VAR_8 = VAR_7 / 2;

 VAR_5 = VAR_2->size / 4;
 VAR_6 = VAR_2->size / 8;





 for (VAR_10 = 0; VAR_10 < VAR_4->period * 2 ; VAR_10++) {
  if (VAR_2->dir == VAR_1) {
   VAR_4->pbuf[VAR_8 + VAR_0 * VAR_2->lslot] =
       VAR_2->data[VAR_7];
   VAR_4->pbuf[VAR_8 + VAR_0 * VAR_2->rslot] =
       VAR_2->data[VAR_7 + 1];

  } else {
   VAR_2->data[VAR_7] =
       VAR_4->rbuf[VAR_8 + VAR_0 * VAR_2->lslot];
   VAR_2->data[VAR_7+1] =
       VAR_4->rbuf[VAR_8 + VAR_0 * VAR_2->rslot];
  }

  VAR_8+=1;
  VAR_8 %= VAR_6;
  VAR_7+=2;
  VAR_7 %= VAR_5;
 }
}
