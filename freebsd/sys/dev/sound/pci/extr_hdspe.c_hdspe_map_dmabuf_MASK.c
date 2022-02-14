
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sc_info {int rbuf; int pbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sc_info*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3->pbuf);
 VAR_5 = FUNC_1(VAR_3->rbuf);

 for (VAR_6 = 0; VAR_6 < VAR_0 * 16; VAR_6++) {
  FUNC_0(VAR_3, VAR_2 + 4 * VAR_6,
                    VAR_4 + VAR_6 * 4096);
  FUNC_0(VAR_3, VAR_1 + 4 * VAR_6,
                    VAR_5 + VAR_6 * 4096);
 }
}
