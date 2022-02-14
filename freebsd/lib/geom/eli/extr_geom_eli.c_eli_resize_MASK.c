
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gctl_req {int dummy; } ;
struct g_eli_metadata {int md_provsize; scalar_t__ md_version; } ;
typedef int ssize_t ;
typedef int off_t ;




 int VAR_0 ;
 int FUNC_0 (unsigned char*,struct g_eli_metadata*) ;
 int FUNC_1 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_2 (struct gctl_req*,char const*,int,int) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct gctl_req*,char*,...) ;
 char* FUNC_10 (struct gctl_req*,char*) ;
 int FUNC_11 (struct gctl_req*,char*) ;
 int FUNC_12 (struct gctl_req*,char*) ;
 unsigned char* FUNC_13 (int) ;
 int FUNC_14 (int,unsigned char*,int,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(struct gctl_req *VAR_2)
{
 struct g_eli_metadata VAR_3;
 const char *VAR_4;
 unsigned char *VAR_5;
 ssize_t VAR_6;
 off_t VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_10 = FUNC_11(VAR_2, "nargs");
 if (VAR_10 != 1) {
  FUNC_9(VAR_2, "Invalid number of arguments.");
  return;
 }
 VAR_4 = FUNC_10(VAR_2, "arg0");

 VAR_11 = -1;
 VAR_5 = ((void*)0);
 VAR_6 = 0;

 VAR_11 = FUNC_7(VAR_4, 1);
 if (VAR_11 == -1) {
  FUNC_9(VAR_2, "Cannot open %s: %s.", VAR_4, FUNC_15(VAR_1));
  goto out;
 }

 VAR_7 = FUNC_6(VAR_11);
 VAR_6 = FUNC_8(VAR_11);
 if (VAR_7 == -1 || VAR_6 == -1) {
  FUNC_9(VAR_2, "Cannot get information about %s: %s.", VAR_4,
      FUNC_15(VAR_1));
  goto out;
 }

 VAR_5 = FUNC_13(VAR_6);
 if (VAR_5 == ((void*)0)) {
  FUNC_9(VAR_2, "Cannot allocate memory.");
  goto out;
 }

 VAR_8 = FUNC_12(VAR_2, "oldsize");
 if (VAR_8 < 0 || VAR_8 > VAR_7) {
  FUNC_9(VAR_2, "Invalid oldsize: Out of range.");
  goto out;
 }
 if (VAR_8 == VAR_7) {
  FUNC_9(VAR_2, "Size hasn't changed.");
  goto out;
 }


 if (FUNC_14(VAR_11, VAR_5, VAR_6, VAR_8 - VAR_6) != VAR_6) {
  FUNC_9(VAR_2, "Cannot read old metadata: %s.",
      FUNC_15(VAR_1));
  goto out;
 }


 VAR_9 = FUNC_0(VAR_5, &VAR_3);
 switch (VAR_9) {
 case 0:
  break;
 case 128:
  FUNC_9(VAR_2,
      "Provider's %s metadata version %u is too new.\n"
      "geli: The highest supported version is %u.",
      VAR_4, (unsigned int)VAR_3.md_version, VAR_0);
  goto out;
 case 129:
  FUNC_9(VAR_2, "Inconsistent provider's %s metadata.", VAR_4);
  goto out;
 default:
  FUNC_9(VAR_2,
      "Unexpected error while decoding provider's %s metadata: %s.",
      VAR_4, FUNC_15(VAR_9));
  goto out;
 }





 if (VAR_3.md_provsize != (uint64_t)VAR_8) {
  FUNC_9(VAR_2, "Provider size mismatch at oldsize.");
  goto out;
 }





 VAR_3.md_provsize = VAR_7;

 (void)FUNC_1(VAR_2, VAR_4, &VAR_3);

 (void)FUNC_2(VAR_2, VAR_4, VAR_11, VAR_8 - VAR_6);
out:
 if (VAR_11 != -1)
  (void)FUNC_5(VAR_11);
 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_5, VAR_6);
  FUNC_4(VAR_5);
 }
}
