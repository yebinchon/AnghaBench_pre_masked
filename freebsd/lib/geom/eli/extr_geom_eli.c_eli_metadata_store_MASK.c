
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_eli_metadata {int dummy; } ;
typedef int sector ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct g_eli_metadata*,unsigned char*) ;
 int VAR_2 ;
 int FUNC_2 (unsigned char*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,unsigned char*,int) ;
 int FUNC_5 (struct gctl_req*,char*,char const*,int ) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_9(struct gctl_req *VAR_3, const char *VAR_4,
    struct g_eli_metadata *VAR_5)
{
 unsigned char VAR_6[sizeof(struct g_eli_metadata)];
 int VAR_7;

 FUNC_1(VAR_5, VAR_6);
 if (FUNC_3(VAR_4) == 0) {
  int VAR_8;


  VAR_8 = FUNC_6(VAR_4, VAR_1 | VAR_0);
  if (VAR_8 == -1) {
   FUNC_5(VAR_3, "Cannot open %s: %s.", VAR_4,
       FUNC_7(VAR_2));
   FUNC_2(VAR_6, sizeof(VAR_6));
   return (-1);
  }
  if (FUNC_8(VAR_8, VAR_6, sizeof(VAR_6)) != sizeof(VAR_6)) {
   FUNC_5(VAR_3, "Cannot write metadata to %s: %s.",
       VAR_4, FUNC_7(VAR_2));
   FUNC_2(VAR_6, sizeof(VAR_6));
   FUNC_0(VAR_8);
   return (-1);
  }
  FUNC_0(VAR_8);
 } else {

  VAR_7 = FUNC_4(VAR_4, VAR_6, sizeof(VAR_6));
  if (VAR_7 != 0) {
   FUNC_5(VAR_3, "Cannot write metadata to %s: %s.",
       VAR_4, FUNC_7(VAR_2));
   FUNC_2(VAR_6, sizeof(VAR_6));
   return (-1);
  }
 }
 FUNC_2(VAR_6, sizeof(VAR_6));
 return (0);
}
