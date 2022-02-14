
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (struct snd_trident*,int ) ;

__attribute__((used)) static inline void *FUNC_2(struct snd_trident *VAR_1, int VAR_2)
{
 char *VAR_3;
 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_2));
 VAR_3 += VAR_2 % VAR_0;
 return (void*)VAR_3;
}
