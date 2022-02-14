
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcm_channel {int dummy; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct cdev *VAR_2, struct pcm_channel *VAR_3, struct pcm_channel *VAR_4,
    uint32_t VAR_5)
{
 if (VAR_4 != ((void*)0) && (VAR_5 & VAR_1))
  FUNC_0(VAR_4);
 if (VAR_3 != ((void*)0) && (VAR_5 & VAR_0))
  FUNC_0(VAR_3);
}
