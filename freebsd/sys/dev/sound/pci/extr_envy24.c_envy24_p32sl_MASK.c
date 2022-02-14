
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int32_t ;
struct sc_chinfo {int offset; int size; int num; int buffer; scalar_t__ data; TYPE_1__* parent; } ;
struct TYPE_4__ {void* buffer; } ;
typedef TYPE_2__ sample32_t ;
struct TYPE_3__ {TYPE_2__* pbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct sc_chinfo *VAR_1)
{
 int VAR_2;
 sample32_t *VAR_3;
 u_int32_t *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_2 = FUNC_0(VAR_1->buffer) / 8;
 VAR_3 = VAR_1->parent->pbuf;
 VAR_4 = (u_int32_t *)VAR_1->data;
 VAR_5 = FUNC_1(VAR_1->buffer) / 4;
 VAR_6 = VAR_5 / 2 + VAR_1->offset;
 VAR_7 = VAR_1->size / 4;
 VAR_8 = VAR_1->size / 8;
 VAR_9 = VAR_1->num * 2;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_3[VAR_6 * VAR_0 + VAR_9].buffer = VAR_4[VAR_5];
  VAR_3[VAR_6 * VAR_0 + VAR_9 + 1].buffer = VAR_4[VAR_5 + 1];
  VAR_6++;
  VAR_6 %= VAR_8;
  VAR_5 += 2;
  VAR_5 %= VAR_7;
 }

 return;
}
