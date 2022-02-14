
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int32 ;
typedef int u_char ;
struct TYPE_2__ {int r_m_e_op; scalar_t__ count; int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_3 (int ,int ,int,void*,scalar_t__) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_4(
 u_char VAR_12
 )
{
 size_t VAR_13;

 VAR_5++;
 FUNC_0(3, ("sending control error %u\n", VAR_12));





 VAR_10.r_m_e_op = (u_char)VAR_3 | VAR_0 |
   (VAR_8 & VAR_2);
 VAR_10.status = FUNC_2((u_short)(VAR_12 << 8) & 0xff00);
 VAR_10.count = 0;




 if (VAR_6 && VAR_11) {
  VAR_13 = FUNC_1(VAR_7, (u_int32 *)&VAR_10,
         VAR_1);
  FUNC_3(VAR_9, VAR_4, -2, (void *)&VAR_10,
   VAR_1 + VAR_13);
 } else
  FUNC_3(VAR_9, VAR_4, -3, (void *)&VAR_10,
   VAR_1);
}
