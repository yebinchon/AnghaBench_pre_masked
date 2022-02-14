
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {TYPE_1__* fh_export; } ;
struct svc_export {char* ex_pathname; } ;
typedef int __be32 ;
struct TYPE_2__ {char* ex_pathname; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct svc_rqst*,struct svc_fh*) ;
 int FUNC_2 (struct svc_fh*,int ) ;
 int FUNC_3 (struct svc_fh*) ;
 int VAR_1 ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static char *FUNC_6(struct svc_rqst *VAR_2, struct svc_export *VAR_3, __be32 *VAR_4)
{
 struct svc_fh VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7;
 size_t VAR_8;

 FUNC_2(&VAR_5, VAR_0);
 *VAR_4 = FUNC_1(VAR_2, &VAR_5);
 if (*VAR_4)
  return ((void*)0);
 VAR_7 = VAR_5.fh_export->ex_pathname;

 VAR_6 = VAR_3->ex_pathname;

 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_5(VAR_6, VAR_7, VAR_8)) {
  FUNC_0("nfsd: fs_locations failed;"
   "%s is not contained in %s\n", VAR_6, VAR_7);
  *VAR_4 = VAR_1;
  VAR_6 = ((void*)0);
  goto out;
 }
 VAR_6 += VAR_8;
out:
 FUNC_3(&VAR_5);
 return VAR_6;
}
