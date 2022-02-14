
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dos_partition {char dp_flag; char dp_shd; char dp_ssect; char dp_scyl; char dp_typ; char dp_ehd; char dp_esect; char dp_ecyl; void* dp_size; void* dp_start; } ;


 void* FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, struct dos_partition *VAR_1)
{
 VAR_1->dp_flag = VAR_0[0];
 VAR_1->dp_shd = VAR_0[1];
 VAR_1->dp_ssect = VAR_0[2];
 VAR_1->dp_scyl = VAR_0[3];
 VAR_1->dp_typ = VAR_0[4];
 VAR_1->dp_ehd = VAR_0[5];
 VAR_1->dp_esect = VAR_0[6];
 VAR_1->dp_ecyl = VAR_0[7];
 VAR_1->dp_start = FUNC_0(VAR_0 + 8);
 VAR_1->dp_size = FUNC_0(VAR_0 + 12);
}
