
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int devinfo; int methods; } ;


 int FUNC_0 (int ,int ,int**) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (int ,char*) ;

int
FUNC_3(struct pcm_channel *VAR_0, int **VAR_1)
{
 FUNC_2(VAR_1 != ((void*)0), ("rates is null"));
 FUNC_1(VAR_0);
 return FUNC_0(VAR_0->methods, VAR_0->devinfo, VAR_1);
}
