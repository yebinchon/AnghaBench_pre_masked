
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_fs_locations {int locations_count; int * locations; } ;
struct svc_export {struct nfsd4_fs_locations ex_fslocs; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char,char*,scalar_t__**,int*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__**,int*) ;
 char* FUNC_3 (struct svc_rqst*,struct svc_export*,scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __be32 FUNC_4(struct svc_rqst *VAR_1,
         struct svc_export *VAR_2,
         __be32 **VAR_3, int *VAR_4)
{
 __be32 VAR_5;
 int VAR_6;
 __be32 *VAR_7 = *VAR_3;
 struct nfsd4_fs_locations *VAR_8 = &VAR_2->ex_fslocs;
 char *VAR_9 = FUNC_3(VAR_1, VAR_2, &VAR_5);

 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_1('/', VAR_9, &VAR_7, VAR_4);
 if (VAR_5)
  return VAR_5;
 if ((*VAR_4 -= 4) < 0)
  return VAR_0;
 FUNC_0(VAR_8->locations_count);
 for (VAR_6=0; VAR_6<VAR_8->locations_count; VAR_6++) {
  VAR_5 = FUNC_2(&VAR_8->locations[VAR_6],
         &VAR_7, VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 *VAR_3 = VAR_7;
 return 0;
}
