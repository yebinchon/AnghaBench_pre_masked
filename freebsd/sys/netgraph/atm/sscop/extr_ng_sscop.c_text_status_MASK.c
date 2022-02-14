
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uintmax_t ;
typedef int u_int ;
struct sbuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_delivered; scalar_t__ errors; scalar_t__ maa_dropped; scalar_t__ maa_signals; scalar_t__ aa_dropped; scalar_t__ aa_signals; scalar_t__ out_dropped; scalar_t__ out_packets; scalar_t__ in_dropped; scalar_t__ in_packets; } ;
struct priv {int sscop; TYPE_1__ stats; int enabled; scalar_t__ manage; scalar_t__ lower; scalar_t__ upper; } ;
typedef int node_p ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*,char*,int ,int ) ;
 int FUNC_7 (struct sbuf*,char*,...) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_0, struct priv *VAR_1, char *VAR_2, u_int VAR_3)
{
 struct sbuf VAR_4;

 FUNC_6(&VAR_4, VAR_2, VAR_3, 0);

 if (VAR_1->upper)
  FUNC_7(&VAR_4, "upper hook: %s connected to %s:%s\n",
      FUNC_0(VAR_1->upper),
      FUNC_3(FUNC_1(FUNC_2(VAR_1->upper))),
      FUNC_0(FUNC_2(VAR_1->upper)));
 else
  FUNC_7(&VAR_4, "upper hook: <not connected>\n");

 if (VAR_1->lower)
  FUNC_7(&VAR_4, "lower hook: %s connected to %s:%s\n",
      FUNC_0(VAR_1->lower),
      FUNC_3(FUNC_1(FUNC_2(VAR_1->lower))),
      FUNC_0(FUNC_2(VAR_1->lower)));
 else
  FUNC_7(&VAR_4, "lower hook: <not connected>\n");

 if (VAR_1->manage)
  FUNC_7(&VAR_4, "manage hook: %s connected to %s:%s\n",
      FUNC_0(VAR_1->manage),
      FUNC_3(FUNC_1(FUNC_2(VAR_1->manage))),
      FUNC_0(FUNC_2(VAR_1->manage)));
 else
  FUNC_7(&VAR_4, "manage hook: <not connected>\n");

 FUNC_7(&VAR_4, "sscop state: %s\n",
     !VAR_1->enabled ? "<disabled>" :
     FUNC_9(FUNC_8(VAR_1->sscop)));

 FUNC_7(&VAR_4, "input packets:  %ju\n",
     (uintmax_t)VAR_1->stats.in_packets);
 FUNC_7(&VAR_4, "input dropped:  %ju\n",
     (uintmax_t)VAR_1->stats.in_dropped);
 FUNC_7(&VAR_4, "output packets: %ju\n",
     (uintmax_t)VAR_1->stats.out_packets);
 FUNC_7(&VAR_4, "output dropped: %ju\n",
     (uintmax_t)VAR_1->stats.out_dropped);
 FUNC_7(&VAR_4, "aa signals:     %ju\n",
     (uintmax_t)VAR_1->stats.aa_signals);
 FUNC_7(&VAR_4, "aa dropped:     %ju\n",
     (uintmax_t)VAR_1->stats.aa_dropped);
 FUNC_7(&VAR_4, "maa signals:    %ju\n",
     (uintmax_t)VAR_1->stats.maa_signals);
 FUNC_7(&VAR_4, "maa dropped:    %ju\n",
     (uintmax_t)VAR_1->stats.maa_dropped);
 FUNC_7(&VAR_4, "errors:         %ju\n",
     (uintmax_t)VAR_1->stats.errors);
 FUNC_7(&VAR_4, "data delivered: %ju\n",
     (uintmax_t)VAR_1->stats.data_delivered);
 FUNC_7(&VAR_4, "window:         %u\n",
     FUNC_10(VAR_1->sscop, 0));

 FUNC_4(&VAR_4);
 return (FUNC_5(&VAR_4));
}
