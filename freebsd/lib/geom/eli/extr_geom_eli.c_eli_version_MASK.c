
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {int md_version; } ;
typedef int ssize_t ;
typedef int md ;
typedef int kernver ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,unsigned char*,int,int ) ;
 int FUNC_1 (struct gctl_req*,char*) ;
 char* FUNC_2 (struct gctl_req*,char*,int) ;
 int FUNC_3 (struct gctl_req*,char*) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,unsigned int*,int*,int *,int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_2)
{
 struct g_eli_metadata VAR_3;
 const char *VAR_4;
 unsigned int VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_2, "nargs");

 if (VAR_8 == 0) {
  unsigned int VAR_9;
  ssize_t VAR_10;

  VAR_10 = sizeof(VAR_9);
  if (FUNC_7("kern.geom.eli.version", &VAR_9, &VAR_10,
      ((void*)0), 0) == -1) {
   FUNC_8("Unable to obtain GELI kernel version");
  } else {
   FUNC_5("kernel: %u\n", VAR_9);
  }
  FUNC_5("userland: %u\n", VAR_1);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_4 = FUNC_2(VAR_2, "arg%d", VAR_7);
  VAR_6 = FUNC_0(VAR_4, (unsigned char *)&VAR_3,
      sizeof(VAR_3), VAR_0);
  if (VAR_6 != 0) {
   FUNC_8("%s: Unable to read metadata: %s.", VAR_4,
       FUNC_6(VAR_6));
   FUNC_1(VAR_2, "Not fully done.");
   continue;
  }
  VAR_5 = FUNC_4(&VAR_3.md_version);
  FUNC_5("%s: %u\n", VAR_4, VAR_5);
 }
}
