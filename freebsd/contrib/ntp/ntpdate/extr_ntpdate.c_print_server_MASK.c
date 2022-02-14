
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; } ;
struct server {scalar_t__ stratum; int precision; int leap; int xmtcnt; int filter_nextpt; int offset; int dispersion; scalar_t__ delay; int * filter_offset; int * filter_delay; int xmt; int org; int reftime; int rootdisp; scalar_t__ rootdelay; int refid; int trust; int srcadr; } ;
typedef int s_fp ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (char const) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int VAR_3 ;
 char* FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(
 register struct server *VAR_4,
 FILE *VAR_5
 )
{
 register int VAR_6;
 char VAR_7[5];
 const char *VAR_8;

 if (VAR_4->stratum == 0)
  return;

 if (!VAR_2) {
  (void) FUNC_1(VAR_5, "server %s, stratum %d, offset %s, delay %s\n",
       FUNC_8(&VAR_4->srcadr), VAR_4->stratum,
       FUNC_4(&VAR_4->offset, 6), FUNC_2((s_fp)VAR_4->delay, 5));
  return;
 }

 (void) FUNC_1(VAR_5, "server %s, port %d\n",
      FUNC_8(&VAR_4->srcadr), FUNC_5(((struct sockaddr_in*)&(VAR_4->srcadr))->sin_port));

 (void) FUNC_1(VAR_5, "stratum %d, precision %d, leap %c%c, trust %03o\n",
      VAR_4->stratum, VAR_4->precision,
      VAR_4->leap & 0x2 ? '1' : '0',
      VAR_4->leap & 0x1 ? '1' : '0',
      VAR_4->trust);

 if (FUNC_0(VAR_4->stratum)) {
  VAR_8 = (char *) &VAR_4->refid;
  for (VAR_6=0; VAR_6<4 && VAR_8[VAR_6]; VAR_6++) {
   VAR_7[VAR_6] = (FUNC_3(VAR_8[VAR_6]) ? VAR_8[VAR_6] : '.');
  }
  VAR_7[VAR_6] = 0;
  VAR_8 = VAR_7;
 } else {
  VAR_8 = FUNC_6(VAR_4->refid);
 }
 (void) FUNC_1(VAR_5,
   "refid [%s], root delay %s, root dispersion %s\n",
   VAR_8, FUNC_2((s_fp)VAR_4->rootdelay, 6),
   FUNC_9(VAR_4->rootdisp, 6));

 if (VAR_4->xmtcnt != VAR_4->filter_nextpt)
  (void) FUNC_1(VAR_5, "transmitted %d, in filter %d\n",
      VAR_4->xmtcnt, VAR_4->filter_nextpt);

 (void) FUNC_1(VAR_5, "reference time:      %s\n",
      FUNC_7(&VAR_4->reftime));
 (void) FUNC_1(VAR_5, "originate timestamp: %s\n",
      FUNC_7(&VAR_4->org));
 (void) FUNC_1(VAR_5, "transmit timestamp:  %s\n",
      FUNC_7(&VAR_4->xmt));

 if (VAR_3 > 1) {
  (void) FUNC_1(VAR_5, "filter delay: ");
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_6 == (VAR_0>>1))
    (void) FUNC_1(VAR_5, "\n              ");
   (void) FUNC_1(VAR_5, " %-10.10s",
    (VAR_6<VAR_3 ? FUNC_2(VAR_4->filter_delay[VAR_6], 5) : "----"));
  }
  (void) FUNC_1(VAR_5, "\n");

  (void) FUNC_1(VAR_5, "filter offset:");
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_6 == (VAR_1>>1))
    (void) FUNC_1(VAR_5, "\n              ");
   (void) FUNC_1(VAR_5, " %-10.10s",
    (VAR_6<VAR_3 ? FUNC_4(&VAR_4->filter_offset[VAR_6], 6): "----"));
  }
  (void) FUNC_1(VAR_5, "\n");
 }

 (void) FUNC_1(VAR_5, "delay %s, dispersion %s, ",
      FUNC_2((s_fp)VAR_4->delay, 5), FUNC_9(VAR_4->dispersion, 5));

 (void) FUNC_1(VAR_5, "offset %s\n\n",
      FUNC_4(&VAR_4->offset, 6));
}
