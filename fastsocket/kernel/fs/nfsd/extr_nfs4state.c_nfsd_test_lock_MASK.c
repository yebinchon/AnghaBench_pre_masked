
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct svc_rqst*,struct svc_fh*,int ,int ,struct file**) ;
 int FUNC_2 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_3(struct svc_rqst *VAR_2, struct svc_fh *VAR_3, struct file_lock *VAR_4)
{
 struct file *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_2(VAR_5, VAR_4);
 FUNC_0(VAR_5);
 return VAR_6;
}
