
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int mon_entry ;


 int * FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 mon_entry *VAR_4;
 u_int VAR_5;

 VAR_5 = (0 == VAR_0)
        ? VAR_3
        : VAR_2;

 if (VAR_5) {
  VAR_4 = FUNC_0(VAR_5, sizeof(*VAR_4));
  VAR_1 += VAR_5;
  for (VAR_4 += VAR_5; VAR_5; VAR_5--)
   FUNC_1(--VAR_4);

  VAR_0++;
 }
}
