
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct parse {int dummy; } ;
struct info_control {int numctlbadop; int numctldatatooshort; int numctlbadversion; int numctlbadoffset; int numctlinputerr; int numctlinputfrag; int numctlinputresp; int numctltooshort; int numctlbadpkts; int numctlerrors; int numasyncmsgs; int numctlfrags; int numctlresponses; int numctlreq; int ctltimereset; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,int *,size_t*,size_t*,void*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(
 struct parse *VAR_5,
 FILE *VAR_6
 )
{
 struct info_control *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 int VAR_10;

again:
 VAR_10 = FUNC_2(VAR_4, VAR_3, 0, 0, 0, ((void*)0), &VAR_8,
        &VAR_9, (void *)&VAR_7, 0, sizeof(*VAR_7));

 if (VAR_10 == VAR_2 && VAR_4 == VAR_0) {
  VAR_4 = VAR_1;
  goto again;
 }

 if (VAR_10 != 0)
  return;

 if (!FUNC_0(VAR_8, VAR_6))
  return;

 if (!FUNC_1(VAR_9, sizeof(*VAR_7)))
  return;

 FUNC_3(VAR_6, "time since reset:       %lu\n",
  (u_long)FUNC_4(VAR_7->ctltimereset));
 FUNC_3(VAR_6, "requests received:      %lu\n",
  (u_long)FUNC_4(VAR_7->numctlreq));
 FUNC_3(VAR_6, "responses sent:         %lu\n",
  (u_long)FUNC_4(VAR_7->numctlresponses));
 FUNC_3(VAR_6, "fragments sent:         %lu\n",
  (u_long)FUNC_4(VAR_7->numctlfrags));
 FUNC_3(VAR_6, "async messages sent:    %lu\n",
  (u_long)FUNC_4(VAR_7->numasyncmsgs));
 FUNC_3(VAR_6, "error msgs sent:        %lu\n",
  (u_long)FUNC_4(VAR_7->numctlerrors));
 FUNC_3(VAR_6, "total bad pkts:         %lu\n",
  (u_long)FUNC_4(VAR_7->numctlbadpkts));
 FUNC_3(VAR_6, "packet too short:       %lu\n",
  (u_long)FUNC_4(VAR_7->numctltooshort));
 FUNC_3(VAR_6, "response on input:      %lu\n",
  (u_long)FUNC_4(VAR_7->numctlinputresp));
 FUNC_3(VAR_6, "fragment on input:      %lu\n",
  (u_long)FUNC_4(VAR_7->numctlinputfrag));
 FUNC_3(VAR_6, "error set on input:     %lu\n",
  (u_long)FUNC_4(VAR_7->numctlinputerr));
 FUNC_3(VAR_6, "bad offset on input:    %lu\n",
  (u_long)FUNC_4(VAR_7->numctlbadoffset));
 FUNC_3(VAR_6, "bad version packets:    %lu\n",
  (u_long)FUNC_4(VAR_7->numctlbadversion));
 FUNC_3(VAR_6, "data in pkt too short:  %lu\n",
  (u_long)FUNC_4(VAR_7->numctldatatooshort));
 FUNC_3(VAR_6, "unknown op codes:       %lu\n",
  (u_long)FUNC_4(VAR_7->numctlbadop));
}
