
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct pfctl {int opts; } ;
struct cbq_opts {int minburst; int maxburst; int maxpktsize; int ns_per_byte; int maxidle; int minidle; int offtime; scalar_t__ pktsize; } ;
struct TYPE_2__ {struct cbq_opts cbq_opts; } ;
struct pf_altq {scalar_t__ bandwidth; char* qname; scalar_t__ ifbandwidth; TYPE_1__ pq_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (int ,char*,char*) ;
 double FUNC_2 (double,double) ;
 int FUNC_3 (double) ;
 int VAR_4 ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct pfctl *VAR_5, struct pf_altq *VAR_6)
{
 struct cbq_opts *VAR_7;
 double VAR_8, VAR_9, VAR_10;
 double VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 double VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 u_int VAR_21, VAR_22;

 VAR_7 = &VAR_6->pq_u.cbq_opts;
 VAR_13 = (1.0 / (double)VAR_6->ifbandwidth) * VAR_3 * 8;
 VAR_21 = VAR_7->minburst;
 VAR_22 = VAR_7->maxburst;

 if (VAR_6->bandwidth == 0)
  VAR_18 = 0.0001;
 else
  VAR_18 = ((double) VAR_6->bandwidth / (double) VAR_6->ifbandwidth);

 VAR_12 = VAR_13 / VAR_18;
 VAR_14 = (double)VAR_7->pktsize * VAR_13;
 VAR_15 = VAR_14 * (1.0 - VAR_18) / VAR_18;

 if (VAR_12 * (double)VAR_7->maxpktsize > (double)VAR_0) {




  if (VAR_6->bandwidth != 0 && (VAR_5->opts & VAR_1) == 0) {
   FUNC_4("queue bandwidth must be larger than %s",
       FUNC_3(VAR_13 * (double)VAR_7->maxpktsize /
       (double)VAR_0 * (double)VAR_6->ifbandwidth));
   FUNC_1(VAR_4, "cbq: queue %s is too slow!\n",
       VAR_6->qname);
  }
  VAR_12 = (double)(VAR_0 / VAR_7->maxpktsize);
 }

 if (VAR_22 == 0) {
  if (VAR_15 > 10.0 * 1000000)
   VAR_22 = 4;
  else
   VAR_22 = 16;
 }
 if (VAR_21 == 0)
  VAR_21 = 2;
 if (VAR_21 > VAR_22)
  VAR_21 = VAR_22;

 VAR_16 = (double)(1 << VAR_2);
 VAR_17 = (1.0 - 1.0 / VAR_16);
 VAR_19 = FUNC_2(VAR_17, (double)VAR_22);
 VAR_20 = FUNC_2(VAR_17, (double)(VAR_21-1));
 VAR_9 = ((1.0 / VAR_18 - 1.0) * ((1.0 - VAR_19) / VAR_19));
 VAR_8 = (1.0 - VAR_17);
 if (VAR_9 > VAR_8)
  VAR_9 = VAR_14 * VAR_9;
 else
  VAR_9 = VAR_14 * VAR_8;
 VAR_11 = VAR_15 * (1.0 + 1.0/(1.0 - VAR_17) * (1.0 - VAR_20) / VAR_20);
 VAR_10 = -((double)VAR_7->maxpktsize * (double)VAR_12);


 VAR_9 = ((VAR_9 * 8.0) / VAR_12) *
     FUNC_2(2.0, (double)VAR_2);
 VAR_11 = (VAR_11 * 8.0) / VAR_12 *
     FUNC_2(2.0, (double)VAR_2);
 VAR_10 = ((VAR_10 * 8.0) / VAR_12) *
     FUNC_2(2.0, (double)VAR_2);

 VAR_9 = VAR_9 / 1000.0;
 VAR_11 = VAR_11 / 1000.0;
 VAR_10 = VAR_10 / 1000.0;

 VAR_7->minburst = VAR_21;
 VAR_7->maxburst = VAR_22;
 VAR_7->ns_per_byte = (u_int)VAR_12;
 VAR_7->maxidle = (u_int)FUNC_0(VAR_9);
 VAR_7->minidle = (int)VAR_10;
 VAR_7->offtime = (u_int)FUNC_0(VAR_11);

 return (0);
}
