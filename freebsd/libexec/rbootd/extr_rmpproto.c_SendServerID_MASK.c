
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct TYPE_5__ {scalar_t__ rmp_flnmsize; int rmp_flnm; int rmp_version; scalar_t__ rmp_session; int rmp_seqno; int rmp_retcode; int rmp_type; } ;
struct rmp_packet {TYPE_1__ r_brpl; } ;
struct TYPE_6__ {int rmplen; struct rmp_packet rmp; } ;
typedef TYPE_2__ RMPCONN ;


 char* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(RMPCONN *VAR_5)
{
 struct rmp_packet *VAR_6;
 char *VAR_7, *VAR_8;
 u_int8_t *VAR_9;

 VAR_6 = &VAR_5->rmp;




 VAR_6->r_brpl.rmp_type = VAR_1;
 VAR_6->r_brpl.rmp_retcode = VAR_2;
 FUNC_2(VAR_6->r_brpl.rmp_seqno);
 VAR_6->r_brpl.rmp_session = 0;
 VAR_6->r_brpl.rmp_version = FUNC_3(VAR_4);

 VAR_9 = &VAR_6->r_brpl.rmp_flnmsize;





 VAR_7 = VAR_0;
 VAR_8 = (char *) &VAR_6->r_brpl.rmp_flnm;
 for (*VAR_9 = 0; *VAR_9 < VAR_3; (*VAR_9)++) {
  if (*VAR_7 == '.' || *VAR_7 == '\0')
   break;
  *VAR_8++ = *VAR_7++;
 }

 VAR_5->rmplen = FUNC_0(*VAR_9);

 return(FUNC_1(VAR_5));
}
