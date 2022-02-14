
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_cache_softc* softc; } ;
struct g_consumer {int dummy; } ;
struct g_cache_softc {int sc_wrotebytes; int sc_writes; int sc_cachefull; int sc_cachemisses; int sc_cachehits; int sc_cachereadbytes; int sc_cachereads; int sc_readbytes; int sc_reads; int sc_invalid; int sc_nused; int sc_nent; scalar_t__ sc_tail; int sc_bsize; int sc_maxent; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_cache_softc *VAR_5;

 if (VAR_4 != ((void*)0) || VAR_3 != ((void*)0))
  return;
 VAR_5 = VAR_2->softc;
 FUNC_0(VAR_0, "%s<Size>%u</Size>\n", VAR_1, VAR_5->sc_maxent);
 FUNC_0(VAR_0, "%s<BlockSize>%u</BlockSize>\n", VAR_1, VAR_5->sc_bsize);
 FUNC_0(VAR_0, "%s<TailOffset>%ju</TailOffset>\n", VAR_1,
     (uintmax_t)VAR_5->sc_tail);
 FUNC_0(VAR_0, "%s<Entries>%u</Entries>\n", VAR_1, VAR_5->sc_nent);
 FUNC_0(VAR_0, "%s<UsedEntries>%u</UsedEntries>\n", VAR_1,
     VAR_5->sc_nused);
 FUNC_0(VAR_0, "%s<InvalidEntries>%u</InvalidEntries>\n", VAR_1,
     VAR_5->sc_invalid);
 FUNC_0(VAR_0, "%s<Reads>%ju</Reads>\n", VAR_1, VAR_5->sc_reads);
 FUNC_0(VAR_0, "%s<ReadBytes>%ju</ReadBytes>\n", VAR_1,
     VAR_5->sc_readbytes);
 FUNC_0(VAR_0, "%s<CacheReads>%ju</CacheReads>\n", VAR_1,
     VAR_5->sc_cachereads);
 FUNC_0(VAR_0, "%s<CacheReadBytes>%ju</CacheReadBytes>\n", VAR_1,
     VAR_5->sc_cachereadbytes);
 FUNC_0(VAR_0, "%s<CacheHits>%ju</CacheHits>\n", VAR_1,
     VAR_5->sc_cachehits);
 FUNC_0(VAR_0, "%s<CacheMisses>%ju</CacheMisses>\n", VAR_1,
     VAR_5->sc_cachemisses);
 FUNC_0(VAR_0, "%s<CacheFull>%ju</CacheFull>\n", VAR_1,
     VAR_5->sc_cachefull);
 FUNC_0(VAR_0, "%s<Writes>%ju</Writes>\n", VAR_1, VAR_5->sc_writes);
 FUNC_0(VAR_0, "%s<WroteBytes>%ju</WroteBytes>\n", VAR_1,
     VAR_5->sc_wrotebytes);
}
