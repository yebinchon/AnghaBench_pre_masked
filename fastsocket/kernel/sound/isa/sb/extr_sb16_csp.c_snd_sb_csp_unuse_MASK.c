
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb_csp {int access_mutex; int used; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_sb_csp * VAR_0)
{
 FUNC_0(&VAR_0->access_mutex);
 VAR_0->used--;
 FUNC_1(&VAR_0->access_mutex);

 return 0;
}
