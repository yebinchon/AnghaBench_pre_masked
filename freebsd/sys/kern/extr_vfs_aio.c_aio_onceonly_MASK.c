
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaioinfo {int dummy; } ;
struct kaiocb {int dummy; } ;
struct aioproc {int dummy; } ;
struct aioliojob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int FUNC_2 (int ,int *) ;
 int VAR_29 ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (int *,int ,char*) ;
 void* FUNC_7 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_8(void)
{

 VAR_26 = FUNC_0(VAR_31, VAR_18, ((void*)0),
     VAR_4);
 VAR_25 = FUNC_0(VAR_30, VAR_19,
     ((void*)0), VAR_4);
 FUNC_2(VAR_5, &VAR_13);
 FUNC_2(VAR_6, &VAR_29);
 FUNC_1(&VAR_14);
 FUNC_6(&VAR_17, 0, "aio_new_proc");
 FUNC_3(&VAR_15, "aio_job", ((void*)0), VAR_9);
 FUNC_1(&VAR_16);
 VAR_22 = FUNC_4(1, VAR_7, ((void*)0));
 VAR_28 = FUNC_7("AIO", sizeof(struct kaioinfo), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_10, VAR_11);
 VAR_24 = FUNC_7("AIOP", sizeof(struct aioproc), ((void*)0),
     ((void*)0), ((void*)0), ((void*)0), VAR_10, VAR_11);
 VAR_20 = FUNC_7("AIOCB", sizeof(struct kaiocb), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_10, VAR_11);
 VAR_23 = FUNC_7("AIOLIO", sizeof(struct aioliojob), ((void*)0),
     ((void*)0), ((void*)0), ((void*)0), VAR_10, VAR_11);
 VAR_21 = VAR_0;
 VAR_27 = 1;
 FUNC_5(VAR_3, VAR_12);
 FUNC_5(VAR_1, VAR_8);
 FUNC_5(VAR_2, 0);

 return (0);
}
