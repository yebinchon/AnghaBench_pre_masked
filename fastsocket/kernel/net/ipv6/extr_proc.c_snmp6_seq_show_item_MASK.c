
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_mib {int entry; scalar_t__ name; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,scalar_t__,int ) ;
 int FUNC_1 (void**,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct seq_file *VAR_0, void **VAR_1, struct snmp_mib *VAR_2)
{
 int VAR_3;
 for (VAR_3=0; VAR_2[VAR_3].name; VAR_3++)
  FUNC_0(VAR_0, "%-32s\t%lu\n", VAR_2[VAR_3].name,
      FUNC_1(VAR_1, VAR_2[VAR_3].entry));
}
