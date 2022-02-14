
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddf_sa_record {int Signature; } ;
struct ddf_meta {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ddf_meta*,int ) ;
 int FUNC_1 (struct ddf_meta*) ;
 struct ddf_sa_record* FUNC_2 (struct ddf_meta*,int) ;

__attribute__((used)) static struct ddf_sa_record *
FUNC_3(struct ddf_meta *VAR_1, int VAR_2)
{
 struct ddf_sa_record *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1, VAR_4);
  if (FUNC_0(VAR_1, VAR_3->Signature) == VAR_0)
   return (VAR_3);
 }
 if (VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   VAR_3 = FUNC_2(VAR_1, VAR_4);
   if (FUNC_0(VAR_1, VAR_3->Signature) == 0xffffffff ||
       FUNC_0(VAR_1, VAR_3->Signature) == 0)
    return (VAR_3);
  }
 }
 return (((void*)0));
}
