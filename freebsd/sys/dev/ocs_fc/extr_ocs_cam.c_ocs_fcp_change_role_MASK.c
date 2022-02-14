
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ocs_softc {scalar_t__ num_vports; int enable_ini; int enable_tgt; int domain; int xport; } ;
struct TYPE_6__ {int enable_ini; int enable_tgt; int wwnn; int wwpn; } ;
typedef TYPE_1__ ocs_vport_spec_t ;
struct TYPE_7__ {scalar_t__ role; TYPE_1__* vport; } ;
typedef TYPE_2__ ocs_fcport ;
struct TYPE_8__ {scalar_t__ role; } ;


 TYPE_5__* FUNC_0 (struct ocs_softc*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ocs_softc*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct ocs_softc*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct ocs_softc *VAR_5, ocs_fcport *VAR_6, uint32_t VAR_7)
{

 uint32_t VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 ocs_vport_spec_t *VAR_11 = VAR_6->vport;

 for (VAR_9 = 0, VAR_10 = 0; VAR_10 < (VAR_5->num_vports + 1); VAR_10++) {
  if (FUNC_0(VAR_5, VAR_10)->role != VAR_1)
  VAR_9++;
 }


 if ((VAR_9 == 0) || (VAR_11 == ((void*)0))) {
  VAR_6->role = VAR_7;
  if (VAR_11 == ((void*)0)) {
   VAR_5->enable_ini = (VAR_7 & VAR_0)? 1:0;
   VAR_5->enable_tgt = (VAR_7 & VAR_2)? 1:0;
  } else {
   VAR_11->enable_ini = (VAR_7 & VAR_0)? 1:0;
   VAR_11->enable_tgt = (VAR_7 & VAR_2)? 1:0;
  }

  VAR_8 = FUNC_4(VAR_5->xport, VAR_3);
  if (VAR_8) {
   FUNC_1(VAR_5, "port offline failed : %d\n", VAR_8);
  }

  VAR_8 = FUNC_4(VAR_5->xport, VAR_4);
  if (VAR_8) {
   FUNC_1(VAR_5, "port online failed : %d\n", VAR_8);
  }

  return 0;
 }

 if ((VAR_6->role != VAR_1)){
  VAR_6->role = VAR_7;
  VAR_11->enable_ini = (VAR_7 & VAR_0)? 1:0;
  VAR_11->enable_tgt = (VAR_7 & VAR_2)? 1:0;

  return FUNC_3(VAR_5, VAR_5->domain, VAR_11->wwpn, VAR_11->wwnn);
 }

 VAR_6->role = VAR_7;

 VAR_11->enable_ini = (VAR_7 & VAR_0)? 1:0;
 VAR_11->enable_tgt = (VAR_7 & VAR_2)? 1:0;

 if (VAR_6->role != VAR_1) {
  return FUNC_2(VAR_5->domain, VAR_11);
 }

 return (0);
}
