
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_mixer {struct ct_mixer* amixers; void* sums; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ct_mixer*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ct_mixer **VAR_5)
{
 struct ct_mixer *VAR_6;
 int VAR_7;

 *VAR_5 = ((void*)0);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->amixers = FUNC_1(sizeof(void *)*(VAR_3*VAR_0),
     VAR_2);
 if (!VAR_6->amixers) {
  VAR_7 = -VAR_1;
  goto error1;
 }
 VAR_6->sums = FUNC_1(sizeof(void *)*(VAR_4*VAR_0), VAR_2);
 if (!VAR_6->sums) {
  VAR_7 = -VAR_1;
  goto error2;
 }

 *VAR_5 = VAR_6;
 return 0;

error2:
 FUNC_0(VAR_6->amixers);
error1:
 FUNC_0(VAR_6);
 return VAR_7;
}
