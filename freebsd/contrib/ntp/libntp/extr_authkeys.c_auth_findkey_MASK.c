
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savekey {scalar_t__ keyid; struct savekey* hlink; } ;
typedef struct savekey symkey ;
typedef scalar_t__ keyid_t ;


 size_t FUNC_0 (scalar_t__) ;
 struct savekey** VAR_0 ;

struct savekey *
FUNC_1(
 keyid_t VAR_1
 )
{
 symkey * VAR_2;

 for (VAR_2 = VAR_0[FUNC_0(VAR_1)]; VAR_2 != ((void*)0); VAR_2 = VAR_2->hlink)
  if (VAR_1 == VAR_2->keyid)
   return VAR_2;
 return ((void*)0);
}
