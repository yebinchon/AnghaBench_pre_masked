
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef void* bus_space_tag_t ;
typedef void* bus_space_handle_t ;
struct TYPE_4__ {int flags; void* db_vhandle; void* db_bhandle; void* db_btag; struct resource* db_res; int dev; void* csr_vhandle; void* csr_bhandle; void* csr_btag; struct resource* csr_res; void* devcfg_vhandle; void* devcfg_bhandle; void* devcfg_btag; struct resource* devcfg_res; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,struct resource*) ;

void
FUNC_3(POCE_SOFTC VAR_6)
{
 int VAR_7 = 0;

 if (FUNC_0(VAR_6) && (VAR_6->flags & VAR_2))
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 if (VAR_6->devcfg_res != ((void*)0)) {
  FUNC_2(VAR_6->dev,
         VAR_5,
         FUNC_1(VAR_7), VAR_6->devcfg_res);
  VAR_6->devcfg_res = (struct resource *)((void*)0);
  VAR_6->devcfg_btag = (bus_space_tag_t) 0;
  VAR_6->devcfg_bhandle = (bus_space_handle_t)0;
  VAR_6->devcfg_vhandle = (void *)((void*)0);
 }

 if (VAR_6->csr_res != ((void*)0)) {
  FUNC_2(VAR_6->dev,
         VAR_5,
         FUNC_1(VAR_3), VAR_6->csr_res);
  VAR_6->csr_res = (struct resource *)((void*)0);
  VAR_6->csr_btag = (bus_space_tag_t)0;
  VAR_6->csr_bhandle = (bus_space_handle_t)0;
  VAR_6->csr_vhandle = (void *)((void*)0);
 }

 if (VAR_6->db_res != ((void*)0)) {
  FUNC_2(VAR_6->dev,
         VAR_5,
         FUNC_1(VAR_4), VAR_6->db_res);
  VAR_6->db_res = (struct resource *)((void*)0);
  VAR_6->db_btag = (bus_space_tag_t)0;
  VAR_6->db_bhandle = (bus_space_handle_t)0;
  VAR_6->db_vhandle = (void *)((void*)0);
 }
}
