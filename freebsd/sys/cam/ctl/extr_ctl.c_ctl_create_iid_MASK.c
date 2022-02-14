
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_transportid_spi {int format_protocol; int rel_trgt_port_id; int scsi_addr; int sas_address; int additional_length; int iscsi_name; int n_port_name; } ;
struct scsi_transportid_sas {int format_protocol; int rel_trgt_port_id; int scsi_addr; int sas_address; int additional_length; int iscsi_name; int n_port_name; } ;
struct scsi_transportid_iscsi_port {int format_protocol; int rel_trgt_port_id; int scsi_addr; int sas_address; int additional_length; int iscsi_name; int n_port_name; } ;
struct scsi_transportid_fcp {int format_protocol; int rel_trgt_port_id; int scsi_addr; int sas_address; int additional_length; int iscsi_name; int n_port_name; } ;
struct ctl_port {int port_type; int targ_port; TYPE_1__* wwpn_iid; } ;
struct TYPE_2__ {int wwpn; int * name; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_transportid_spi*,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_6(struct ctl_port *VAR_5, int VAR_6, uint8_t *VAR_7)
{
 int VAR_8;

 switch (VAR_5->port_type) {
 case 130:
 {
  struct scsi_transportid_fcp *VAR_9 =
      (struct scsi_transportid_fcp *)VAR_7;
  if (VAR_5->wwpn_iid[VAR_6].wwpn == 0)
   return (0);
  FUNC_0(VAR_9, 0, sizeof(*VAR_9));
  VAR_9->format_protocol = VAR_0;
  FUNC_3(VAR_5->wwpn_iid[VAR_6].wwpn, VAR_9->n_port_name);
  return (sizeof(*VAR_9));
 }
 case 129:
 {
  struct scsi_transportid_iscsi_port *VAR_10 =
      (struct scsi_transportid_iscsi_port *)VAR_7;
  if (VAR_5->wwpn_iid[VAR_6].name == ((void*)0))
   return (0);
  FUNC_0(VAR_10, 0, 256);
  VAR_10->format_protocol = VAR_4 |
      VAR_1;
  VAR_8 = FUNC_5(VAR_10->iscsi_name, VAR_5->wwpn_iid[VAR_6].name, 252) + 1;
  VAR_8 = FUNC_2(FUNC_1(VAR_8, 252), 4);
  FUNC_4(VAR_8, VAR_10->additional_length);
  return (sizeof(*VAR_10) + VAR_8);
 }
 case 128:
 {
  struct scsi_transportid_sas *VAR_11 =
      (struct scsi_transportid_sas *)VAR_7;
  if (VAR_5->wwpn_iid[VAR_6].wwpn == 0)
   return (0);
  FUNC_0(VAR_11, 0, sizeof(*VAR_11));
  VAR_11->format_protocol = VAR_2;
  FUNC_3(VAR_5->wwpn_iid[VAR_6].wwpn, VAR_11->sas_address);
  return (sizeof(*VAR_11));
 }
 default:
 {
  struct scsi_transportid_spi *VAR_12 =
      (struct scsi_transportid_spi *)VAR_7;
  FUNC_0(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->format_protocol = VAR_3;
  FUNC_4(VAR_6, VAR_12->scsi_addr);
  FUNC_4(VAR_5->targ_port, VAR_12->rel_trgt_port_id);
  return (sizeof(*VAR_12));
 }
 }
}
