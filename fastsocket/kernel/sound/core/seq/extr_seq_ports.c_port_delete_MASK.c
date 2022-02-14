
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct snd_seq_client_port {int closing; TYPE_1__ c_dest; TYPE_1__ c_src; int private_data; int (* private_free ) (int ) ;int use_lock; } ;
struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_client*,struct snd_seq_client_port*,TYPE_1__*,int ) ;
 int FUNC_1 (struct snd_seq_client_port*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_seq_client *VAR_2,
         struct snd_seq_client_port *VAR_3)
{

 VAR_3->closing = 1;
 FUNC_3(&VAR_3->use_lock);


 FUNC_0(VAR_2, VAR_3, &VAR_3->c_src, VAR_1);
 FUNC_0(VAR_2, VAR_3, &VAR_3->c_dest, VAR_0);

 if (VAR_3->private_free)
  VAR_3->private_free(VAR_3->private_data);

 FUNC_2(VAR_3->c_src.count != 0);
 FUNC_2(VAR_3->c_dest.count != 0);

 FUNC_1(VAR_3);
 return 0;
}
