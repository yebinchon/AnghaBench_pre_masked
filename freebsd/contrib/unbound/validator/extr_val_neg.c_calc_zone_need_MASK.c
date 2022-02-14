
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_neg_zone {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(uint8_t* VAR_0, size_t VAR_1)
{
 size_t VAR_2 = sizeof(struct val_neg_zone) + VAR_1;
 while(!FUNC_0(VAR_0)) {
  FUNC_2(VAR_1 > 1);
  FUNC_1(&VAR_0, &VAR_1);
  VAR_2 += sizeof(struct val_neg_zone) + VAR_1;
 }
 return VAR_2;
}
