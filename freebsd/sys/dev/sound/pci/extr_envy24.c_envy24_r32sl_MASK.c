
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_chinfo {int offset; int size; int num; int buffer; scalar_t__ data; TYPE_1__* parent; } ;
struct TYPE_4__ {int buffer; } ;
typedef TYPE_2__ sample32_t ;
struct TYPE_3__ {TYPE_2__* rbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct sc_chinfo *VAR_2)
{
 int VAR_3;
 sample32_t *VAR_4;
 u_int32_t *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_3 = FUNC_0(VAR_2->buffer) / 8;
 VAR_4 = VAR_2->parent->rbuf;
 VAR_5 = (u_int32_t *)VAR_2->data;
 VAR_7 = FUNC_1(VAR_2->buffer) / 4;
 VAR_6 = VAR_7 / 2 + VAR_2->offset;
 VAR_9 = VAR_2->size / 4;
 VAR_8 = VAR_2->size / 8;
 VAR_10 = (VAR_2->num - VAR_0) * 2;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_5[VAR_7] = VAR_4[VAR_6 * VAR_1 + VAR_10].buffer;
  VAR_5[VAR_7 + 1] = VAR_4[VAR_6 * VAR_1 + VAR_10 + 1].buffer;
  VAR_7 += 2;
  VAR_7 %= VAR_9;
  VAR_6++;
  VAR_6 %= VAR_8;
 }

 return;
}
