
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ pt_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(u_long VAR_6, u_long VAR_7, u_long VAR_8)
{
 pt_entry_t *VAR_9;

 for (VAR_9 = (pt_entry_t *)VAR_0 + FUNC_0(VAR_7); VAR_8 > 0;
     VAR_8--, VAR_9++, VAR_7 += VAR_1, VAR_6 += VAR_1)
  *VAR_9 = VAR_6 | VAR_5 | VAR_4 | VAR_2 | VAR_3;
}
