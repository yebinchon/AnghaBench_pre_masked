
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct ses_iterator {int type_element_index; int type_index; } ;
struct scsi_vpd_id_descriptor {int identifier; } ;
struct scsi_vpd_device_id {int dummy; } ;
struct sbuf {int dummy; } ;
struct TYPE_20__ {int status; int path; int func_code; } ;
struct ccb_dev_advinfo {int provsiz; int * buf; TYPE_6__ ccb_h; int bufsiz; int buftype; int flags; } ;
struct TYPE_16__ {scalar_t__ num_set; struct sbuf* physpath; } ;
typedef TYPE_2__ ses_setphyspath_callback_args_t ;
struct TYPE_15__ {int * hdr; } ;
struct TYPE_17__ {char* descr; int descr_len; TYPE_1__ addl; } ;
typedef TYPE_3__ ses_element_t ;
struct TYPE_18__ {TYPE_12__* periph; } ;
typedef TYPE_4__ enc_softc_t ;
struct TYPE_19__ {TYPE_3__* elm_private; } ;
typedef TYPE_5__ enc_element_t ;
struct TYPE_14__ {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_12__*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int * FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct sbuf*,char*) ;
 int FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*) ;
 int * FUNC_10 (struct sbuf*,int *,int,int ) ;
 int FUNC_11 (struct sbuf*,char*,int ,int ,int ) ;
 int FUNC_12 (struct sbuf*,char const) ;
 int FUNC_13 (int ) ;
 int VAR_15 ;
 struct scsi_vpd_id_descriptor* FUNC_14 (struct scsi_vpd_device_id*,int ,int ) ;
 int FUNC_15 (TYPE_4__*,TYPE_5__*,int ,TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_16 (union ccb*) ;
 int FUNC_17 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static int
FUNC_18(enc_softc_t *VAR_17, enc_element_t *VAR_18,
   struct ses_iterator *VAR_19)
{
 struct ccb_dev_advinfo VAR_20;
 ses_setphyspath_callback_args_t VAR_21;
 int VAR_22, VAR_23;
 struct sbuf VAR_24;
 struct scsi_vpd_id_descriptor *VAR_25;
 uint8_t *VAR_26;
 ses_element_t *VAR_27;
 const char *VAR_28;

 VAR_23 = VAR_6;
 VAR_26 = ((void*)0);

 VAR_27 = VAR_18->elm_private;
 if (VAR_27->addl.hdr == ((void*)0))
  goto out;





 FUNC_17(&VAR_20.ccb_h, VAR_17->periph->path, VAR_1);
 VAR_20.ccb_h.func_code = VAR_14;
 VAR_20.flags = VAR_4;
 VAR_20.buftype = VAR_5;
 VAR_20.bufsiz = VAR_3;
 VAR_20.buf = VAR_26 = FUNC_6(VAR_20.bufsiz, VAR_10, VAR_11|VAR_12);
 FUNC_1(VAR_17->periph);
 FUNC_16((union ccb *)&VAR_20);
 if ((VAR_20.ccb_h.status & VAR_0) != 0)
  FUNC_3(VAR_20.ccb_h.path, 0, 0, 0, VAR_9);
 FUNC_2(VAR_17->periph);
 if (VAR_20.ccb_h.status != VAR_2)
  goto out;

 VAR_25 = FUNC_14((struct scsi_vpd_device_id *)VAR_20.buf,
     VAR_20.provsiz, VAR_15);
 if (VAR_25 == ((void*)0))
  goto out;

 if (FUNC_10(&VAR_24, ((void*)0), 128, VAR_13) == ((void*)0)) {
  VAR_23 = VAR_8;
  goto out;
 }

 FUNC_11(&VAR_24, "id1,enc@n%jx/type@%x/slot@%x",
     FUNC_13(VAR_25->identifier), VAR_19->type_index,
     VAR_19->type_element_index);

 if (VAR_27->descr != ((void*)0) && VAR_27->descr_len > 0) {
  FUNC_7(&VAR_24, "/elmdesc@");
  for (VAR_22 = 0, VAR_28 = VAR_27->descr; VAR_22 < VAR_27->descr_len;
      VAR_22++, VAR_28++) {
   if (!FUNC_4(*VAR_28) || FUNC_5(*VAR_28) || *VAR_28 == '/')
    FUNC_12(&VAR_24, '_');
   else
    FUNC_12(&VAR_24, *VAR_28);
  }
 }
 FUNC_9(&VAR_24);






 VAR_21.physpath= &VAR_24;
 VAR_21.num_set = 0;
 FUNC_15(VAR_17, VAR_18, VAR_16, &VAR_21);
 FUNC_8(&VAR_24);

 VAR_23 = VAR_21.num_set == 0 ? VAR_7 : 0;

out:
 if (VAR_26 != ((void*)0))
  FUNC_0(VAR_26);
 return (VAR_23);
}
