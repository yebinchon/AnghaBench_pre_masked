
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct mn_softc {scalar_t__ framing; int nhooks; TYPE_1__** ch; } ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_2__ {scalar_t__ state; int ts; int tx_limit; int hook; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 struct mn_softc* FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mn_softc*,int) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_5, hook_p VAR_6, const char *VAR_7)
{
 u_int32_t VAR_8, VAR_9;
 struct mn_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_5);

 if (VAR_7[0] != 't' || VAR_7[1] != 's')
  return (VAR_3);

 VAR_8 = FUNC_4(VAR_7 + 2, &VAR_11);
 FUNC_5("%d bits %x\n", VAR_11, VAR_8);
 if (VAR_10->framing == VAR_0 && (VAR_8 & 1))
  return (VAR_3);
 if (VAR_10->framing == VAR_1 && VAR_11 != 32)
  return (VAR_3);
 if (VAR_8 == 0)
  return (VAR_3);
 if (VAR_10->framing == VAR_0)
  VAR_9 = FUNC_2(VAR_8) - 1;
 else
  VAR_9 = 1;
 if (!VAR_10->ch[VAR_9])
  FUNC_3(VAR_10, VAR_9);
 else if (VAR_10->ch[VAR_9]->state == VAR_4)
  return (VAR_2);
 VAR_10->ch[VAR_9]->ts = VAR_8;
 VAR_10->ch[VAR_9]->hook = VAR_6;
 VAR_10->ch[VAR_9]->tx_limit = VAR_11 * 8;
 FUNC_0(VAR_6, VAR_10->ch[VAR_9]);
 VAR_10->nhooks++;
 return(0);
}
