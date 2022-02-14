
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_nop_softc {int sc_wrotebytes; int sc_readbytes; int sc_cmd2s; int sc_cmd1s; int sc_cmd0s; int sc_flushes; int sc_getattrs; int sc_deletes; int sc_writes; int sc_reads; int sc_error; int sc_count_until_fail; int sc_delaymsec; int sc_wdelayprob; int sc_rdelayprob; int sc_wfailprob; int sc_rfailprob; scalar_t__ sc_offset; } ;
struct g_geom {struct g_nop_softc* softc; } ;
struct g_consumer {int dummy; } ;
typedef int intmax_t ;


 int FUNC_0 (struct sbuf*,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_nop_softc *VAR_5;

 if (VAR_4 != ((void*)0) || VAR_3 != ((void*)0))
  return;
 VAR_5 = VAR_2->softc;
 FUNC_0(VAR_0, "%s<Offset>%jd</Offset>\n", VAR_1,
     (intmax_t)VAR_5->sc_offset);
 FUNC_0(VAR_0, "%s<ReadFailProb>%u</ReadFailProb>\n", VAR_1,
     VAR_5->sc_rfailprob);
 FUNC_0(VAR_0, "%s<WriteFailProb>%u</WriteFailProb>\n", VAR_1,
     VAR_5->sc_wfailprob);
 FUNC_0(VAR_0, "%s<ReadDelayedProb>%u</ReadDelayedProb>\n", VAR_1,
     VAR_5->sc_rdelayprob);
 FUNC_0(VAR_0, "%s<WriteDelayedProb>%u</WriteDelayedProb>\n", VAR_1,
     VAR_5->sc_wdelayprob);
 FUNC_0(VAR_0, "%s<Delay>%d</Delay>\n", VAR_1, VAR_5->sc_delaymsec);
 FUNC_0(VAR_0, "%s<CountUntilFail>%u</CountUntilFail>\n", VAR_1,
     VAR_5->sc_count_until_fail);
 FUNC_0(VAR_0, "%s<Error>%d</Error>\n", VAR_1, VAR_5->sc_error);
 FUNC_0(VAR_0, "%s<Reads>%ju</Reads>\n", VAR_1, VAR_5->sc_reads);
 FUNC_0(VAR_0, "%s<Writes>%ju</Writes>\n", VAR_1, VAR_5->sc_writes);
 FUNC_0(VAR_0, "%s<Deletes>%ju</Deletes>\n", VAR_1, VAR_5->sc_deletes);
 FUNC_0(VAR_0, "%s<Getattrs>%ju</Getattrs>\n", VAR_1, VAR_5->sc_getattrs);
 FUNC_0(VAR_0, "%s<Flushes>%ju</Flushes>\n", VAR_1, VAR_5->sc_flushes);
 FUNC_0(VAR_0, "%s<Cmd0s>%ju</Cmd0s>\n", VAR_1, VAR_5->sc_cmd0s);
 FUNC_0(VAR_0, "%s<Cmd1s>%ju</Cmd1s>\n", VAR_1, VAR_5->sc_cmd1s);
 FUNC_0(VAR_0, "%s<Cmd2s>%ju</Cmd2s>\n", VAR_1, VAR_5->sc_cmd2s);
 FUNC_0(VAR_0, "%s<ReadBytes>%ju</ReadBytes>\n", VAR_1,
     VAR_5->sc_readbytes);
 FUNC_0(VAR_0, "%s<WroteBytes>%ju</WroteBytes>\n", VAR_1,
     VAR_5->sc_wrotebytes);
}
