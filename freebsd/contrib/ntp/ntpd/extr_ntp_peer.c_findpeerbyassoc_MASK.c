
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct peer {scalar_t__ associd; struct peer* aid_link; } ;
typedef scalar_t__ associd_t ;


 scalar_t__ VAR_0 ;
 struct peer** VAR_1 ;
 int VAR_2 ;

struct peer *
FUNC_0(
 associd_t VAR_3
 )
{
 struct peer *VAR_4;
 u_int VAR_5;

 VAR_2++;
 VAR_5 = VAR_3 & VAR_0;
 for (VAR_4 = VAR_1[VAR_5]; VAR_4 != ((void*)0); VAR_4 = VAR_4->aid_link)
  if (VAR_3 == VAR_4->associd)
   break;
 return VAR_4;
}
