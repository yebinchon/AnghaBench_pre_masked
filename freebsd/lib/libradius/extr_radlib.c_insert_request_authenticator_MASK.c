
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_server {int * secret; } ;
struct rad_handle {size_t srv; size_t out_len; int * out; int * in; struct rad_server* servers; } ;
typedef int MD5_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rad_handle *VAR_4, int VAR_5)
{
 MD5_CTX VAR_6;
 const struct rad_server *VAR_7;

 VAR_7 = &VAR_4->servers[VAR_4->srv];


 FUNC_1(&VAR_6);
 FUNC_2(&VAR_6, &VAR_4->out[VAR_3], VAR_2 - VAR_3);
 if (VAR_5)
     FUNC_2(&VAR_6, &VAR_4->in[VAR_2], VAR_0);
 else
     FUNC_2(&VAR_6, &VAR_4->out[VAR_2], VAR_0);
 FUNC_2(&VAR_6, &VAR_4->out[VAR_1], VAR_4->out_len - VAR_1);
 FUNC_2(&VAR_6, VAR_7->secret, FUNC_3(VAR_7->secret));
 FUNC_0(&VAR_4->out[VAR_2], &VAR_6);
}
