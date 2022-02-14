
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_mem {int * mem_res; int mem_rid; } ;
struct hdac_softc {int dev; struct hdac_mem mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct hdac_softc *VAR_1)
{
 struct hdac_mem *VAR_2;

 VAR_2 = &VAR_1->mem;
 if (VAR_2->mem_res != ((void*)0))
  FUNC_0(VAR_1->dev, VAR_0, VAR_2->mem_rid,
      VAR_2->mem_res);
 VAR_2->mem_res = ((void*)0);
}
