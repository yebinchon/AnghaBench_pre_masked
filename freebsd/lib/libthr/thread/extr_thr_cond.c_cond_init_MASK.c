
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_cond_attr {scalar_t__ c_pshared; } ;
struct pthread_cond {int dummy; } ;
typedef struct pthread_cond_attr* pthread_condattr_t ;
typedef struct pthread_cond* pthread_cond_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pthread_cond* VAR_3 ;
 struct pthread_cond* FUNC_0 (struct pthread_cond**,int) ;
 struct pthread_cond* FUNC_1 (int,int) ;
 int FUNC_2 (struct pthread_cond*,struct pthread_cond_attr const*) ;

__attribute__((used)) static int
FUNC_3(pthread_cond_t *VAR_4, const pthread_condattr_t *VAR_5)
{
 struct pthread_cond *VAR_6;
 const struct pthread_cond_attr *VAR_7;
 int VAR_8;

 VAR_7 = VAR_5 != ((void*)0) ? *VAR_5 : ((void*)0);
 if (VAR_7 == ((void*)0) || VAR_7->c_pshared == VAR_2) {
  VAR_8 = 0;
  VAR_6 = FUNC_1(1, sizeof(struct pthread_cond));
  if (VAR_6 == ((void*)0))
   return (VAR_1);
 } else {
  VAR_8 = 1;
  VAR_6 = FUNC_0(VAR_4, 1);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
 }




 FUNC_2(VAR_6, VAR_7);
 *VAR_4 = VAR_8 ? VAR_3 : VAR_6;
 return (0);
}
