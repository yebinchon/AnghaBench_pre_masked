
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,int ,int *,int *) ;
 void* FUNC_3 (char*,int,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_5 (char*) ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static int FUNC_6(void)
{
 VAR_1 = FUNC_1("dma-api", ((void*)0));
 if (!VAR_1) {
  FUNC_5("DMA-API: can not create debugfs directory\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0("disabled", 0444,
   VAR_1,
   (u32 *)&VAR_6);
 if (!VAR_7)
  goto out_err;

 VAR_3 = FUNC_3("error_count", 0444,
   VAR_1, &VAR_2);
 if (!VAR_3)
  goto out_err;

 VAR_13 = FUNC_3("all_errors", 0644,
   VAR_1,
   &VAR_12);
 if (!VAR_13)
  goto out_err;

 VAR_15 = FUNC_3("num_errors", 0644,
   VAR_1,
   &VAR_14);
 if (!VAR_15)
  goto out_err;

 VAR_11 = FUNC_3("num_free_entries", 0444,
   VAR_1,
   &VAR_10);
 if (!VAR_11)
  goto out_err;

 VAR_9 = FUNC_3("min_free_entries", 0444,
   VAR_1,
   &VAR_8);
 if (!VAR_9)
  goto out_err;

 VAR_4 = FUNC_2("driver_filter", 0644,
       VAR_1, ((void*)0), &VAR_5);
 if (!VAR_4)
  goto out_err;

 return 0;

out_err:
 FUNC_4(VAR_1);

 return -VAR_0;
}
