
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {unsigned int len; int * data; } ;
typedef int len ;


 int VAR_0 ;
 int VAR_1 ;
 void const* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void const*) ;
 int * FUNC_2 (void const*,unsigned int,int ) ;
 void* FUNC_3 (void const*,void const*,unsigned int*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static const void *
FUNC_5(const void *VAR_3, const void *VAR_4, struct xdr_netobj *VAR_5)
{
 const void *VAR_6;
 unsigned int VAR_7;
 VAR_3 = FUNC_3(VAR_3, VAR_4, &VAR_7, sizeof(VAR_7));
 if (FUNC_1(VAR_3))
  return VAR_3;
 VAR_5->len = VAR_7;
 if (VAR_7 == 0) {
  VAR_5->data = ((void*)0);
  return VAR_3;
 }
 VAR_6 = (const void *)((const char *)VAR_3 + VAR_7);
 if (FUNC_4(VAR_6 > VAR_4 || VAR_6 < VAR_3))
  return FUNC_0(-VAR_0);
 VAR_5->data = FUNC_2(VAR_3, VAR_7, VAR_2);
 if (FUNC_4(VAR_5->data == ((void*)0)))
  return FUNC_0(-VAR_1);
 return VAR_6;
}
