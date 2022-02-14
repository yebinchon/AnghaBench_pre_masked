
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct dos_partition {scalar_t__ dp_typ; int dp_start; scalar_t__ dp_size; int dp_shd; int dp_ehd; void* dp_esect; void* dp_ecyl; void* dp_ssect; void* dp_scyl; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct dos_partition*,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct dos_partition *VAR_3)
{
 int VAR_4, VAR_5;
 u_int32_t VAR_6;

 if (VAR_3->dp_typ == 0 && VAR_3->dp_start == 0 && VAR_3->dp_size == 0) {
  FUNC_2(VAR_3, &VAR_2, sizeof(*VAR_3));
  return;
 }


 VAR_3->dp_shd = VAR_3->dp_start % VAR_0 / VAR_1;
 VAR_4 = VAR_3->dp_start / VAR_0;
 VAR_5 = VAR_3->dp_start % VAR_1 + 1;
 VAR_3->dp_scyl = FUNC_0(VAR_4);
 VAR_3->dp_ssect = FUNC_1(VAR_5, VAR_4);


 VAR_6 = VAR_3->dp_start + VAR_3->dp_size - 1;
 VAR_3->dp_ehd = VAR_6 % VAR_0 / VAR_1;
 VAR_4 = VAR_6 / VAR_0;
 VAR_5 = VAR_6 % VAR_1 + 1;
 VAR_3->dp_ecyl = FUNC_0(VAR_4);
 VAR_3->dp_esect = FUNC_1(VAR_5, VAR_4);
}
