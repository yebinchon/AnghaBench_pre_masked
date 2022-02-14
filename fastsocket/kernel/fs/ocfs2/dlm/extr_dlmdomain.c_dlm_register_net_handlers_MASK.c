
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_query_join_request {int dummy; } ;
struct dlm_cancel_join {int dummy; } ;
struct dlm_assert_joined {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_8 = 0;

 VAR_8 = FUNC_1(VAR_3, VAR_2,
     sizeof(struct dlm_query_join_request),
     VAR_7,
     ((void*)0), ((void*)0), &VAR_6);
 if (VAR_8)
  goto bail;

 VAR_8 = FUNC_1(VAR_0, VAR_2,
     sizeof(struct dlm_assert_joined),
     VAR_4,
     ((void*)0), ((void*)0), &VAR_6);
 if (VAR_8)
  goto bail;

 VAR_8 = FUNC_1(VAR_1, VAR_2,
     sizeof(struct dlm_cancel_join),
     VAR_5,
     ((void*)0), ((void*)0), &VAR_6);

bail:
 if (VAR_8 < 0)
  FUNC_0();

 return VAR_8;
}
