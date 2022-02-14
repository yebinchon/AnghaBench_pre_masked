
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_6__ {scalar_t__ linktype; TYPE_1__* bpf_pcap; } ;
typedef TYPE_2__ compiler_state_t ;
typedef int bpf_int32 ;
struct TYPE_5__ {scalar_t__ swapped; int * rfile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct block* FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct block *
FUNC_3(compiler_state_t *VAR_4, int VAR_5)
{
 if (VAR_4->linktype == VAR_2 || VAR_4->linktype == VAR_1) {
  if (VAR_4->bpf_pcap->rfile != ((void*)0) && VAR_4->bpf_pcap->swapped)
   VAR_5 = FUNC_0(VAR_5);
  VAR_5 = FUNC_2(VAR_5);
 }
 return (FUNC_1(VAR_4, VAR_3, 0, VAR_0, (bpf_int32)VAR_5));
}
