
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sfxge_intr {scalar_t__ type; scalar_t__ state; scalar_t__ zero_count; } ;
struct sfxge_softc {struct sfxge_intr intr; int * enp; } ;
struct sfxge_evq {scalar_t__ init_state; int read_ptr; int common; struct sfxge_softc* sc; } ;
typedef int efx_nic_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_6)
{
 struct sfxge_evq *VAR_7;
 struct sfxge_softc *VAR_8;
 efx_nic_t *VAR_9;
 struct sfxge_intr *VAR_10;
 boolean_t VAR_11;
 uint32_t VAR_12;

 VAR_7 = (struct sfxge_evq *)VAR_6;
 VAR_8 = VAR_7->sc;
 VAR_9 = VAR_8->enp;
 VAR_10 = &VAR_8->intr;

 FUNC_0(VAR_10 != ((void*)0), ("intr == NULL"));
 FUNC_0(VAR_10->type == VAR_0,
     ("intr->type != EFX_INTR_LINE"));

 if (VAR_10->state != VAR_5)
  return (VAR_3);

 (void)FUNC_5(VAR_9, &VAR_11, &VAR_12);

 if (VAR_11) {
  (void) FUNC_3(VAR_9);
  (void) FUNC_4(VAR_9);
  return (VAR_1);
 }

 if (VAR_12 != 0) {
  VAR_10->zero_count = 0;
  return (VAR_2);
 }
 if (VAR_10->zero_count++ == 0) {
  if (VAR_7->init_state == VAR_4) {
   if (FUNC_1(VAR_7->common, VAR_7->read_ptr))
    return (VAR_2);
   FUNC_2(VAR_7->common, VAR_7->read_ptr);
   return (VAR_1);
  }
 }

 return (VAR_3);
}
