
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct gctl_req {int dummy; } ;
struct g_cache_metadata {scalar_t__ md_provsize; void* md_size; void* md_bsize; int md_name; int md_version; int md_magic; } ;
typedef int sector ;
typedef void* intmax_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct g_cache_metadata*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int *,int) ;
 int FUNC_5 (struct gctl_req*,char*) ;
 char* FUNC_6 (struct gctl_req*,char*) ;
 int FUNC_7 (struct gctl_req*,char*) ;
 void* FUNC_8 (struct gctl_req*,char*) ;
 int FUNC_9 (char*,char const*) ;
 int VAR_3 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int ,char const*,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_12(struct gctl_req *VAR_5)
{
 struct g_cache_metadata VAR_6;
 u_char VAR_7[512];
 const char *VAR_8;
 int VAR_9, VAR_10;
 intmax_t VAR_11;

 FUNC_0(VAR_7, sizeof(VAR_7));
 VAR_10 = FUNC_7(VAR_5, "nargs");
 if (VAR_10 != 2) {
  FUNC_5(VAR_5, "Invalid number of arguments.");
  return;
 }

 FUNC_11(VAR_6.md_magic, VAR_0, sizeof(VAR_6.md_magic));
 VAR_6.md_version = VAR_1;
 VAR_8 = FUNC_6(VAR_5, "arg0");
 FUNC_11(VAR_6.md_name, VAR_8, sizeof(VAR_6.md_name));
 VAR_11 = FUNC_8(VAR_5, "blocksize");
 VAR_6.md_bsize = VAR_11;
 VAR_11 = FUNC_8(VAR_5, "size");
 VAR_6.md_size = VAR_11;

 VAR_8 = FUNC_6(VAR_5, "arg1");
 VAR_6.md_provsize = FUNC_3(VAR_8);
 if (VAR_6.md_provsize == 0) {
  FUNC_2(VAR_3, "Can't get mediasize of %s: %s.\n",
      VAR_8, FUNC_10(VAR_2));
  FUNC_5(VAR_5, "Not fully done.");
  return;
 }
 FUNC_1(&VAR_6, VAR_7);
 VAR_9 = FUNC_4(VAR_8, VAR_7, sizeof(VAR_7));
 if (VAR_9 != 0) {
  FUNC_2(VAR_3, "Can't store metadata on %s: %s.\n",
      VAR_8, FUNC_10(VAR_9));
  FUNC_5(VAR_5, "Not fully done.");
  return;
 }
 if (VAR_4)
  FUNC_9("Metadata value stored on %s.\n", VAR_8);
}
