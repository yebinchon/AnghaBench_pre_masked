
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int pid; int comm; int flags; int parentsnddev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

int
FUNC_4(struct pcm_channel *VAR_2)
{
 FUNC_2(VAR_2->parentsnddev);
 FUNC_0(VAR_2);

 VAR_2->flags &= ~VAR_1;
 VAR_2->pid = -1;
 FUNC_3(VAR_2->comm, VAR_0, sizeof(VAR_2->comm));
 FUNC_1(VAR_2);

 return (0);
}
