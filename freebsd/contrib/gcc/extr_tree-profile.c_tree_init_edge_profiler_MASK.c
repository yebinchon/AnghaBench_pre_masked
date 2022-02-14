
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,...) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  tree VAR_8;
  tree VAR_9;
  tree VAR_10;
  tree VAR_11;

  if (!VAR_1)
    {
      VAR_1 = FUNC_3 ();
      VAR_11 = FUNC_2 (VAR_1);


      VAR_8
       = FUNC_1 (VAR_7,
       VAR_11, VAR_1,
       VAR_2,
       VAR_6, VAR_0);
      VAR_3
       = FUNC_0 ("__gcov_interval_profiler",
         VAR_8);


      VAR_9
       = FUNC_1 (VAR_7,
       VAR_11, VAR_1,
       VAR_0);
      VAR_5 = FUNC_0 ("__gcov_pow2_profiler",
         VAR_9);


      VAR_10
       = FUNC_1 (VAR_7,
       VAR_11, VAR_1,
       VAR_0);
      VAR_4
       = FUNC_0 ("__gcov_one_value_profiler",
         VAR_10);
    }
}
