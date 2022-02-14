
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcm_channel {int dummy; } ;
struct feeder_chain_state {TYPE_1__* matrix; int afmt; } ;
struct feeder_chain_desc {scalar_t__ afmt_ne; struct feeder_chain_state target; struct feeder_chain_state current; } ;
struct TYPE_2__ {int ext; int channels; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct pcm_channel*,struct feeder_chain_desc*) ;

__attribute__((used)) static int
FUNC_3(struct pcm_channel *VAR_0, struct feeder_chain_desc *VAR_1)
{
 struct feeder_chain_state VAR_2;
 int VAR_3;

 if (VAR_1->afmt_ne == 0 ||
     FUNC_0(VAR_1->current.afmt) == VAR_1->afmt_ne)
  return (0);

 VAR_2 = VAR_1->target;
 VAR_1->target = VAR_1->current;
 VAR_1->target.afmt = FUNC_1(VAR_1->afmt_ne,
     VAR_1->current.matrix->channels, VAR_1->current.matrix->ext);

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 != 0)
  return (VAR_3);

 VAR_1->target = VAR_2;

 return (0);
}
