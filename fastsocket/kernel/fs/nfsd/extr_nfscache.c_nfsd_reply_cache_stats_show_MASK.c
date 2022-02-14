
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int rchits; int rcmisses; int rcnocache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct seq_file*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_9, void *VAR_10)
{
 FUNC_1(&VAR_0);
 FUNC_0(VAR_9, "max entries:           %u\n", VAR_5);
 FUNC_0(VAR_9, "num entries:           %u\n", VAR_7);
 FUNC_0(VAR_9, "hash buckets:          %u\n", 1 << VAR_4);
 FUNC_0(VAR_9, "mem usage:             %u\n", VAR_1);
 FUNC_0(VAR_9, "cache hits:            %u\n", VAR_6.rchits);
 FUNC_0(VAR_9, "cache misses:          %u\n", VAR_6.rcmisses);
 FUNC_0(VAR_9, "not cached:            %u\n", VAR_6.rcnocache);
 FUNC_0(VAR_9, "payload misses:        %u\n", VAR_8);
 FUNC_0(VAR_9, "longest chain len:     %u\n", VAR_2);
 FUNC_0(VAR_9, "cachesize at longest:  %u\n", VAR_3);
 FUNC_2(&VAR_0);
 return 0;
}
