
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_midisynth {scalar_t__ seq_client; scalar_t__ parser; int seq_port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_midisynth *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->seq_client > 0) {

  FUNC_1(VAR_0->seq_client, VAR_0->seq_port);
 }

 if (VAR_0->parser)
  FUNC_0(VAR_0->parser);
}
