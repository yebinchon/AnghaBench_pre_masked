
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pthread* FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,void*,int *) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *,int ,int,int ,int,int ) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*,void**) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (struct pthread*) ;
 int FUNC_8 (struct pthread*) ;
 int FUNC_9 (struct pthread*) ;

void *
FUNC_10(void *VAR_8, int VAR_9)
{
 struct pthread *VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_0();
 FUNC_7(VAR_10);
 VAR_11 = FUNC_6(VAR_8);
 FUNC_8(VAR_10);
 if (VAR_11 != ((void*)0))
  return (VAR_11);
 VAR_12 = FUNC_1(((void*)0), VAR_5, VAR_9 ? VAR_6 :
     VAR_7, VAR_8, ((void*)0));
 if (VAR_12 == -1)
  return (((void*)0));
 VAR_11 = FUNC_3(((void*)0), VAR_2, VAR_3 | VAR_4, VAR_1, VAR_12, 0);
 FUNC_2(VAR_12);
 if (VAR_11 == VAR_0)
  return (((void*)0));
 FUNC_9(VAR_10);
 VAR_13 = FUNC_5(VAR_8, &VAR_11);
 FUNC_8(VAR_10);
 if (!VAR_13) {
  FUNC_4(VAR_8, VAR_11);
  VAR_11 = ((void*)0);
 }
 return (VAR_11);
}
