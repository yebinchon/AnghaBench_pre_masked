
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int parent_dmat; } ;
struct mpt_page_memory {int paddr; int * vaddr; int tag; int map; } ;
struct mpt_map_info {int error; int phys; struct mpt_softc* mpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,size_t,int ,struct mpt_map_info*,int) ;
 int FUNC_2 (int ,int **,int,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct mpt_softc*,int ,int,int ,int ,int ,int *,int *,size_t,int,size_t,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_6, struct mpt_page_memory *VAR_7,
    size_t VAR_8)
{
 struct mpt_map_info VAR_9;
 int VAR_10;

 VAR_7->vaddr = ((void*)0);


 if (VAR_8 > 16 * 1024 * 1024)
  return (VAR_4);
 VAR_10 = FUNC_4(VAR_6, VAR_6->parent_dmat, 1, 0,
     VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_8, 1, VAR_8, 0, &VAR_7->tag);
 if (VAR_10)
  return (VAR_10);
 VAR_10 = FUNC_2(VAR_7->tag, &VAR_7->vaddr,
     VAR_1 | VAR_0, &VAR_7->map);
 if (VAR_10) {
  FUNC_0(VAR_7->tag);
  return (VAR_10);
 }
 VAR_9.mpt = VAR_6;
 VAR_10 = FUNC_1(VAR_7->tag, VAR_7->map, VAR_7->vaddr,
     VAR_8, VAR_5, &VAR_9, VAR_1);
 if (VAR_10 == 0)
  VAR_10 = VAR_9.error;
 if (VAR_10) {
  FUNC_3(VAR_7->tag, VAR_7->vaddr, VAR_7->map);
  FUNC_0(VAR_7->tag);
  VAR_7->vaddr = ((void*)0);
  return (VAR_10);
 }
 VAR_7->paddr = VAR_9.phys;
 return (0);
}
