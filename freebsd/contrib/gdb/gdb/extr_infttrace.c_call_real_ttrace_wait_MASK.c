
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttwopt_t ;
typedef int ttstate_t ;
typedef int thread_info ;
typedef int lwpid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,int,int ,int *,size_t) ;

__attribute__((used)) static int
FUNC_3 (int VAR_2, lwpid_t VAR_3, ttwopt_t VAR_4, ttstate_t *VAR_5,
         size_t VAR_6)
{
  int VAR_7;
  thread_info *VAR_8 = ((void*)0);

  VAR_1 = 0;
  VAR_7 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  if (VAR_1)
    {





      FUNC_0 ("ttrace wait");
    }

  return VAR_7;
}
