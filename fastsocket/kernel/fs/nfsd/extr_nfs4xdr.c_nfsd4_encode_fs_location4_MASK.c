
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_fs_location {int path; int hosts; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (char,int ,scalar_t__**,int*) ;
 scalar_t__ FUNC_1 (char,int ,scalar_t__**,int*,char,char) ;

__attribute__((used)) static __be32 FUNC_2(struct nfsd4_fs_location *VAR_0,
        __be32 **VAR_1, int *VAR_2)
{
 __be32 VAR_3;
 __be32 *VAR_4 = *VAR_1;

 VAR_3 = FUNC_1(':', VAR_0->hosts, &VAR_4, VAR_2,
      '[', ']');
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0('/', VAR_0->path, &VAR_4, VAR_2);
 if (VAR_3)
  return VAR_3;
 *VAR_1 = VAR_4;
 return 0;
}
