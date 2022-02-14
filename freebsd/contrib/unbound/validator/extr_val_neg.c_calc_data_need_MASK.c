
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct val_neg_data {int dummy; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; TYPE_2__** rrsets; } ;
struct TYPE_3__ {size_t dname_len; int * dname; int type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(struct reply_info* VAR_1)
{
 uint8_t* VAR_2;
 size_t VAR_3, VAR_4, VAR_5 = 0;

 for(VAR_3=VAR_1->an_numrrsets; VAR_3<VAR_1->an_numrrsets+VAR_1->ns_numrrsets; VAR_3++) {
  if(FUNC_3(VAR_1->rrsets[VAR_3]->rk.type) == VAR_0) {
   VAR_2 = VAR_1->rrsets[VAR_3]->rk.dname;
   VAR_4 = VAR_1->rrsets[VAR_3]->rk.dname_len;
   VAR_5 = sizeof(struct val_neg_data) + VAR_4;
   while(!FUNC_0(VAR_2)) {
    FUNC_2(VAR_4 > 1);
    FUNC_1(&VAR_2, &VAR_4);
    VAR_5 += sizeof(struct val_neg_data) + VAR_4;
   }
  }
 }
 return VAR_5;
}
