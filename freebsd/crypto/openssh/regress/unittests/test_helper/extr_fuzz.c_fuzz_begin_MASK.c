
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fuzz {size_t slen; int strategies; int * seed; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct fuzz* FUNC_2 (int,int) ;
 int FUNC_3 (struct fuzz*) ;
 struct fuzz* VAR_3 ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,void const*,size_t) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;

struct fuzz *
FUNC_7(u_int VAR_5, const void *VAR_6, size_t VAR_7)
{
 struct fuzz *VAR_8 = FUNC_2(sizeof(*VAR_8), 1);

 FUNC_1(VAR_6 != ((void*)0));
 FUNC_1(VAR_8 != ((void*)0));
 VAR_8->seed = FUNC_4(VAR_7);
 FUNC_1(VAR_8->seed != ((void*)0));
 FUNC_5(VAR_8->seed, VAR_6, VAR_7);
 VAR_8->slen = VAR_7;
 VAR_8->strategies = VAR_5;

 FUNC_1(VAR_8->slen < VAR_2 / 8);
 FUNC_1(VAR_8->strategies <= (VAR_0|(VAR_0-1)));

 FUNC_0(("begin, ret = %p", VAR_8));

 FUNC_3(VAR_8);






 return VAR_8;
}
