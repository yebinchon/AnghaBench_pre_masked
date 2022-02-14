
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockaddr_in6 {int sin6_family; int sin6_addr; scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sem_t ;
struct TYPE_3__ {int (* getsockname ) (int,struct sockaddr*,int*) ;int (* write ) (int,scalar_t__*,int) ;int (* close ) (int) ;int (* shutdown ) (int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int,int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,int *,int *) ;
 int FUNC_5 (int,struct sockaddr*,int) ;
 int FUNC_6 (int) ;
 TYPE_1__ VAR_12 ;
 int FUNC_7 (int,int) ;
 int VAR_13 ;
 int FUNC_8 (int,int ,int ,int*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,int,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,struct sockaddr*,int*) ;
 int FUNC_16 (int,scalar_t__*,int) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(int VAR_14)
{
 struct sockaddr_in6 VAR_15;
 sem_t *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 socklen_t VAR_22;
 uint32_t VAR_23;

 VAR_18 = FUNC_1(VAR_14);

 VAR_22 = sizeof VAR_15;
 VAR_20 = VAR_12.getsockname(VAR_18, (struct sockaddr *) &VAR_15, &VAR_22);
 if (VAR_20)
  goto out;
 VAR_15 = 0;
 VAR_15 = 0;
 FUNC_3(&VAR_15, 0, sizeof VAR_15);

 VAR_16 = FUNC_11("/rsocket_fork", VAR_0 | VAR_1,
         VAR_8 | VAR_7, 1);
 if (VAR_16 == VAR_2) {
  VAR_20 = -1;
  goto out;
 }

 VAR_17 = FUNC_9(VAR_15, VAR_4, 0);
 if (VAR_17 < 0) {
  VAR_20 = VAR_17;
  goto sclose;
 }

 VAR_21 = 1;
 FUNC_8(VAR_17, VAR_5, VAR_6, &VAR_21, sizeof VAR_21);

 FUNC_13(VAR_16);
 VAR_20 = FUNC_5(VAR_17, (struct sockaddr *) &VAR_15, sizeof VAR_15);
 if (VAR_20)
  goto lclose;

 VAR_20 = FUNC_7(VAR_17, 1);
 if (VAR_20)
  goto lclose;

 VAR_23 = 0;
 VAR_22 = VAR_12.write(VAR_18, &VAR_23, sizeof VAR_23);
 if (VAR_22 != sizeof VAR_23)
  goto lclose;

 VAR_19 = FUNC_4(VAR_17, ((void*)0), ((void*)0));
 if (VAR_19 < 0) {
  VAR_20 = VAR_19;
  goto lclose;
 }

 FUNC_14(VAR_19);
 FUNC_0(VAR_19, VAR_18, &VAR_13, &VAR_12);
 VAR_12.shutdown(VAR_18, VAR_3);
 VAR_12.close(VAR_18);
 FUNC_2(VAR_14, VAR_19, VAR_11, VAR_10);

lclose:
 FUNC_6(VAR_17);
 FUNC_12(VAR_16);
sclose:
 FUNC_10(VAR_16);
out:
 if (VAR_20)
  FUNC_2(VAR_14, VAR_18, VAR_9, VAR_10);
}
