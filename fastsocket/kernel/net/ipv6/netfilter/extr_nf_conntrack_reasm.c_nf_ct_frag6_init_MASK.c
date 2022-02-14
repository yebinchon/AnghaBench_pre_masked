
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct frag_queue {int dummy; } ;
struct TYPE_4__ {int qsize; int secret_interval; int frag_expire; int match; int skb_free; int * destructor; int constructor; int hashfn; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 int VAR_8 = 0;

 VAR_5.hashfn = VAR_6;
 VAR_5.constructor = VAR_1;
 VAR_5.destructor = ((void*)0);
 VAR_5.skb_free = VAR_7;
 VAR_5.qsize = sizeof(struct frag_queue);
 VAR_5.match = VAR_2;
 VAR_5.frag_expire = VAR_3;
 VAR_5.secret_interval = 10 * 60 * VAR_0;
 FUNC_1(&VAR_5);

 VAR_8 = FUNC_2(&VAR_4);
 if (VAR_8)
  FUNC_0(&VAR_5);

 return VAR_8;
}
