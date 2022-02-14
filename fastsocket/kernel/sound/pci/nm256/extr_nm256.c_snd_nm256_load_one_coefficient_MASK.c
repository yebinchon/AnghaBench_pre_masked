
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct nm256 {scalar_t__* coeff_buf; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nm256*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct nm256*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nm256 *VAR_3, int VAR_4, u32 VAR_5, int VAR_6)
{
 u32 VAR_7 = VAR_3->coeff_buf[VAR_4];
 u16 VAR_8 = FUNC_0(VAR_6);
 u16 VAR_9 = VAR_1[VAR_6];

 FUNC_1(VAR_3, VAR_2 + VAR_8, VAR_7, VAR_9);
 FUNC_2(VAR_3, VAR_5, VAR_7);

 if (VAR_4 == VAR_0)
  VAR_9--;
 FUNC_2(VAR_3, VAR_5 + 4, VAR_7 + VAR_9);
}
