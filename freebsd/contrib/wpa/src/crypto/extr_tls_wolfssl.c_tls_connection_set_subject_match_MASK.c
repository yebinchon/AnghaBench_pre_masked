
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int * domain_match; int * suffix_match; int * alt_subject_match; int * subject_match; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(struct tls_connection *VAR_0,
         const char *VAR_1,
         const char *VAR_2,
         const char *VAR_3,
         const char *VAR_4)
{
 FUNC_0(VAR_0->subject_match);
 VAR_0->subject_match = ((void*)0);
 if (VAR_1) {
  VAR_0->subject_match = FUNC_1(VAR_1);
  if (!VAR_0->subject_match)
   return -1;
 }

 FUNC_0(VAR_0->alt_subject_match);
 VAR_0->alt_subject_match = ((void*)0);
 if (VAR_2) {
  VAR_0->alt_subject_match = FUNC_1(VAR_2);
  if (!VAR_0->alt_subject_match)
   return -1;
 }

 FUNC_0(VAR_0->suffix_match);
 VAR_0->suffix_match = ((void*)0);
 if (VAR_3) {
  VAR_0->suffix_match = FUNC_1(VAR_3);
  if (!VAR_0->suffix_match)
   return -1;
 }

 FUNC_0(VAR_0->domain_match);
 VAR_0->domain_match = ((void*)0);
 if (VAR_4) {
  VAR_0->domain_match = FUNC_1(VAR_4);
  if (!VAR_0->domain_match)
   return -1;
 }

 return 0;
}
