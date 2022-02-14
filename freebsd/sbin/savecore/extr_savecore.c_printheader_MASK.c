
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_handle_t ;
typedef void* uint64_t ;
typedef void* time_t ;
struct kerneldumpheader {char const* architecture; int compression; char const* hostname; char const* magic; char const* versionstring; char const* panicstring; char const* parity; int dumptime; int blocksize; int dumplength; int architectureversion; } ;







 char const* FUNC_0 (void**) ;
 char const* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(xo_handle_t *VAR_0, const struct kerneldumpheader *VAR_1,
    const char *VAR_2, int VAR_3, const int VAR_4)
{
 uint64_t VAR_5;
 time_t VAR_6;
 const char *VAR_7;
 const char *VAR_8;

 FUNC_4(VAR_0);
 FUNC_3(VAR_0, "{Lwc:Dump header from device}{:dump_device/%s}\n",
     VAR_2);
 FUNC_3(VAR_0, "{P:  }{Lwc:Architecture}{:architecture/%s}\n",
     VAR_1->architecture);
 FUNC_3(VAR_0,
     "{P:  }{Lwc:Architecture Version}{:architecture_version/%u}\n",
     FUNC_1(VAR_1->architectureversion));
 VAR_5 = FUNC_2(VAR_1->dumplength);
 FUNC_3(VAR_0, "{P:  }{Lwc:Dump Length}{:dump_length_bytes/%lld}\n",
     (long long)VAR_5);
 FUNC_3(VAR_0, "{P:  }{Lwc:Blocksize}{:blocksize/%d}\n",
     FUNC_1(VAR_1->blocksize));
 switch (VAR_1->compression) {
 case 131:
  VAR_8 = "none";
  break;
 case 132:
  VAR_8 = "gzip";
  break;
 case 130:
  VAR_8 = "zstd";
  break;
 default:
  VAR_8 = "???";
  break;
 }
 FUNC_3(VAR_0, "{P:  }{Lwc:Compression}{:compression/%s}\n", VAR_8);
 VAR_6 = FUNC_2(VAR_1->dumptime);
 FUNC_3(VAR_0, "{P:  }{Lwc:Dumptime}{:dumptime/%s}", FUNC_0(&VAR_6));
 FUNC_3(VAR_0, "{P:  }{Lwc:Hostname}{:hostname/%s}\n", VAR_1->hostname);
 FUNC_3(VAR_0, "{P:  }{Lwc:Magic}{:magic/%s}\n", VAR_1->magic);
 FUNC_3(VAR_0, "{P:  }{Lwc:Version String}{:version_string/%s}",
     VAR_1->versionstring);
 FUNC_3(VAR_0, "{P:  }{Lwc:Panic String}{:panic_string/%s}\n",
     VAR_1->panicstring);
 FUNC_3(VAR_0, "{P:  }{Lwc:Dump Parity}{:dump_parity/%u}\n", VAR_1->parity);
 FUNC_3(VAR_0, "{P:  }{Lwc:Bounds}{:bounds/%d}\n", VAR_3);

 switch (VAR_4) {
 case 129:
  VAR_7 = "bad";
  break;
 case 128:
  VAR_7 = "good";
  break;
 default:
  VAR_7 = "unknown";
  break;
 }
 FUNC_3(VAR_0, "{P:  }{Lwc:Dump Status}{:dump_status/%s}\n", VAR_7);
 FUNC_4(VAR_0);
}
