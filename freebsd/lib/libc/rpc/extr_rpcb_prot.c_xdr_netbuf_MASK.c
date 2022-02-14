
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
struct netbuf {void* buf; int maxlen; int len; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,int *,int ) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_1, struct netbuf *VAR_2)
{
 bool_t VAR_3;
 void **VAR_4;

 if (!FUNC_1(VAR_1, (u_int32_t *) &VAR_2->maxlen)) {
  return (VAR_0);
 }
 VAR_4 = &VAR_2->buf;
 VAR_3 = FUNC_0(VAR_1, (char **) VAR_4,
   (u_int *)&(VAR_2->len), VAR_2->maxlen);
 return (VAR_3);
}
