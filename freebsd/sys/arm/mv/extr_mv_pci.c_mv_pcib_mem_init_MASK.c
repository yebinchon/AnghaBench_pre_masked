
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* rm_type; } ;
struct mv_pcib_softc {TYPE_1__ sc_io_rman; TYPE_1__ sc_mem_rman; scalar_t__ sc_io_size; scalar_t__ sc_io_base; scalar_t__ sc_mem_size; scalar_t__ sc_mem_base; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct mv_pcib_softc *VAR_1)
{
 int VAR_2;




 VAR_1->sc_mem_rman.rm_type = VAR_0;
 VAR_2 = FUNC_1(&VAR_1->sc_mem_rman);
 if (VAR_2)
  return (VAR_2);

 VAR_1->sc_io_rman.rm_type = VAR_0;
 VAR_2 = FUNC_1(&VAR_1->sc_io_rman);
 if (VAR_2) {
  FUNC_0(&VAR_1->sc_mem_rman);
  return (VAR_2);
 }

 VAR_2 = FUNC_2(&VAR_1->sc_mem_rman, VAR_1->sc_mem_base,
     VAR_1->sc_mem_base + VAR_1->sc_mem_size - 1);
 if (VAR_2)
  goto error;

 VAR_2 = FUNC_2(&VAR_1->sc_io_rman, VAR_1->sc_io_base,
     VAR_1->sc_io_base + VAR_1->sc_io_size - 1);
 if (VAR_2)
  goto error;

 return (0);

error:
 FUNC_0(&VAR_1->sc_mem_rman);
 FUNC_0(&VAR_1->sc_io_rman);

 return (VAR_2);
}
