
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int phys_buf; int bps; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct sc_info*,int,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct sc_info *VAR_1, struct sc_chinfo *VAR_2, u_int32_t VAR_3)
{
 u_int32_t VAR_4, VAR_5, VAR_6;

 VAR_2->phys_buf = FUNC_1(VAR_2->buffer);

 FUNC_0(VAR_1, VAR_3, VAR_2->phys_buf, 4);
 VAR_6 = (u_int32_t)FUNC_2(VAR_2->buffer);

 VAR_4 = VAR_6 / VAR_2->bps - 1;
 FUNC_0(VAR_1, VAR_3 + 4, VAR_4, 2);

 VAR_5 = VAR_6 / (VAR_2->bps * VAR_0) - 1;
 FUNC_0(VAR_1, VAR_3 + 6, VAR_5, 2);
}
