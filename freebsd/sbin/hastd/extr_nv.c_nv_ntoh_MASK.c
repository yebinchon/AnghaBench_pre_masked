
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {scalar_t__ nv_magic; struct ebuf* nv_ebuf; scalar_t__ nv_error; } ;
struct ebuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ebuf*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (struct nv*) ;
 struct nv* FUNC_3 (int) ;
 int FUNC_4 (struct nv*,size_t*) ;

struct nv *
FUNC_5(struct ebuf *VAR_2)
{
 struct nv *VAR_3;
 size_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0));

 VAR_3 = FUNC_3(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_3->nv_error = 0;
 VAR_3->nv_ebuf = VAR_2;
 VAR_3->nv_magic = VAR_0;

 if (FUNC_4(VAR_3, &VAR_4) == -1) {
  VAR_5 = VAR_1;
  VAR_3->nv_magic = 0;
  FUNC_2(VAR_3);
  VAR_1 = VAR_5;
  return (((void*)0));
 }



 FUNC_1(VAR_2, VAR_4);

 return (VAR_3);
}
