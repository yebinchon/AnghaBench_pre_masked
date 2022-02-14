
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 (void) FUNC_1(VAR_1,
     "Usage:\t%s [-AbcdDFGhikLMPsvX] [-e [-V] [-p <path> ...]] "
     "[-I <inflight I/Os>]\n"
     "\t\t[-o <var>=<value>]... [-t <txg>] [-U <cache>] [-x <dumpdir>]\n"
     "\t\t[<poolname> [<object> ...]]\n"
     "\t%s [-AdiPv] [-e [-V] [-p <path> ...]] [-U <cache>] <dataset> "
     "[<object> ...]\n"
     "\t%s -C [-A] [-U <cache>]\n"
     "\t%s -l [-Aqu] <device>\n"
     "\t%s -m [-AFLPX] [-e [-V] [-p <path> ...]] [-t <txg>] "
     "[-U <cache>]\n\t\t<poolname> [<vdev> [<metaslab> ...]]\n"
     "\t%s -O <dataset> <path>\n"
     "\t%s -R [-A] [-e [-V] [-p <path> ...]] [-U <cache>]\n"
     "\t\t<poolname> <vdev>:<offset>:<size>[:<flags>]\n"
     "\t%s -E [-A] word0:word1:...:word15\n"
     "\t%s -S [-AP] [-e [-V] [-p <path> ...]] [-U <cache>] "
     "<poolname>\n\n",
     VAR_0, VAR_0, VAR_0, VAR_0, VAR_0, VAR_0, VAR_0,
     VAR_0, VAR_0);

 (void) FUNC_1(VAR_1, "    Dataset name must include at least one "
     "separator character '/' or '@'\n");
 (void) FUNC_1(VAR_1, "    If dataset name is specified, only that "
     "dataset is dumped\n");
 (void) FUNC_1(VAR_1, "    If object numbers are specified, only "
     "those objects are dumped\n\n");
 (void) FUNC_1(VAR_1, "    Options to control amount of output:\n");
 (void) FUNC_1(VAR_1, "        -b block statistics\n");
 (void) FUNC_1(VAR_1, "        -c checksum all metadata (twice for "
     "all data) blocks\n");
 (void) FUNC_1(VAR_1, "        -C config (or cachefile if alone)\n");
 (void) FUNC_1(VAR_1, "        -d dataset(s)\n");
 (void) FUNC_1(VAR_1, "        -D dedup statistics\n");
 (void) FUNC_1(VAR_1, "        -E decode and display block from an "
     "embedded block pointer\n");
 (void) FUNC_1(VAR_1, "        -h pool history\n");
 (void) FUNC_1(VAR_1, "        -i intent logs\n");
 (void) FUNC_1(VAR_1, "        -l read label contents\n");
 (void) FUNC_1(VAR_1, "        -k examine the checkpointed state "
     "of the pool\n");
 (void) FUNC_1(VAR_1, "        -L disable leak tracking (do not "
     "load spacemaps)\n");
 (void) FUNC_1(VAR_1, "        -m metaslabs\n");
 (void) FUNC_1(VAR_1, "        -M metaslab groups\n");
 (void) FUNC_1(VAR_1, "        -O perform object lookups by path\n");
 (void) FUNC_1(VAR_1, "        -R read and display block from a "
     "device\n");
 (void) FUNC_1(VAR_1, "        -s report stats on zdb's I/O\n");
 (void) FUNC_1(VAR_1, "        -S simulate dedup to measure effect\n");
 (void) FUNC_1(VAR_1, "        -v verbose (applies to all "
     "others)\n\n");
 (void) FUNC_1(VAR_1, "    Below options are intended for use "
     "with other options:\n");
 (void) FUNC_1(VAR_1, "        -A ignore assertions (-A), enable "
     "panic recovery (-AA) or both (-AAA)\n");
 (void) FUNC_1(VAR_1, "        -e pool is exported/destroyed/"
     "has altroot/not in a cachefile\n");
 (void) FUNC_1(VAR_1, "        -F attempt automatic rewind within "
     "safe range of transaction groups\n");
 (void) FUNC_1(VAR_1, "        -G dump zfs_dbgmsg buffer before "
     "exiting\n");
 (void) FUNC_1(VAR_1, "        -I <number of inflight I/Os> -- "
     "specify the maximum number of "
     "checksumming I/Os [default is 200]\n");
 (void) FUNC_1(VAR_1, "        -o <variable>=<value> set global "
     "variable to an unsigned 32-bit integer value\n");
 (void) FUNC_1(VAR_1, "        -p <path> -- use one or more with "
     "-e to specify path to vdev dir\n");
 (void) FUNC_1(VAR_1, "        -P print numbers in parseable form\n");
 (void) FUNC_1(VAR_1, "        -q don't print label contents\n");
 (void) FUNC_1(VAR_1, "        -t <txg> -- highest txg to use when "
     "searching for uberblocks\n");
 (void) FUNC_1(VAR_1, "        -u uberblock\n");
 (void) FUNC_1(VAR_1, "        -U <cachefile_path> -- use alternate "
     "cachefile\n");
 (void) FUNC_1(VAR_1, "        -V do verbatim import\n");
 (void) FUNC_1(VAR_1, "        -x <dumpdir> -- "
     "dump all read blocks into specified directory\n");
 (void) FUNC_1(VAR_1, "        -X attempt extreme rewind (does not "
     "work with dataset)\n\n");
 (void) FUNC_1(VAR_1, "Specify an option more than once (e.g. -bb) "
     "to make only that option verbose\n");
 (void) FUNC_1(VAR_1, "Default is to dump everything non-verbosely\n");
 FUNC_0(1);
}
