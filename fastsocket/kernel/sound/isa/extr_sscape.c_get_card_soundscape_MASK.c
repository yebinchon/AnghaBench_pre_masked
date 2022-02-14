
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {int dummy; } ;
struct snd_card {scalar_t__ private_data; } ;



__attribute__((used)) static inline struct soundscape *FUNC_0(struct snd_card *VAR_0)
{
 return (struct soundscape *) (VAR_0->private_data);
}
