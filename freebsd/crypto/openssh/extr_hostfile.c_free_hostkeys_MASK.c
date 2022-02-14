
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct hostkeys {size_t num_entries; struct hostkeys* entries; int key; struct hostkeys* file; struct hostkeys* host; } ;


 int FUNC_0 (struct hostkeys*,int) ;
 int FUNC_1 (struct hostkeys*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct hostkeys *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_entries; VAR_1++) {
  FUNC_1(VAR_0->entries[VAR_1].host);
  FUNC_1(VAR_0->entries[VAR_1].file);
  FUNC_2(VAR_0->entries[VAR_1].key);
  FUNC_0(VAR_0->entries + VAR_1, sizeof(*VAR_0->entries));
 }
 FUNC_1(VAR_0->entries);
 FUNC_0(VAR_0, sizeof(*VAR_0));
 FUNC_1(VAR_0);
}
