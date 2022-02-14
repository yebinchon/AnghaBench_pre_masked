
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {scalar_t__ (* is_spdif_master ) (struct snd_ice1712*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ice1712*) ;

__attribute__((used)) static inline int FUNC_1(struct snd_ice1712 *VAR_1)
{
 return VAR_1->is_spdif_master(VAR_1) || VAR_0;
}
