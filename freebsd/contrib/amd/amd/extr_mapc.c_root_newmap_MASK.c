
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int str ;
struct TYPE_3__ {int cfm_flags; char* cfm_type; int cfm_search_path; } ;
typedef TYPE_1__ cf_map_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* FUNC_0 (char const*,int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,char const*,int) ;

void
FUNC_7(const char *VAR_6, const char *VAR_7, const char *VAR_8, const cf_map_t *VAR_9)
{
  char VAR_10[VAR_3];




  if (!VAR_5)
    VAR_5 = FUNC_1(VAR_4, "mapdefault", ((void*)0), ((void*)0));
  if (VAR_9) {
    if (VAR_8) {
      FUNC_3(VAR_10, sizeof(VAR_10),
  "cache:=mapdefault;type:=toplvl;mount_type:=%s;fs:=\"%s\"",
  VAR_9->cfm_flags & VAR_2 ? "autofs" : "nfs",
  FUNC_0(VAR_8, VAR_9->cfm_search_path, VAR_9->cfm_type));
      if (VAR_7 && VAR_7[0] != '\0') {
 FUNC_5(VAR_10, ";", sizeof(VAR_10));
 FUNC_5(VAR_10, VAR_7, sizeof(VAR_10));
      }
      if (VAR_9->cfm_flags & VAR_1)
 FUNC_5(VAR_10, ";opts:=rw,fullybrowsable", sizeof(VAR_10));
      if (VAR_9->cfm_flags & VAR_0)
 FUNC_5(VAR_10, ";opts:=rw,browsable", sizeof(VAR_10));
      if (VAR_9->cfm_type) {
 FUNC_5(VAR_10, ";maptype:=", sizeof(VAR_10));
 FUNC_5(VAR_10, VAR_9->cfm_type, sizeof(VAR_10));
      }
    } else {
      FUNC_6(VAR_10, VAR_7, sizeof(VAR_10));
    }
  } else {
    if (VAR_8)
      FUNC_3(VAR_10, sizeof(VAR_10),
  "cache:=mapdefault;type:=toplvl;fs:=\"%s\";%s",
  VAR_8, VAR_7 ? VAR_7 : "");
    else
      FUNC_6(VAR_10, VAR_7, sizeof(VAR_10));
  }
  FUNC_2(VAR_5, FUNC_4(VAR_6), FUNC_4(VAR_10));
}
