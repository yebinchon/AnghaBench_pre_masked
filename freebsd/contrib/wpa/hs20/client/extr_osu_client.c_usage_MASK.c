
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0("usage: hs20-osu-client [-dddqqKt] [-S<station ifname>] \\\n"
        "    [-w<wpa_supplicant ctrl_iface dir>] "
        "[-r<result file>] [-f<debug file>] \\\n"
        "    [-s<summary file>] \\\n"
        "    [-x<spp.xsd file name>] \\\n"
        "    <command> [arguments..]\n"
        "commands:\n"
        "- to_tnds <XML MO> <XML MO in TNDS format> [URN]\n"
        "- to_tnds2 <XML MO> <XML MO in TNDS format (Path) "
        "[URN]>\n"
        "- from_tnds <XML MO in TNDS format> <XML MO>\n"
        "- set_pps <PerProviderSubscription XML file name>\n"
        "- get_fqdn <PerProviderSubscription XML file name>\n"
        "- pol_upd [Server URL] [PPS] [CA cert]\n"
        "- sub_rem <Server URL> [PPS] [CA cert]\n"
        "- prov <Server URL> [CA cert]\n"
        "- oma_dm_prov <Server URL> [CA cert]\n"
        "- sim_prov <Server URL> [CA cert]\n"
        "- oma_dm_sim_prov <Server URL> [CA cert]\n"
        "- signup [CA cert]\n"
        "- dl_osu_ca <PPS> <CA file>\n"
        "- dl_polupd_ca <PPS> <CA file>\n"
        "- dl_aaa_ca <PPS> <CA file>\n"
        "- browser <URL>\n"
        "- parse_cert <X.509 certificate (DER)>\n"
        "- osu_select <OSU info directory> [CA cert]\n");
}
