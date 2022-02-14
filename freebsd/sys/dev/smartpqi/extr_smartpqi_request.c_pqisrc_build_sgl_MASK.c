
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int len; void* flags; void* addr; } ;
typedef TYPE_1__ sgt_t ;
struct TYPE_11__ {void* sg_chain_dma; TYPE_1__* sg_chain_virt; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_12__ {int iu_length; } ;
typedef TYPE_3__ iu_header_t ;
typedef int boolean_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_5 (int) ;

__attribute__((used)) static
boolean_t FUNC_6(sgt_t *VAR_2, rcb_t *VAR_3, iu_header_t *VAR_4,
   uint32_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7 = FUNC_3(VAR_3);
 sgt_t *VAR_8 = VAR_2;
 sgt_t *VAR_9 = ((void*)0);
 boolean_t VAR_10 = 0;

 FUNC_0(" IN ");

 FUNC_1("SGL_Count :%d",VAR_7);
 if (0 == VAR_7) {
  goto out;
 }

 if (VAR_7 <= FUNC_5(VAR_5)) {
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_8++) {
                        VAR_8->addr= FUNC_2(VAR_3,VAR_6);
                        VAR_8->len= FUNC_4(VAR_3,VAR_6);
                        VAR_8->flags= 0;
                }

  VAR_2[VAR_7 - 1].flags = VAR_1;
 } else {



  VAR_9 = VAR_3->sg_chain_virt;
  VAR_8->addr = VAR_3->sg_chain_dma;
  VAR_8->len = VAR_7 * sizeof(sgt_t);
  VAR_8->flags = VAR_0;

  VAR_8 = VAR_9;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_8++) {
   VAR_8->addr = FUNC_2(VAR_3,VAR_6);
   VAR_8->len = FUNC_4(VAR_3,VAR_6);
   VAR_8->flags = 0;
  }

  VAR_9[VAR_7 - 1].flags = VAR_1;
  VAR_7 = 1;
  VAR_10 = 1;

 }
out:
 VAR_4->iu_length = VAR_7 * sizeof(sgt_t);
 FUNC_0(" OUT ");
 return VAR_10;

}
