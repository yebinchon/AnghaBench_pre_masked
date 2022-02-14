
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ umad_fd; int * cfg; int smps_on_wire; void* user_data; void* smi_dir_agent; void* smi_agent; } ;
typedef TYPE_1__ smp_engine_t ;
typedef int ibnd_config_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int) ;
 void* FUNC_6 (scalar_t__,int ,int,int ,int ) ;

int FUNC_7(smp_engine_t * VAR_3, char * VAR_4, int VAR_5,
      void *VAR_6, ibnd_config_t *VAR_7)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 if (FUNC_4() < 0) {
  FUNC_0("umad_init failed\n");
  return -VAR_0;
 }

 VAR_3->umad_fd = FUNC_5(VAR_4, VAR_5);
 if (VAR_3->umad_fd < 0) {
  FUNC_0("can't open UMAD port (%s:%d)\n", VAR_4, VAR_5);
  return -VAR_0;
 }

 if ((VAR_3->smi_agent = FUNC_6(VAR_3->umad_fd,
      VAR_1, 1, 0, 0)) < 0) {
  FUNC_0("Failed to register SMI agent on (%s:%d)\n",
      VAR_4, VAR_5);
  goto eio_close;
 }

 if ((VAR_3->smi_dir_agent = FUNC_6(VAR_3->umad_fd,
      VAR_2, 1, 0, 0)) < 0) {
  FUNC_0("Failed to register SMI_DIRECT agent on (%s:%d)\n",
      VAR_4, VAR_5);
  goto eio_close;
 }

 VAR_3->user_data = VAR_6;
 FUNC_1(&VAR_3->smps_on_wire);
 VAR_3->cfg = VAR_7;
 return (0);

eio_close:
 FUNC_3(VAR_3->umad_fd);
 return (-VAR_0);
}
