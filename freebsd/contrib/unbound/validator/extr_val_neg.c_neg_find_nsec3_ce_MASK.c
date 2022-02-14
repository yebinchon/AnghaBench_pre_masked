
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_neg_zone {scalar_t__ labs; int len; int name; int nsec3_saltlen; int nsec3_salt; int nsec3_iter; int nsec3_hash; } ;
struct val_neg_data {scalar_t__ in_use; } ;
typedef int sldns_buffer ;
typedef int hashce ;
typedef int b32 ;


 int VAR_0 ;
 int FUNC_0 (int **,size_t*) ;
 int FUNC_1 (int *,int *,size_t) ;
 struct val_neg_data* FUNC_2 (struct val_neg_zone*,int *,size_t,scalar_t__) ;
 size_t FUNC_3 (int *,int *,size_t,int ,int ,int ,int ,int *,int) ;
 size_t FUNC_4 (int *,size_t,int ,int ,int *,int) ;

__attribute__((used)) static struct val_neg_data*
FUNC_5(struct val_neg_zone* VAR_1, uint8_t* VAR_2, size_t VAR_3,
  int VAR_4, sldns_buffer* VAR_5, uint8_t* VAR_6, size_t* VAR_7)
{
 struct val_neg_data* VAR_8;
 uint8_t VAR_9[VAR_0];
 uint8_t VAR_10[257];
 size_t VAR_11, VAR_12;

 *VAR_7 = 0;
 while(VAR_4 > 0) {

  if(!(VAR_11=FUNC_3(VAR_5, VAR_2, VAR_3,
   VAR_1->nsec3_hash, VAR_1->nsec3_iter, VAR_1->nsec3_salt,
   VAR_1->nsec3_saltlen, VAR_9, sizeof(VAR_9))))
   return ((void*)0);
  if(!(VAR_12=FUNC_4(VAR_9, VAR_11, VAR_1->name,
   VAR_1->len, VAR_10, sizeof(VAR_10))))
   return ((void*)0);


  VAR_8 = FUNC_2(VAR_1, VAR_10, VAR_12, VAR_1->labs+1);
  if(VAR_8 && VAR_8->in_use) {

   return VAR_8;
  }

  *VAR_7 = VAR_11;
  FUNC_1(VAR_6, VAR_9, VAR_11);
  FUNC_0(&VAR_2, &VAR_3);
  VAR_4 --;
 }
 return ((void*)0);
}
