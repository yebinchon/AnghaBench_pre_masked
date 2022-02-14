
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct svc_xprt {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int sv_nrthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (char*,char*,char*,int*) ;
 int FUNC_2 (struct svc_xprt*) ;
 int FUNC_3 (TYPE_1__*,char*,int *,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct svc_xprt* FUNC_5 (TYPE_1__*,char*,int ,int) ;
 int FUNC_6 (struct svc_xprt*) ;

__attribute__((used)) static ssize_t FUNC_7(char *VAR_8)
{
 char VAR_9[16];
 struct svc_xprt *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_1(VAR_8, "%15s %4u", VAR_9, &VAR_11) != 2)
  return -VAR_1;

 if (VAR_11 < 1 || VAR_11 > VAR_5)
  return -VAR_1;

 VAR_12 = FUNC_0();
 if (VAR_12 != 0)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_7, VAR_9, &VAR_6,
    VAR_2, VAR_11, VAR_4);
 if (VAR_12 < 0)
  goto out_err;

 VAR_12 = FUNC_3(VAR_7, VAR_9, &VAR_6,
    VAR_3, VAR_11, VAR_4);
 if (VAR_12 < 0 && VAR_12 != -VAR_0)
  goto out_close;


 VAR_7->sv_nrthreads--;
 return 0;
out_close:
 VAR_10 = FUNC_5(VAR_7, VAR_9, VAR_2, VAR_11);
 if (VAR_10 != ((void*)0)) {
  FUNC_2(VAR_10);
  FUNC_6(VAR_10);
 }
out_err:
 FUNC_4(VAR_7);
 return VAR_12;
}
