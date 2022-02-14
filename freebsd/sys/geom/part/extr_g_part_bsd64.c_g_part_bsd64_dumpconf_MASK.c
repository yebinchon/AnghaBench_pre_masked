
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct sbuf {int dummy; } ;
struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct g_part_bsd64_table {int d_packname; int d_stor_uuid; scalar_t__ d_abase; scalar_t__ d_bbase; } ;
struct g_part_bsd64_entry {char const* fstype; int stor_uuid; int type_uuid; } ;
typedef int buf ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*,char*) ;
 int FUNC_3 (struct sbuf*,char*,char const*,...) ;
 int FUNC_4 (struct sbuf*,int *) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct g_part_table *VAR_1,
    struct g_part_entry *VAR_2, struct sbuf *VAR_3, const char *VAR_4)
{
 struct g_part_bsd64_table *VAR_5;
 struct g_part_bsd64_entry *VAR_6;
 char VAR_7[sizeof(VAR_5->d_packname)];

 VAR_6 = (struct g_part_bsd64_entry *)VAR_2;
 if (VAR_4 == ((void*)0)) {

  FUNC_3(VAR_3, " xs BSD64 xt %u", VAR_6->fstype);
 } else if (VAR_6 != ((void*)0)) {

  FUNC_3(VAR_3, "%s<rawtype>%u</rawtype>\n", VAR_4,
      VAR_6->fstype);
  if (!FUNC_0(&VAR_0, &VAR_6->type_uuid)) {
   FUNC_3(VAR_3, "%s<type_uuid>", VAR_4);
   FUNC_4(VAR_3, &VAR_6->type_uuid);
   FUNC_2(VAR_3, "</type_uuid>\n");
  }
  FUNC_3(VAR_3, "%s<stor_uuid>", VAR_4);
  FUNC_4(VAR_3, &VAR_6->stor_uuid);
  FUNC_2(VAR_3, "</stor_uuid>\n");
 } else {

  VAR_5 = (struct g_part_bsd64_table *)VAR_1;
  FUNC_3(VAR_3, "%s<bootbase>%ju</bootbase>\n", VAR_4,
      (uintmax_t)VAR_5->d_bbase);
  if (VAR_5->d_abase)
   FUNC_3(VAR_3, "%s<backupbase>%ju</backupbase>\n",
       VAR_4, (uintmax_t)VAR_5->d_abase);
  FUNC_3(VAR_3, "%s<stor_uuid>", VAR_4);
  FUNC_4(VAR_3, &VAR_5->d_stor_uuid);
  FUNC_2(VAR_3, "</stor_uuid>\n");
  FUNC_3(VAR_3, "%s<label>", VAR_4);
  FUNC_5(VAR_7, VAR_5->d_packname, sizeof(VAR_7) - 1);
  VAR_7[sizeof(VAR_7) - 1] = '\0';
  FUNC_1(VAR_3, VAR_7);
  FUNC_2(VAR_3, "</label>\n");
 }
}
