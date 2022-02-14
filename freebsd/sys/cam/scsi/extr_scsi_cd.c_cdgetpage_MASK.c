
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cd_pages {int dummy; } cd_pages ;
struct scsi_mode_header_6 {int dummy; } ;
struct scsi_mode_header_10 {int dummy; } ;
struct cd_mode_params {int cdb_size; scalar_t__ mode_buf; } ;


 scalar_t__ FUNC_0 (struct scsi_mode_header_10*) ;
 scalar_t__ FUNC_1 (struct scsi_mode_header_6*) ;

__attribute__((used)) static union cd_pages *
FUNC_2(struct cd_mode_params *VAR_0)
{
 union cd_pages *VAR_1;

 if (VAR_0->cdb_size == 10)
  VAR_1 = (union cd_pages *)FUNC_0(
   (struct scsi_mode_header_10 *)VAR_0->mode_buf);
 else
  VAR_1 = (union cd_pages *)FUNC_1(
   (struct scsi_mode_header_6 *)VAR_0->mode_buf);

 return (VAR_1);
}
