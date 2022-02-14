
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int symbol_filter_t ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct addr_location {int * sym; int addr; int * map; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int * FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct thread*,struct machine*,int ,int,int ,struct addr_location*) ;

void FUNC_2(struct thread *VAR_0, struct machine *VAR_1,
    u8 VAR_2, enum map_type VAR_3, u64 VAR_4,
    struct addr_location *VAR_5,
    symbol_filter_t VAR_6)
{
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_5->map != ((void*)0))
  VAR_5->sym = FUNC_0(VAR_5->map, VAR_5->addr, VAR_6);
 else
  VAR_5->sym = ((void*)0);
}
