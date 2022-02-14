
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_long ;
typedef int u_int64_t ;
struct dos_partition {int dp_size; int dp_typ; int dp_shd; int dp_ehd; int dp_esect; int dp_ecyl; int dp_ssect; int dp_scyl; int dp_flag; scalar_t__ dp_start; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dos_partition const*,int *,int) ;
 char* FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(const struct dos_partition *VAR_3)
{
 u_int64_t VAR_4;

 if (!FUNC_2(VAR_3, &VAR_1, sizeof (struct dos_partition))) {
  FUNC_4("<UNUSED>\n");
  return;
 }



 VAR_4 = VAR_3->dp_size;
 VAR_4 *= VAR_2;
 VAR_4 /= (1024 * 1024);
 FUNC_4("sysid %d (%#04x),(%s)\n", VAR_3->dp_typ, VAR_3->dp_typ,
     FUNC_3(VAR_3->dp_typ));
 FUNC_4("    start %lu, size %lu (%ju Meg), flag %x%s\n",
  (u_long)VAR_3->dp_start,
  (u_long)VAR_3->dp_size,
  (uintmax_t)VAR_4,
  VAR_3->dp_flag,
  VAR_3->dp_flag == VAR_0 ? " (active)" : "");
 FUNC_4("\tbeg: cyl %d/ head %d/ sector %d;\n\tend: cyl %d/ head %d/ sector %d\n"
  ,FUNC_0(VAR_3->dp_scyl, VAR_3->dp_ssect)
  ,VAR_3->dp_shd
  ,FUNC_1(VAR_3->dp_ssect)
  ,FUNC_0(VAR_3->dp_ecyl, VAR_3->dp_esect)
  ,VAR_3->dp_ehd
  ,FUNC_1(VAR_3->dp_esect));
}
