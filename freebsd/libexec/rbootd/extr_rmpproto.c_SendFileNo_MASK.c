
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct TYPE_5__ {scalar_t__ rmp_flnmsize; int rmp_retcode; int rmp_flnm; int rmp_version; scalar_t__ rmp_session; int rmp_seqno; int rmp_type; } ;
struct rmp_packet {TYPE_1__ r_brpl; } ;
struct TYPE_6__ {int rmplen; struct rmp_packet rmp; } ;
typedef TYPE_2__ RMPCONN ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct rmp_packet *VAR_6, RMPCONN *VAR_7, char *VAR_8[])
{
 struct rmp_packet *VAR_9;
 char *VAR_10, *VAR_11;
 u_int8_t *VAR_12;
 int VAR_13;

 FUNC_0(VAR_6->r_brpl.rmp_seqno, VAR_13);
 VAR_9 = &VAR_7->rmp;




 VAR_9->r_brpl.rmp_type = VAR_2;
 FUNC_1(VAR_13, VAR_9->r_brpl.rmp_seqno);
 VAR_13--;
 VAR_9->r_brpl.rmp_session = 0;
 VAR_9->r_brpl.rmp_version = FUNC_4(VAR_5);

 VAR_12 = &VAR_9->r_brpl.rmp_flnmsize;
 *VAR_12 = 0;







 if (VAR_13 < VAR_0 && VAR_8[VAR_13] != ((void*)0)) {
  VAR_10 = VAR_8[VAR_13];
  VAR_11 = (char *)&VAR_9->r_brpl.rmp_flnm;
  for (; *VAR_10 && *VAR_12 < VAR_1; (*VAR_12)++) {
   if (*VAR_10 == '\0')
    break;
   *VAR_11++ = *VAR_10++;
  }
  VAR_9->r_brpl.rmp_retcode = VAR_4;
 } else
  VAR_9->r_brpl.rmp_retcode = VAR_3;

 VAR_7->rmplen = FUNC_2(*VAR_12);

 return(FUNC_3(VAR_7));
}
