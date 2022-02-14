
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_4__ {int * iops; } ;
struct bcm_nvram_iocfe {char* dname; scalar_t__ fd; int req_blk_erase; void* size; void* offset; TYPE_1__ io; } ;
struct TYPE_5__ {void* nvram_size; scalar_t__ nvram_offset; scalar_t__ nvram_eraseflg; } ;
typedef TYPE_2__ nvram_info_t ;
typedef int nvram_info ;
typedef scalar_t__ intmax_t ;
typedef void* int64_t ;
struct TYPE_6__ {int flash_flags; void* flash_size; } ;
typedef TYPE_3__ flash_info_t ;
typedef int fi ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_nvram_iocfe*,char*,void*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int ,unsigned char*,int,int*,int ) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct bcm_nvram_iocfe *VAR_9, char *VAR_10)
{
 nvram_info_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int64_t VAR_16;
 u_int VAR_17;
 bool VAR_18;
 int VAR_19;

 VAR_9->io.iops = &VAR_8;
 VAR_9->dname = VAR_10;


 VAR_9->fd = FUNC_4(VAR_10);
 if (VAR_9->fd <= 0) {
  FUNC_0(VAR_9, "cfe_open() failed: %d\n", VAR_9->fd);

  return (VAR_3);
 }


 if ((VAR_13 = FUNC_2(VAR_9->dname)) < 0) {
  FUNC_0(VAR_9, "cfe_getdevinfo() failed: %d\n", VAR_13);
  VAR_19 = VAR_3;
  goto failed;
 }


 VAR_14 = VAR_13 & VAR_0;
 switch (VAR_14) {
 case 129:
 case 128:

  break;
 default:
  FUNC_0(VAR_9, "unknown device type: %d\n", VAR_14);
  VAR_19 = VAR_3;
  goto failed;
 }


 VAR_12 = FUNC_3(VAR_9->fd, VAR_6,
     (unsigned char *)&VAR_11, sizeof(VAR_11), &VAR_15, 0);
 if (VAR_12 == VAR_2) {

  if (VAR_11.nvram_size < 0 ||
      VAR_11.nvram_offset < 0)
  {
   FUNC_0(VAR_9, "invalid NVRAM layout (%d/%d)\n",
       VAR_11.nvram_size, VAR_11.nvram_offset);
   VAR_19 = VAR_3;
   goto failed;
  }

  VAR_16 = VAR_11.nvram_offset;
  VAR_17 = VAR_11.nvram_size;
  VAR_18 = (VAR_11.nvram_eraseflg != 0);
 } else if (VAR_12 != VAR_2 && VAR_12 != VAR_1) {
  FUNC_0(VAR_9, "IOCTL_NVRAM_GETINFO failed: %d\n", VAR_12);
  VAR_19 = VAR_3;
  goto failed;
 }







 if (VAR_12 == VAR_1) {
  flash_info_t VAR_20;

  VAR_12 = FUNC_3(VAR_9->fd, VAR_5,
      (unsigned char *)&VAR_20, sizeof(VAR_20), &VAR_15, 0);

  if (VAR_12 != VAR_2) {
   FUNC_0(VAR_9, "IOCTL_FLASH_GETINFO failed %d\n",
       VAR_12);
   VAR_19 = VAR_3;
   goto failed;
  }

  VAR_16 = 0x0;
  VAR_17 = VAR_20.flash_size;
  VAR_18 = !(VAR_20.flash_flags & VAR_4);
 }



 if (VAR_17 > VAR_7 || VAR_7 - VAR_17 < VAR_16) {
  FUNC_0(VAR_9, "invalid NVRAM layout (%#x/%#jx)\n",
      VAR_17, (intmax_t)VAR_16);
  VAR_19 = VAR_3;
  goto failed;
 }

 VAR_9->offset = VAR_16;
 VAR_9->size = VAR_17;
 VAR_9->req_blk_erase = VAR_18;

 return (VAR_2);

failed:
 if (VAR_9->fd >= 0)
  FUNC_1(VAR_9->fd);

 return (VAR_19);
}
