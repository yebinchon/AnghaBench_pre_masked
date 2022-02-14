
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ expiry_time; scalar_t__ flags; } ;
struct rsi {TYPE_1__ h; int out_token; int out_handle; void* minor_status; void* major_status; int in_token; int in_handle; } ;
struct cache_detail {int dummy; } ;
typedef int rsii ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (char**) ;
 int FUNC_3 (struct rsi*,int ,int) ;
 int FUNC_4 (char**,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct rsi*) ;
 struct rsi* FUNC_6 (struct rsi*) ;
 struct rsi* FUNC_7 (struct rsi*,struct rsi*) ;
 void* FUNC_8 (char*,char**,int) ;

__attribute__((used)) static int FUNC_9(struct cache_detail *VAR_3,
      char *VAR_4, int VAR_5)
{

 char *VAR_6 = VAR_4;
 char *VAR_7;
 int VAR_8;
 struct rsi VAR_9, *VAR_10 = ((void*)0);
 time_t VAR_11;
 int VAR_12 = -VAR_0;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));

 VAR_8 = FUNC_4(&VAR_4, VAR_6, VAR_5);
 if (VAR_8 < 0)
  goto out;
 VAR_12 = -VAR_1;
 if (FUNC_1(&VAR_9.in_handle, VAR_6, VAR_8))
  goto out;


 VAR_8 = FUNC_4(&VAR_4, VAR_6, VAR_5);
 VAR_12 = -VAR_0;
 if (VAR_8 < 0)
  goto out;
 VAR_12 = -VAR_1;
 if (FUNC_1(&VAR_9.in_token, VAR_6, VAR_8))
  goto out;

 VAR_10 = FUNC_6(&VAR_9);
 if (!VAR_10)
  goto out;

 VAR_9.h.flags = 0;

 VAR_11 = FUNC_2(&VAR_4);
 VAR_12 = -VAR_0;
 if (VAR_11 == 0)
  goto out;


 VAR_8 = FUNC_4(&VAR_4, VAR_6, VAR_5);
 if (VAR_8 <= 0)
  goto out;
 VAR_9.major_status = FUNC_8(VAR_6, &VAR_7, 10);
 if (*VAR_7)
  goto out;
 VAR_8 = FUNC_4(&VAR_4, VAR_6, VAR_5);
 if (VAR_8 <= 0)
  goto out;
 VAR_9.minor_status = FUNC_8(VAR_6, &VAR_7, 10);
 if (*VAR_7)
  goto out;


 VAR_8 = FUNC_4(&VAR_4, VAR_6, VAR_5);
 if (VAR_8 < 0)
  goto out;
 VAR_12 = -VAR_1;
 if (FUNC_1(&VAR_9.out_handle, VAR_6, VAR_8))
  goto out;


 VAR_8 = FUNC_4(&VAR_4, VAR_6, VAR_5);
 VAR_12 = -VAR_0;
 if (VAR_8 < 0)
  goto out;
 VAR_12 = -VAR_1;
 if (FUNC_1(&VAR_9.out_token, VAR_6, VAR_8))
  goto out;
 VAR_9.h.expiry_time = VAR_11;
 VAR_10 = FUNC_7(&VAR_9, VAR_10);
 VAR_12 = 0;
out:
 FUNC_5(&VAR_9);
 if (VAR_10)
  FUNC_0(&VAR_10->h, &VAR_2);
 else
  VAR_12 = -VAR_1;
 return VAR_12;
}
