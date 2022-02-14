
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,void*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_8)
{
 int VAR_9;

 if (VAR_6) {
  FUNC_1(VAR_8, VAR_3, VAR_5, (void *) &VAR_6,
         sizeof VAR_6);
  FUNC_1(VAR_8, VAR_3, VAR_4, (void *) &VAR_6,
         sizeof VAR_6);
 } else {
  VAR_9 = 1 << 19;
  FUNC_1(VAR_8, VAR_3, VAR_5, (void *) &VAR_9, sizeof VAR_9);
  FUNC_1(VAR_8, VAR_3, VAR_4, (void *) &VAR_9, sizeof VAR_9);
 }

 if (VAR_7 & VAR_1)
  FUNC_0(VAR_8, VAR_0, VAR_2);
}
