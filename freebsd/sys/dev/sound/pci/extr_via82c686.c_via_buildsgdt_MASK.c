
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct via_chinfo {int blksz; TYPE_1__* sgd_table; int buffer; } ;
struct TYPE_2__ {int ptr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct via_chinfo *VAR_2)
{
 u_int32_t VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;







 VAR_7 = VAR_2->blksz;
 VAR_6 = FUNC_1(VAR_2->buffer) / VAR_7;
 VAR_3 = FUNC_0(VAR_2->buffer);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = (VAR_5 == VAR_6 - 1)? VAR_0 : VAR_1;
  VAR_2->sgd_table[VAR_5].ptr = VAR_3 + (VAR_5 * VAR_7);
  VAR_2->sgd_table[VAR_5].flags = VAR_4 | VAR_7;
 }

 return 0;
}
