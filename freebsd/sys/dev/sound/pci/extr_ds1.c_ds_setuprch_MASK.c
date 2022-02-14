
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_rchinfo {int fmt; scalar_t__ num; int spd; TYPE_1__* slot; int buffer; struct sc_info* parent; } ;
struct sc_info {int dummy; } ;
typedef int bus_addr_t ;
struct TYPE_2__ {int PgLoopEnd; scalar_t__ NumOfLoops; scalar_t__ PgStart; int PgBase; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct sc_rchinfo *VAR_6)
{
 struct sc_info *VAR_7 = VAR_6->parent;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u_int32_t VAR_13, VAR_14;
 bus_addr_t VAR_15;

 VAR_8 = (FUNC_0(VAR_6->fmt) > 1)? 1 : 0;
 VAR_9 = (VAR_6->fmt & VAR_0)? 1 : 0;
 VAR_15 = FUNC_2(VAR_6->buffer);
 VAR_11 = FUNC_3(VAR_6->buffer);
 VAR_12 = (VAR_6->num == VAR_1)? 1 : 0;

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_6->slot[VAR_10].PgBase = VAR_15;
  VAR_6->slot[VAR_10].PgLoopEnd = VAR_11;
  VAR_6->slot[VAR_10].PgStart = 0;
  VAR_6->slot[VAR_10].NumOfLoops = 0;
 }
 VAR_13 = (VAR_9? 0x00 : 0x01) | (VAR_8? 0x02 : 0x00);
 VAR_14 = (48000 * 4096) / VAR_6->spd;
 VAR_14--;

 FUNC_1(VAR_7, VAR_12? VAR_2 : VAR_4, VAR_13, 4);
 FUNC_1(VAR_7, VAR_12? VAR_3 : VAR_5, VAR_14, 4);
}
