
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct audit_field {int dummy; } ;
struct TYPE_2__ {struct audit_field* fields; } ;
struct audit_entry {TYPE_1__ rule; } ;


 int VAR_0 ;
 int FUNC_0 (struct audit_entry*) ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct audit_entry *FUNC_3(u32 VAR_1)
{
 struct audit_entry *VAR_2;
 struct audit_field *VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (FUNC_2(!VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_1(sizeof(*VAR_3) * VAR_1, VAR_0);
 if (FUNC_2(!VAR_3)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 VAR_2->rule.fields = VAR_3;

 return VAR_2;
}
