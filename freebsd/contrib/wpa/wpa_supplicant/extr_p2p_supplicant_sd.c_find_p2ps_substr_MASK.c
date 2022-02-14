
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2ps_advertisement {scalar_t__ svc_info; } ;


 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 size_t FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct p2ps_advertisement *VAR_0,
       const u8 *VAR_1, size_t VAR_2)
{
 const u8 *VAR_3 = (const u8 *) VAR_0->svc_info;
 size_t VAR_4, VAR_5;


 if (!VAR_1 || !VAR_2)
  return 1;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_0->svc_info);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_4 - VAR_5 < VAR_2)
   break;
  if (FUNC_0(VAR_3 + VAR_5, VAR_1, VAR_2) == 0)
   return 1;
 }

 return 0;
}
