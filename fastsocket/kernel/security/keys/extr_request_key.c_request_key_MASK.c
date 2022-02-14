
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
 struct key* FUNC_3 (struct key_type*,char const*,char const*,size_t,int *,int *,int ) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (struct key*,int) ;

struct key *FUNC_6(struct key_type *VAR_1,
   const char *VAR_2,
   const char *VAR_3)
{
 struct key *VAR_4;
 size_t VAR_5 = 0;
 int VAR_6;

 if (VAR_3)
  VAR_5 = FUNC_4(VAR_3);
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5,
       ((void*)0), ((void*)0), VAR_0);
 if (!FUNC_1(VAR_4)) {
  VAR_6 = FUNC_5(VAR_4, 0);
  if (VAR_6 < 0) {
   FUNC_2(VAR_4);
   return FUNC_0(VAR_6);
  }
 }
 return VAR_4;
}
