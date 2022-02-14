
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key {int dummy; } ;


 struct key* FUNC_0 (int) ;
 int FUNC_1 (struct key*) ;
 int VAR_0 ;
 int FUNC_2 (struct key*) ;
 struct key* FUNC_3 (struct key_type*,char const*,void const*,size_t,void*,int *,int ) ;
 int FUNC_4 (struct key*,int) ;

struct key *FUNC_5(struct key_type *VAR_1,
         const char *VAR_2,
         const void *VAR_3,
         size_t VAR_4,
         void *VAR_5)
{
 struct key *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, ((void*)0), VAR_0);
 if (!FUNC_1(VAR_6)) {
  VAR_7 = FUNC_4(VAR_6, 0);
  if (VAR_7 < 0) {
   FUNC_2(VAR_6);
   return FUNC_0(VAR_7);
  }
 }
 return VAR_6;
}
