
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {scalar_t__ md_version; } ;
typedef int sector ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,struct g_eli_metadata*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,unsigned char*,int,int ) ;
 int FUNC_4 (struct gctl_req*,char*,char const*,...) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int,unsigned char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct gctl_req *VAR_4, const char *VAR_5,
    struct g_eli_metadata *VAR_6)
{
 unsigned char VAR_7[sizeof(struct g_eli_metadata)];
 int VAR_8;

 if (FUNC_2(VAR_5) == 0) {
  int VAR_9;


  VAR_9 = FUNC_5(VAR_5, VAR_2);
  if (VAR_9 == -1) {
   FUNC_4(VAR_4, "Cannot open %s: %s.", VAR_5,
       FUNC_7(VAR_3));
   return (-1);
  }
  if (FUNC_6(VAR_9, VAR_7, sizeof(VAR_7)) != sizeof(VAR_7)) {
   FUNC_4(VAR_4, "Cannot read metadata from %s: %s.",
       VAR_5, FUNC_7(VAR_3));
   FUNC_0(VAR_9);
   return (-1);
  }
  FUNC_0(VAR_9);
 } else {

  VAR_8 = FUNC_3(VAR_5, VAR_7, sizeof(VAR_7),
      VAR_0);
  if (VAR_8 != 0) {
   FUNC_4(VAR_4, "Cannot read metadata from %s: %s.",
       VAR_5, FUNC_7(VAR_8));
   return (-1);
  }
 }
 VAR_8 = FUNC_1(VAR_7, VAR_6);
 switch (VAR_8) {
 case 0:
  break;
 case 128:
  FUNC_4(VAR_4,
      "Provider's %s metadata version %u is too new.\n"
      "geli: The highest supported version is %u.",
      VAR_5, (unsigned int)VAR_6->md_version, VAR_1);
  return (-1);
 case 129:
  FUNC_4(VAR_4, "Inconsistent provider's %s metadata.", VAR_5);
  return (-1);
 default:
  FUNC_4(VAR_4,
      "Unexpected error while decoding provider's %s metadata: %s.",
      VAR_5, FUNC_7(VAR_8));
  return (-1);
 }
 return (0);
}
