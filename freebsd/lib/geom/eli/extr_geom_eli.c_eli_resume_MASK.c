
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct gctl_req {int dummy; } ;
struct g_eli_metadata {scalar_t__ md_provsize; } ;
typedef scalar_t__ off_t ;
typedef int key ;


 int VAR_0 ;
 int * FUNC_0 (struct gctl_req*,struct g_eli_metadata*,unsigned char*,int) ;
 int FUNC_1 (struct gctl_req*,char const*,struct g_eli_metadata*) ;
 int FUNC_2 (unsigned char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (struct gctl_req*,char*) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int FUNC_6 (struct gctl_req*,char*) ;
 int * FUNC_7 (struct gctl_req*) ;
 int FUNC_8 (struct gctl_req*,char*,int,unsigned char*) ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_10(struct gctl_req *VAR_2)
{
 struct g_eli_metadata VAR_3;
 unsigned char VAR_4[VAR_0];
 const char *VAR_5;
 off_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_2, "nargs");
 if (VAR_7 != 1) {
  FUNC_4(VAR_2, "Invalid number of arguments.");
  return;
 }
 VAR_5 = FUNC_5(VAR_2, "arg0");

 if (FUNC_1(VAR_2, VAR_5, &VAR_3) == -1)
  return;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_3.md_provsize != (uint64_t)VAR_6) {
  FUNC_4(VAR_2, "Provider size mismatch.");
  return;
 }

 if (FUNC_0(VAR_2, &VAR_3, VAR_4, 0) == ((void*)0)) {
  FUNC_2(VAR_4, sizeof(VAR_4));
  return;
 }

 FUNC_8(VAR_2, "key", sizeof(VAR_4), VAR_4);
 if (FUNC_7(VAR_2) == ((void*)0)) {
  if (VAR_1)
   FUNC_9("Resumed %s.\n", VAR_5);
 }
 FUNC_2(VAR_4, sizeof(VAR_4));
}
