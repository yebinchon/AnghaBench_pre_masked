
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dos_partition {unsigned char dp_flag; unsigned char dp_shd; unsigned char dp_ssect; unsigned char dp_scyl; unsigned char dp_typ; unsigned char dp_ehd; unsigned char dp_esect; unsigned char dp_ecyl; void* dp_size; void* dp_start; } ;


 void* FUNC_0 (unsigned char const*) ;

void
FUNC_1(void const *VAR_0, struct dos_partition *VAR_1)
{
 unsigned char const *VAR_2 = VAR_0;

 VAR_1->dp_flag = VAR_2[0];
 VAR_1->dp_shd = VAR_2[1];
 VAR_1->dp_ssect = VAR_2[2];
 VAR_1->dp_scyl = VAR_2[3];
 VAR_1->dp_typ = VAR_2[4];
 VAR_1->dp_ehd = VAR_2[5];
 VAR_1->dp_esect = VAR_2[6];
 VAR_1->dp_ecyl = VAR_2[7];
 VAR_1->dp_start = FUNC_0(VAR_2 + 8);
 VAR_1->dp_size = FUNC_0(VAR_2 + 12);
}
