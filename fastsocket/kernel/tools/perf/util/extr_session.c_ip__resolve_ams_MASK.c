
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct addr_map_symbol {int map; scalar_t__ sym; int al_addr; int addr; } ;
struct addr_location {int map; scalar_t__ sym; int addr; } ;
typedef int al ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct addr_location*,int ,int) ;
 int FUNC_1 (struct thread*,struct machine*,int ,int ,int ,struct addr_location*,int *) ;

__attribute__((used)) static void FUNC_2(struct machine *VAR_3, struct thread *VAR_4,
       struct addr_map_symbol *VAR_5,
       u64 VAR_6)
{
 struct addr_location VAR_7;
 size_t VAR_8;
 u8 VAR_9;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = VAR_2[VAR_8];







  FUNC_1(VAR_4, VAR_3, VAR_9, VAR_0,
    VAR_6, &VAR_7, ((void*)0));
  if (VAR_7.sym)
   goto found;
 }
found:
 VAR_5->addr = VAR_6;
 VAR_5->al_addr = VAR_7.addr;
 VAR_5->sym = VAR_7.sym;
 VAR_5->map = VAR_7.map;
}
