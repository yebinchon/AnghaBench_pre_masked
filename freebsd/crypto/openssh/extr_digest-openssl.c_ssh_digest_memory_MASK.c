
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
struct ssh_digest {size_t digest_len; int (* mdfunc ) () ;} ;


 int FUNC_0 (void const*,size_t,int *,size_t*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct ssh_digest* FUNC_1 (int) ;
 int FUNC_2 () ;

int
FUNC_3(int VAR_3, const void *VAR_4, size_t VAR_5, u_char *VAR_6, size_t VAR_7)
{
 const struct ssh_digest *VAR_8 = FUNC_1(VAR_3);
 u_int VAR_9;

 if (VAR_8 == ((void*)0))
  return VAR_0;
 if (VAR_7 > VAR_2)
  return VAR_0;
 if (VAR_7 < VAR_8->digest_len)
  return VAR_0;
 VAR_9 = VAR_7;
 if (!FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_9, VAR_8->mdfunc(), ((void*)0)))
  return VAR_1;
 return 0;
}
