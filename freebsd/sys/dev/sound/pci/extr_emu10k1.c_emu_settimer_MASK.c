
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_rchinfo {int spd; int blksz; scalar_t__ buffer; } ;
struct sc_pchinfo {int spd; int blksz; scalar_t__ buffer; } ;
struct sc_info {int nchans; int timerinterval; struct sc_rchinfo* rch; struct sc_pchinfo* pch; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct sc_info *VAR_1)
{
 struct sc_pchinfo *VAR_2;
 struct sc_rchinfo *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1->nchans; VAR_4++) {
  VAR_2 = &VAR_1->pch[VAR_4];
  if (VAR_2->buffer) {
   VAR_5 = (VAR_2->spd * FUNC_2(VAR_2->buffer))
       / VAR_2->blksz;
   if (VAR_5 > VAR_6)
    VAR_6 = VAR_5;
  }
 }

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_3 = &VAR_1->rch[VAR_4];
  if (VAR_3->buffer) {
   VAR_5 = (VAR_3->spd * FUNC_2(VAR_3->buffer))
       / VAR_3->blksz;
   if (VAR_5 > VAR_6)
    VAR_6 = VAR_5;
  }
 }
 FUNC_0(VAR_6, 48, 9600);
 VAR_1->timerinterval = 48000 / VAR_6;
 FUNC_1(VAR_1, VAR_0, VAR_1->timerinterval & 0x03ff, 2);

 return VAR_1->timerinterval;
}
