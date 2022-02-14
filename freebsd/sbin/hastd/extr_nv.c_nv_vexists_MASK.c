
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct nvhdr {int dummy; } ;
struct nv {int nv_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvhdr* FUNC_0 (struct nv*,int ,char const*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nv *VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct nvhdr *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2 == ((void*)0))
  return (0);

 VAR_7 = VAR_1;
 VAR_6 = VAR_2->nv_error;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);

 VAR_1 = VAR_7;
 VAR_2->nv_error = VAR_6;

 return (VAR_5 != ((void*)0));
}
