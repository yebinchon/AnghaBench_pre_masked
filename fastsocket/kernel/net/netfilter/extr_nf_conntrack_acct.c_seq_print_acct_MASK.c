
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct nf_conn_counter {scalar_t__ bytes; scalar_t__ packets; } ;
struct nf_conn {int dummy; } ;


 struct nf_conn_counter* FUNC_0 (struct nf_conn const*) ;
 unsigned int FUNC_1 (struct seq_file*,char*,unsigned long long,unsigned long long) ;

unsigned int
FUNC_2(struct seq_file *VAR_0, const struct nf_conn *VAR_1, int VAR_2)
{
 struct nf_conn_counter *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return 0;

 return FUNC_1(VAR_0, "packets=%llu bytes=%llu ",
     (unsigned long long)VAR_3[VAR_2].packets,
     (unsigned long long)VAR_3[VAR_2].bytes);
}
