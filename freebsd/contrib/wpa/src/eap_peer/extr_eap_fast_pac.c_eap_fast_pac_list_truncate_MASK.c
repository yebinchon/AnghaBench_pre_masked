
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_pac {struct eap_fast_pac* next; } ;


 int FUNC_0 (struct eap_fast_pac*) ;

size_t FUNC_1(struct eap_fast_pac *VAR_0,
      size_t VAR_1)
{
 struct eap_fast_pac *VAR_2, *VAR_3;
 size_t VAR_4;

 VAR_2 = VAR_0;
 VAR_3 = ((void*)0);
 VAR_4 = 0;

 while (VAR_2) {
  VAR_4++;
  if (VAR_4 > VAR_1)
   break;
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }

 if (VAR_4 <= VAR_1 || VAR_3 == ((void*)0))
  return 0;

 VAR_4 = 0;
 VAR_3->next = ((void*)0);

 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_3);
  VAR_4++;
 }

 return VAR_4;
}
