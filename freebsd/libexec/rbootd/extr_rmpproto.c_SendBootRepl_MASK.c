
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct TYPE_11__ {size_t rmp_flnmsize; char rmp_flnm; void* rmp_retcode; void* rmp_version; void* rmp_session; int rmp_seqno; int rmp_type; } ;
struct TYPE_10__ {size_t rmp_flnmsize; char rmp_flnm; int rmp_seqno; } ;
struct rmp_packet {TYPE_2__ r_brpl; TYPE_1__ r_brq; } ;
struct TYPE_12__ {int rmplen; int bootfd; struct rmp_packet rmp; } ;
typedef TYPE_3__ RMPCONN ;


 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (size_t) ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_14 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (int ,char*,int ,...) ;

int
FUNC_12(struct rmp_packet *VAR_15, RMPCONN *VAR_16, char *VAR_17[])
{
 int VAR_18;
 char *VAR_19, VAR_20[VAR_7+1];
 RMPCONN *VAR_21;
 struct rmp_packet *VAR_22;
 char *VAR_23, *VAR_24, *VAR_25;
 u_int8_t VAR_26;





 if ((VAR_21 = FUNC_2(VAR_16)) != ((void*)0)) {
  FUNC_11(VAR_5, "%s: dropping existing connection",
         FUNC_1(VAR_21));
  FUNC_5(VAR_21);
 }

 VAR_22 = &VAR_16->rmp;




 VAR_22->r_brpl.rmp_type = VAR_8;
 FUNC_0(VAR_15->r_brq.rmp_seqno, VAR_22->r_brpl.rmp_seqno);
 VAR_22->r_brpl.rmp_session = FUNC_8(FUNC_3());
 VAR_22->r_brpl.rmp_version = FUNC_8(VAR_13);
 VAR_22->r_brpl.rmp_flnmsize = VAR_15->r_brq.rmp_flnmsize;




 VAR_23 = &VAR_15->r_brq.rmp_flnm;
 VAR_24 = VAR_20;
 VAR_25 = &VAR_22->r_brpl.rmp_flnm;
 for (VAR_26 = 0; VAR_26 < VAR_15->r_brq.rmp_flnmsize; VAR_26++)
  *VAR_24++ = *VAR_25++ = *VAR_23++;
 *VAR_24 = '\0';
 VAR_19 = (VAR_19 = FUNC_10(VAR_20,'/'))? ++VAR_19: VAR_20;




 for (VAR_26 = 0; VAR_26 < VAR_0 && VAR_17[VAR_26] != ((void*)0); VAR_26++)
  if (FUNC_6(VAR_19, VAR_17[VAR_26]))
   goto match;




 VAR_22->r_brpl.rmp_retcode = VAR_10;
 VAR_18 = 0;
 goto sendpkt;

match:
 if ((VAR_16->bootfd = FUNC_9(VAR_19, VAR_6, 0600)) < 0) {
  VAR_22->r_brpl.rmp_retcode = (VAR_14 == VAR_3)? VAR_10:
   (VAR_14 == VAR_1 || VAR_14 == VAR_2)? VAR_9:
   VAR_12;
  VAR_18 = 0;
 } else {
  VAR_22->r_brpl.rmp_retcode = VAR_11;
  VAR_18 = 1;
 }

sendpkt:
 FUNC_11(VAR_4, "%s: request to boot %s (%s)",
        FUNC_1(VAR_16), VAR_19, VAR_18? "granted": "denied");

 VAR_16->rmplen = FUNC_4(VAR_22->r_brpl.rmp_flnmsize);

 return (VAR_18 & FUNC_7(VAR_16));
}
